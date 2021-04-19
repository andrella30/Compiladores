/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COMMA = 258,
    COLON = 259,
    SEMICOLON = 260,
    LPAREN = 261,
    RPAREN = 262,
    LBRACK = 263,
    RBRACK = 264,
    LBRACE = 265,
    RBRACE = 266,
    DOT = 267,
    EQ = 268,
    PLUS = 269,
    MINUS = 270,
    TIMES = 271,
    DIVIDE = 272,
    NEQ = 273,
    LT = 274,
    LE = 275,
    GT = 276,
    GE = 277,
    AND = 278,
    OR = 279,
    ASSIGN = 280,
    ARRAY = 281,
    BREAK = 282,
    DO = 283,
    FOR = 284,
    TO = 285,
    WHILE = 286,
    IF = 287,
    THEN = 288,
    ELSE = 289,
    LET = 290,
    IN = 291,
    END = 292,
    OF = 293,
    NIL = 294,
    FUNCTION = 295,
    VAR = 296,
    TYPE = 297,
    STRING = 298,
    ID = 299,
    INT = 300,
    LOW = 301,
    UMINUS = 302
  };
#endif
/* Tokens.  */
#define COMMA 258
#define COLON 259
#define SEMICOLON 260
#define LPAREN 261
#define RPAREN 262
#define LBRACK 263
#define RBRACK 264
#define LBRACE 265
#define RBRACE 266
#define DOT 267
#define EQ 268
#define PLUS 269
#define MINUS 270
#define TIMES 271
#define DIVIDE 272
#define NEQ 273
#define LT 274
#define LE 275
#define GT 276
#define GE 277
#define AND 278
#define OR 279
#define ASSIGN 280
#define ARRAY 281
#define BREAK 282
#define DO 283
#define FOR 284
#define TO 285
#define WHILE 286
#define IF 287
#define THEN 288
#define ELSE 289
#define LET 290
#define IN 291
#define END 292
#define OF 293
#define NIL 294
#define FUNCTION 295
#define VAR 296
#define TYPE 297
#define STRING 298
#define ID 299
#define INT 300
#define LOW 301
#define UMINUS 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "tiger.y"

    string sval;
    int ival;
    int pos; 
    A_var var;
    A_exp exp;
    A_dec dec;
    A_ty ty;
    A_namety namety;
    A_nametyList nametylist;
    A_decList declist;
    A_expList explist;
    A_field field;
    A_fieldList fieldlist;
    A_fundec fundec;
    A_fundecList fundeclist;
    A_efield efield;
    A_efieldList efieldlist;
    S_symbol sym;

#line 172 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
