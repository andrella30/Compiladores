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
    STRING = 258,
    ID = 259,
    INT = 260,
    COMMA = 261,
    COLON = 262,
    SEMICOLON = 263,
    LPAREN = 264,
    RPAREN = 265,
    LBRACK = 266,
    RBRACK = 267,
    LBRACE = 268,
    RBRACE = 269,
    DOT = 270,
    EQ = 271,
    PLUS = 272,
    MINUS = 273,
    TIMES = 274,
    DIVIDE = 275,
    NEQ = 276,
    LT = 277,
    LE = 278,
    GT = 279,
    GE = 280,
    AND = 281,
    OR = 282,
    ASSIGN = 283,
    ARRAY = 284,
    BREAK = 285,
    DO = 286,
    FOR = 287,
    TO = 288,
    WHILE = 289,
    IF = 290,
    THEN = 291,
    ELSE = 292,
    LET = 293,
    IN = 294,
    END = 295,
    OF = 296,
    NIL = 297,
    FUNCTION = 298,
    VAR = 299,
    TYPE = 300,
    LOW = 301,
    UMINUS = 302
  };
#endif
/* Tokens.  */
#define STRING 258
#define ID 259
#define INT 260
#define COMMA 261
#define COLON 262
#define SEMICOLON 263
#define LPAREN 264
#define RPAREN 265
#define LBRACK 266
#define RBRACK 267
#define LBRACE 268
#define RBRACE 269
#define DOT 270
#define EQ 271
#define PLUS 272
#define MINUS 273
#define TIMES 274
#define DIVIDE 275
#define NEQ 276
#define LT 277
#define LE 278
#define GT 279
#define GE 280
#define AND 281
#define OR 282
#define ASSIGN 283
#define ARRAY 284
#define BREAK 285
#define DO 286
#define FOR 287
#define TO 288
#define WHILE 289
#define IF 290
#define THEN 291
#define ELSE 292
#define LET 293
#define IN 294
#define END 295
#define OF 296
#define NIL 297
#define FUNCTION 298
#define VAR 299
#define TYPE 300
#define LOW 301
#define UMINUS 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "tiger.y"

    int pos;
    int ival;
    string sval;
	S_symbol sym;
    A_var var;
    A_exp exp;
    A_dec dec;
    A_ty ty;
    A_decList declist;
    A_expList explist;
    A_field field;
    A_fieldList fieldlist;
    A_fundec fundec;
    A_fundecList fundeclist;
    A_namety namety;
    A_nametyList nametylist;
    A_efield efield;
    A_efieldList efieldlist;

#line 172 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
