%{
#include <string.h>
#include "util.h"
#include "tokens.h"
#include "errormsg.h"
#include <math.h>

int commentDepth = 0;
char stringText[16384] = "";
int charPos=1;

int yywrap(void) {
 charPos=1;
 return 1;
}

 void adjust(void) {
  EM_tokPos=charPos;
  charPos+=yyleng;
 }

%}

%x COMMENT STRINGS 
%%

<INITIAL>"/*"   {adjust(); BEGIN(COMMENT); commentDepth++;}
<INITIAL>"\""   {adjust(); BEGIN(STRINGS); stringText[0]= '\0'; strcat(stringText,"\"");}

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

<STRINGS>\"         {adjust();  BEGIN(INITIAL); strcat(stringText,'\"'); yylval.sval=String(stringText); return STRING;}
<STRINGS><<EOF>>    {adjust(); EM_error(EM_tokPos, "UNFINISHED STRING");}
<STRINGS>\n         {adjust();  EM_newline(); BEGIN(INITIAL);  EM_error(EM_tokPos,"UNCLOSED STRING");}
<STRINGS>\\n        {adjust();  strcat(stringText,'\n'); }
<STRINGS>\\t        {adjust();  strcat(stringText,'\t');}
<STRINGS>\\\\       {adjust();  strcat(stringText,'\\');}
<STRINGS>\\\"       {adjust();  strcat(stringText,'\"');}
<STRINGS>\\[\n\t]+\\  { }
<STRINGS>\\.          {adjust();  EM_error(EM_tokPos,"INVALID ESCAPE CODE");}
<STRINGS>.            {adjust();  strcat(string_text,yytext);}

<COMMENT>"/*"        {adjust(); commentDepth++;}
<COMMENT>"*/"        {adjust(); if (--commentDepth == 0) {BEGIN(INITIAL);}}
<COMMENT>"\n"        {adjust(); EM_newline();}
<COMMENT><<EOF>>     {adjust(); EM_error(EM_tokPos, "UNFINISHED COMMENT");}
<COMMENT>.           {adjust();}

<INITIAL>" "|"\n"|"\t"          {adjust(); }
<INITIAL>[a-zA-Z][a-zA-Z0-9_]*  {adjust(); yylval.sval = yytext; return ID;}
<INITIAL>[0-9]+                 {adjust(); yylval.ival = atoi(yytext); return INT;}

%%
