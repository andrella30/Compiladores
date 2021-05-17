%{
#include <string.h>
#include <limits.h>
#include "util.h"
#include "absyn.h"
#include "tiger.tab.h"
#include "errormsg.h"

#define MAX_STR_CONST 16384

int line_num = 0;
int char_pos = 1;

char string_buf[MAX_STR_CONST];
char *string_buf_ptr;

void adjust(void);

%}

%x COMMENT STRING_ML STRING_S
asc_range ([01][0-9]{2}|2[0-4][0-9]|25[0-5])
%%


<INITIAL>array    {adjust(); return ARRAY;}
<INITIAL>if       {adjust(); return IF;}
<INITIAL>then     {adjust(); return THEN;}
<INITIAL>else     {adjust(); return ELSE;}
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
<INITIAL>type     {adjust(); return TYPE;}


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
<INITIAL>"*"    {adjust(); return TIMES;}
<INITIAL>"/"    {adjust(); return DIVIDE;}
<INITIAL>"+"    {adjust(); return PLUS;}
<INITIAL>"-"    {adjust(); return MINUS;}
<INITIAL>"="    {adjust(); return EQ;}
<INITIAL>"<>"   {adjust(); return NEQ;}
<INITIAL>"<"    {adjust(); return LT;}
<INITIAL>"<="   {adjust(); return LE;}
<INITIAL>">"    {adjust(); return GT;}
<INITIAL>">="   {adjust(); return GE;}
<INITIAL>"&"    {adjust(); return AND;}
<INITIAL>"|"    {adjust(); return OR;}
<INITIAL>":="   {adjust(); return ASSIGN;}

<INITIAL>\"               {adjust(); BEGIN(STRING_S); string_buf[0]= '\0'; strcat(string_buf,"\"");}
<STRING_ML>[ \t]					{adjust(); continue;}
<STRING_ML>"\n"						{adjust(); EM_newline(); continue;}
<STRING_ML>\\							{adjust(); BEGIN(STRING_S);}
<STRING_ML>.							{adjust(); EM_error(EM_tokPos,"invalid character in multiline string"); yyterminate();}

<STRING_S>"\""							{adjust(); BEGIN(INITIAL); strcat(string_buf,"\""); yylval.sval=String(string_buf); return STRING;}
<STRING_S><<EOF>>						{EM_newline(); BEGIN(INITIAL);  EM_error(EM_tokPos,"unclosed multiline string"); yyterminate();}
<STRING_S>"\\n"							{adjust(); strcat(string_buf,"\n"); continue;}
<STRING_S>"\\t"							{adjust(); strcat(string_buf,"\t"); continue;}
<STRING_S>"\\\\"						{adjust(); strcat(string_buf,"\\"); continue;}
<STRING_S>"\\\""						{adjust(); strcat(string_buf,"\""); continue;}
<STRING_S>\\^[a-z]						{adjust(); 
											if (strchr("abcdefghijklmnopqrstuvwxyz", yytext[2])) {
												char p[2];
												p[0] = (yytext[2] - 'a' + 1);
												p[1] = '\0';

												strcat(string_buf, p);
												continue;
											} else {
												EM_error(EM_tokPos, "illegal escape sequence");
												yyterminate();
											}
										}
<STRING_S>\\{asc_range}					{adjust();  char p[2]; p[0] = (char)atoi(&yytext[1]); p[1] = '\0'; strcat(string_buf, p); continue;}
<STRING_S>\\[ \t]+						{adjust();  BEGIN(STRING_ML);}
<STRING_S>\\\n							{adjust();  EM_newline(); BEGIN(STRING_ML);}
<STRING_S>\\.							{adjust();  EM_error(EM_tokPos,"invalid character or ASC code"); yyterminate();}
<STRING_S>.								{adjust();  strcat(string_buf,yytext); continue;}

<INITIAL>[a-zA-Z][a-zA-Z0-9_]*|_main				{adjust(); yylval.sval = Id(yytext); return ID;}

<INITIAL>[0-9]+									{adjust(); long int tmp = strtol(yytext, NULL, 10);
											if(tmp > INT_MAX || tmp == LONG_MAX) {
												EM_error(EM_tokPos, "Integer out of range");
												yyterminate();
											}
											yylval.ival = tmp;
											return INT;}

<INITIAL>\n       {adjust(); EM_newline(); continue;}
                      
<INITIAL>(" "|"\a"|"\b"|"\f"|"\r"|"\t"|"\v")+	{adjust(); continue;}


<INITIAL>"/*"         	{adjust(); line_num++; BEGIN(COMMENT);}
<COMMENT><<EOF>>		{adjust(); EM_error(EM_tokPos, "unclose comment"); yyterminate();}
<COMMENT>"*/"			{adjust(); line_num--; if(line_num == 0) BEGIN(INITIAL);}
<COMMENT>.				{adjust(); continue;}

<INITIAL>.	         	{adjust(); EM_error(EM_tokPos, "BAD_TOKEN"); yyterminate();}

%%

int yywrap(void) {
 char_pos=1;
 return 1;
}

void adjust(void) {
  EM_tokPos=char_pos;
  char_pos+=yyleng;
 }


