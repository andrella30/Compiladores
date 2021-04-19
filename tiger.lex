%{
#include <string.h>
#include "util.h"
#include "tiger.tab.h"
#include "errormsg.h"
#include <math.h>

#define MAX_STR_CONST 16384

int line_num = 0;
int char_pos = 1;

char string_buf[MAX_STR_CONST];
char *string_buf_ptr;

void adjust(void);

%}

%x COMMENT STR
%%

<INITIAL>[ \t\r]      {adjust(); continue;}
<INITIAL>\n           {adjust(); EM_newline(); continue;}

  /*comments*/ 
<INITIAL>"/*"        {adjust(); BEGIN(COMMENT); line_num++;}
<COMMENT>"/*"        {adjust(); line_num++;}
<COMMENT>"*/"        {adjust(); if (--line_num == 0) {BEGIN(INITIAL);}}
<COMMENT>"\n"        {adjust(); EM_newline();}
<COMMENT><<EOF>>     {adjust(); EM_error(EM_tokPos, "UNFINISHED COMMENT"); }
<COMMENT>.           {adjust();}

<INITIAL>array    {adjust(); return ARRAY;}
<INITIAL>if       {adjust(); return IF;}
<INITIAL>then     {adjust(); return THEN;}
<INITIAL>type     {adjust(); return TYPE;}
<INITIAL>while    {adjust(); return WHILE;}
<INITIAL>for      {adjust(); return FOR;}
<INITIAL>to       {adjust(); return TO;}
<INITIAL>do       {adjust(); return DO;}
<INITIAL>let      {adjust(); return LET;}
<INITIAL>in       {adjust(); return IN;}
<INITIAL>end      {adjust(); return END;}
<INITIAL>of       {adjust(); return OF;}
<INITIAL>break    {adjust(); return BREAK;}
<INITIAL>nil      {adjust(); return NIL;}
<INITIAL>function {adjust(); return FUNCTION;}
<INITIAL>var      {adjust(); return VAR;}
<INITIAL>else     {adjust(); return ELSE;}

<INITIAL>[a-zA-Z][a-zA-Z0-9_]*  {adjust(); yylval.sval = yytext; return ID;}

<INITIAL>","    {adjust(); return COMMA;}
<INITIAL>":"    {adjust(); return COLON;}
<INITIAL>";"    {adjust(); return SEMICOLON;}
<INITIAL>"("    {adjust(); return LPAREN;}
<INITIAL>")"    {adjust(); return RPAREN;}
<INITIAL>"["    {adjust(); return LBRACK;}
<INITIAL>"]"    {adjust(); return RBRACK;}
<INITIAL>"{"    {adjust(); return LBRACE;}
<INITIAL>"}"    {adjust(); return RBRACE;}
<INITIAL>"."    {adjust(); return DOT;}
<INITIAL>"+"    {adjust(); return PLUS;}
<INITIAL>"-"    {adjust(); return MINUS;}
<INITIAL>"*"    {adjust(); return TIMES;;}
<INITIAL>"/"    {adjust(); return DIVIDE;}
<INITIAL>"="    {adjust(); return EQ;}
<INITIAL>"<>"   {adjust(); return NEQ;}
<INITIAL>"<"    {adjust(); return LT;}
<INITIAL>"<="   {adjust(); return LE;}
<INITIAL>">"    {adjust(); return GT;}
<INITIAL>">="   {adjust(); return GE;}
<INITIAL>"&"    {adjust(); return AND;}
<INITIAL>"|"    {adjust(); return OR;}
<INITIAL>":="   {adjust(); return ASSIGN;}

<INITIAL>[0-9]+       {adjust(); yylval.ival = atoi(yytext); return INT;}

  /*strings */
<INITIAL>\"           {adjust(); BEGIN(STR); string_buf_ptr = string_buf;}
<STR>\"               {adjust(); yylval.sval = String(string_buf); BEGIN(INITIAL); return STRING;}
<STR>\n               {adjust(); EM_error(EM_tokPos,"UNCLOSED STRING"); }
<STR><<EOF>>          {adjust(); EM_error(EM_tokPos,"UNCLOSED STRING"); }
<STR>\\n              {*string_buf_ptr++ = '\n';}
<STR>\\t              {*string_buf_ptr++ = '\t';}
<STR>\\\              {*string_buf_ptr++ = '"'; }
<STR>\\\\             {*string_buf_ptr++ = '\\';}
<STR>\\[0-9]{3}       {int i = atoi(&yytext[1]); *string_buf_ptr++ = (char)i;}
<STR>\\[\n\t ]+\\     {}
<STR>\\(.|\n)	        {adjust(); EM_error(EM_tokPos, "ILLEGAL TOKEN");}

<INITIAL>.	          {adjust(); EM_error(EM_tokPos,"ILLEGAL TOKEN");}
%%

int yywrap(void) {
 char_pos=1;
 return 1;
}

void adjust(void) {
  EM_tokPos=char_pos;
  char_pos+=yyleng;
 }


