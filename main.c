#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "absyn.h"
#include "assem.h"
#include "canon.h"
#include "codegen.h"
#include "errormsg.h"
#include "findEscape.h"
#include "frame.h"
#include "parse.h"
#include "prabsyn.h"
#include "printtree.h"
#include "semant.h"
#include "symbol.h"
#include "temp.h"
#include "translate.h"
#include "tree.h"
#include "util.h"
int print_absyntree = 0, print_irtree = 0, print_canon = 0, print_assembly = 0;

static void do_proc(FILE *out, F_frame frame, T_stm body, int print_canon, int print_assembly) {
  AS_instrList instr_l = NULL;
  T_stmList stm_l = NULL;

  stm_l = C_linearize(body);
  stm_l = C_traceSchedule(C_basicBlocks(stm_l));


  if (print_canon && !anyErrors) {
      printStmList(out, stm_l);
  }
  if (print_assembly && !anyErrors) {
      instr_l = F_codegen(frame, stm_l);
      AS_printInstrList(out, instr_l, F_tempMap());
  }
}

void print_help(){
  printf("Opções válidas:\n \
  tc -p <prog.tig> // nome programa de entrada\n \
  -o <prog> // nome da saida (código executável)\n \
  -a // imprime a árvore sintática abstrata\n \
  -i // imprime a representação intermediária\n \
  -c // imprime a representação intermediária após a geração de árvores canônicas.\n \
  -s // imprime o código Assembly (antes da alocação de registradores)\n");
}

int main(int argc, char *argv[]) {
  int ch;
  char *inputFile, *outputFile;
  while ((ch = getopt(argc, argv, "aho:p:isSc")) != -1) {
    switch (ch) {
    case 'h':
      print_help();
      break;

    case 'p':
      inputFile = (char *)malloc(strlen(optarg));
      strcpy(inputFile, optarg);
      break;

    case 'a':      
      print_absyntree = 1;
      break;

    case 'o':
      outputFile = (char *)malloc(strlen(optarg));
      strcpy(outputFile, optarg);
      break;

    case 'i':
      print_irtree = 1;
      break;

    case 'c':
      print_canon = 1;
      break;

    case 's':      
      print_assembly = 1;
      break;

    default:
      print_help();
      exit(EXIT_FAILURE);
      break;
    }
  }

  // Árvore Sintática Abstrata
  A_exp absyn_root = parse(inputFile);
  FILE *out = stdout;
  if (!absyn_root){
    exit(EXIT_FAILURE);
  }
  if (print_absyntree && !anyErrors) {
    printf("--------------Árvore Sintática Abstrata--------------\n");
    pr_exp(out, absyn_root, 0); 
    printf("\n");
  }

  Esc_findEscape(absyn_root);
  F_fragList frags = SEM_transProg(absyn_root,0);

  // Representação Intermediária
  if (print_irtree) {
     printf("-------------Representação Intermediária-------------\n");
     SEM_transProg(absyn_root, print_irtree);
     printf("\n");
  }

  // Assembly
  if (print_assembly){
    printf("-----------------------Assembly-----------------------\n");
    for(F_fragList f = frags; f; f = f->tail) {
        if(f->head->kind == F_procFrag) {
            do_proc(out, f->head->u.proc.frame, f->head->u.proc.body, 0, print_assembly);
        }
    }
    printf("\n");
  }

  // Representação intermediária após a geração de árvores canônicas
  if (print_canon) {
     printf("--------------RI após árvores canônicas--------------\n");
     for(F_fragList f = frags; f; f = f->tail) {
        if(f->head->kind == F_procFrag) {
          do_proc(out, f->head->u.proc.frame, f->head->u.proc.body, print_canon, 0);
        }
     }
     printf("\n");
  }
}

