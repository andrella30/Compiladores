/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tiger.y"

#include <stdio.h>
#include "util.h"
#include "errormsg.h"
#include "absyn.h"
#include "symbol.h"


int yylex(void);

A_exp absyn_root;

int yyerror(char *msg) {
    EM_error(EM_tokPos, msg);
}


#line 88 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 255 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    89,    89,    92,    93,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   118,   119,   120,   121,   125,   129,   130,
     134,   135,   136,   140,   141,   145,   149,   150,   151,   154,
     155,   159,   160,   164,   168,   169,   173,   174,   178,   179,
     183,   186,   187,   191,   192,   196,   200,   203,   204,   205,
     208,   209,   213,   214,   218,   219,   220,   221,   225,   226,
     227,   228,   229,   230,   235
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "ID", "INT", "COMMA", "COLON",
  "SEMICOLON", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE",
  "DOT", "EQ", "PLUS", "MINUS", "TIMES", "DIVIDE", "NEQ", "LT", "LE", "GT",
  "GE", "AND", "OR", "ASSIGN", "ARRAY", "BREAK", "DO", "FOR", "TO",
  "WHILE", "IF", "THEN", "ELSE", "LET", "IN", "END", "OF", "NIL",
  "FUNCTION", "VAR", "TYPE", "LOW", "UMINUS", "$accept", "program",
  "primyexp", "exp", "lvalue", "func_call", "decs", "dec", "tydeclist",
  "tydec", "ty", "typefields", "typefields_nonempty", "typefield",
  "vardec", "fundeclist", "fundec", "record_create", "record_create_list",
  "record_create_list_nonempty", "record_create_field", "array_create",
  "expseq", "explist", "explist_nonempty", "arith_exp", "cmp_exp", "id", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF (-29)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      57,   -29,   -29,   -29,    57,    57,   -29,     3,    57,    57,
     -15,   -29,    23,   -29,   233,    10,   -29,   -29,   -29,   -29,
     -29,    -7,    92,    26,   -29,     9,   177,    60,     3,     3,
       3,    16,   -15,   -29,    11,   -29,   -29,    20,   -29,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
       3,    57,    57,    57,     3,    57,   -29,    57,    57,    57,
      45,    -4,    48,    57,   -29,   -29,   -29,   243,    14,    14,
     -29,   -29,   243,   243,   243,   243,   243,   209,   -29,   233,
     140,    55,   -29,   223,    53,   -29,    62,    54,   -29,   159,
     233,    -5,     3,     3,    57,    -3,    29,   -29,    57,   -29,
      33,   -29,     3,    57,    57,    57,    76,   -29,    82,    83,
      73,   233,     3,    61,   -29,   -29,   -29,   -29,    57,   -29,
     233,   193,   233,    15,     3,     3,    57,    93,     3,   233,
      57,     3,    57,   -29,   -29,   233,   -29,   -29,   233,    90,
     233,    57,   233
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,    74,     7,    57,     0,    20,     0,     0,     0,
      28,     6,     0,     2,     4,     5,    10,    13,    14,    11,
      12,    23,    58,     0,     9,     0,     0,     0,     0,     0,
       0,     0,    28,    30,    33,    31,    32,    46,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,    51,    57,    22,     0,     0,     0,
       0,     0,     0,    57,    29,    34,    47,    68,    64,    65,
      66,    67,    69,    70,    71,    72,    73,     0,    26,    15,
      62,     0,    61,     0,     0,    52,    53,     0,    59,     0,
      18,    17,    39,     0,     0,     0,     0,    25,     0,    27,
      24,    50,     0,     0,     0,     0,     0,    40,    41,     0,
       0,    44,    39,     0,    35,    36,    21,    63,     0,    54,
      55,     0,    16,     0,     0,     0,     0,     0,     0,    56,
       0,     0,     0,    42,    43,    45,    37,    38,    19,     0,
      48,     0,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -29,   -29,   -29,     0,   -29,   -29,    87,   -29,    86,   -29,
     -29,    12,    -2,   -29,   -29,    84,   -29,   -29,   -29,    21,
     -29,   -29,   -28,   -29,    27,   -29,   -29,    43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    13,    22,    15,    16,    31,    32,    33,    34,
     114,   106,   107,   108,    35,    36,    37,    17,    84,    85,
      86,    18,    23,    81,    82,    19,    20,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,     2,    52,    93,    53,    24,    54,     2,    26,    27,
     112,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   131,    38,    94,    50,   113,    88,    28,    29,
      30,   132,   105,    42,    43,    96,    56,    57,    51,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      25,    79,    80,    83,    92,    63,    30,    89,    90,    91,
       1,     2,     3,    28,    95,    99,     4,   101,   102,   116,
     103,    60,    61,    62,   118,     5,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   123,     6,   124,     7,
     125,     8,     9,    78,   111,    10,    59,    87,    80,    11,
      55,   126,   128,   120,   121,   122,   141,   136,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,   129,    64,
      65,    66,   133,   119,   127,   117,   135,     0,     0,     0,
     138,     0,   140,     0,     0,   109,   110,     0,   115,     0,
       0,   142,     0,     0,     0,    87,    98,     0,     0,     0,
       0,     0,     0,     0,     0,   109,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,   109,   134,     0,
       0,   137,     0,     0,   139,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,     0,     0,     0,     0,
       0,     0,   104,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,    58,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
       0,    97,     0,     0,   130,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   100,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1
};

static const yytype_int16 yycheck[] =
{
       0,     4,     9,     7,    11,     5,    13,     4,     8,     9,
      13,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    11,     7,     0,    28,    15,    29,    55,    43,    44,
      45,    16,    37,    19,    20,    63,    10,    28,    28,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       7,    51,    52,    53,     9,    39,    45,    57,    58,    59,
       3,     4,     5,    43,    16,    10,     9,    14,     6,    40,
      16,    28,    29,    30,    41,    18,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    10,    30,     6,    32,
       7,    34,    35,    50,    94,    38,    36,    54,    98,    42,
       8,    28,    41,   103,   104,   105,    16,    14,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   118,    32,
      34,    37,   124,   102,   112,    98,   126,    -1,    -1,    -1,
     130,    -1,   132,    -1,    -1,    92,    93,    -1,    95,    -1,
      -1,   141,    -1,    -1,    -1,   102,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,   124,   125,    -1,
      -1,   128,    -1,    -1,   131,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    12,    -1,    -1,    31,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    12,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     9,    18,    30,    32,    34,    35,
      38,    42,    49,    50,    51,    52,    53,    65,    69,    73,
      74,    75,    51,    70,    51,    75,    51,    51,    43,    44,
      45,    54,    55,    56,    57,    62,    63,    64,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    11,
      15,    28,     9,    11,    13,     8,    10,    28,    31,    36,
      75,    75,    75,    39,    54,    56,    63,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    75,    51,
      51,    71,    72,    51,    66,    67,    68,    75,    70,    51,
      51,    51,     9,     7,    28,    16,    70,    12,     6,    10,
      12,    14,     6,    16,    33,    37,    59,    60,    61,    75,
      75,    51,    13,    29,    58,    75,    40,    72,    41,    67,
      51,    51,    51,    10,     6,     7,    28,    59,    41,    51,
      31,     7,    16,    60,    75,    51,    14,    75,    51,    75,
      51,    16,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    52,    52,    53,    54,    54,
      55,    55,    55,    56,    56,    57,    58,    58,    58,    59,
      59,    60,    60,    61,    62,    62,    63,    63,    64,    64,
      65,    66,    66,    67,    67,    68,    69,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     3,     6,     4,     4,     8,
       1,     5,     3,     1,     4,     4,     3,     4,     0,     2,
       1,     1,     1,     1,     2,     4,     1,     3,     3,     0,
       1,     1,     3,     3,     4,     6,     1,     2,     7,     9,
       4,     0,     1,     1,     3,     3,     6,     0,     1,     3,
       0,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 89 "tiger.y"
                  { absyn_root = (yyvsp[0].exp); }
#line 1554 "y.tab.c"
    break;

  case 3:
#line 92 "tiger.y"
                      {(yyval.exp) = NULL;}
#line 1560 "y.tab.c"
    break;

  case 4:
#line 93 "tiger.y"
                       {(yyval.exp) = (yyvsp[0].exp);}
#line 1566 "y.tab.c"
    break;

  case 5:
#line 97 "tiger.y"
                                                    {(yyval.exp) = A_VarExp(EM_tokPos, (yyvsp[0].var));}
#line 1572 "y.tab.c"
    break;

  case 6:
#line 98 "tiger.y"
                                                {(yyval.exp) = A_NilExp(EM_tokPos);}
#line 1578 "y.tab.c"
    break;

  case 7:
#line 99 "tiger.y"
                                                {(yyval.exp) = A_IntExp(EM_tokPos, (yyvsp[0].ival));}
#line 1584 "y.tab.c"
    break;

  case 8:
#line 100 "tiger.y"
                                                {(yyval.exp) = A_StringExp(EM_tokPos, (yyvsp[0].sval));}
#line 1590 "y.tab.c"
    break;

  case 9:
#line 101 "tiger.y"
                                                    {(yyval.exp) = A_OpExp(EM_tokPos, A_minusOp, A_IntExp(EM_tokPos, 0), (yyvsp[0].exp));}
#line 1596 "y.tab.c"
    break;

  case 10:
#line 102 "tiger.y"
                                                {(yyval.exp) = (yyvsp[0].exp);}
#line 1602 "y.tab.c"
    break;

  case 11:
#line 103 "tiger.y"
                                                {(yyval.exp) = (yyvsp[0].exp);}
#line 1608 "y.tab.c"
    break;

  case 12:
#line 104 "tiger.y"
                                                {(yyval.exp) = (yyvsp[0].exp);}
#line 1614 "y.tab.c"
    break;

  case 13:
#line 105 "tiger.y"
                                                {(yyval.exp) = (yyvsp[0].exp);}
#line 1620 "y.tab.c"
    break;

  case 14:
#line 106 "tiger.y"
                                                {(yyval.exp) = (yyvsp[0].exp);}
#line 1626 "y.tab.c"
    break;

  case 15:
#line 107 "tiger.y"
                                                {(yyval.exp) = A_AssignExp(EM_tokPos, (yyvsp[-2].var), (yyvsp[0].exp));}
#line 1632 "y.tab.c"
    break;

  case 16:
#line 108 "tiger.y"
                                                {(yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1638 "y.tab.c"
    break;

  case 17:
#line 109 "tiger.y"
                                                {(yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[-2].exp), (yyvsp[0].exp), NULL);}
#line 1644 "y.tab.c"
    break;

  case 18:
#line 110 "tiger.y"
                                                {(yyval.exp) = A_WhileExp(EM_tokPos, (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1650 "y.tab.c"
    break;

  case 19:
#line 111 "tiger.y"
                                                {(yyval.exp) = A_ForExp(EM_tokPos, (yyvsp[-6].sym), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1656 "y.tab.c"
    break;

  case 20:
#line 112 "tiger.y"
                                                {(yyval.exp) = A_BreakExp(EM_tokPos);}
#line 1662 "y.tab.c"
    break;

  case 21:
#line 113 "tiger.y"
                                                {(yyval.exp) = A_LetExp(EM_tokPos, (yyvsp[-3].declist), A_SeqExp(EM_tokPos, (yyvsp[-1].explist)));}
#line 1668 "y.tab.c"
    break;

  case 22:
#line 114 "tiger.y"
                                                {(yyval.exp) = A_SeqExp(EM_tokPos, (yyvsp[-1].explist));}
#line 1674 "y.tab.c"
    break;

  case 23:
#line 118 "tiger.y"
                                            {(yyval.var) = A_SimpleVar(EM_tokPos, (yyvsp[0].sym));}
#line 1680 "y.tab.c"
    break;

  case 24:
#line 119 "tiger.y"
                                            {(yyval.var) = A_SubscriptVar(EM_tokPos, A_SimpleVar(EM_tokPos, (yyvsp[-3].sym)), (yyvsp[-1].exp));}
#line 1686 "y.tab.c"
    break;

  case 25:
#line 120 "tiger.y"
                                            {(yyval.var) = A_SubscriptVar(EM_tokPos, (yyvsp[-3].var), (yyvsp[-1].exp));}
#line 1692 "y.tab.c"
    break;

  case 26:
#line 121 "tiger.y"
                                            {(yyval.var) = A_FieldVar(EM_tokPos, (yyvsp[-2].var), (yyvsp[0].sym));}
#line 1698 "y.tab.c"
    break;

  case 27:
#line 125 "tiger.y"
                                          {(yyval.exp) = A_CallExp(EM_tokPos, (yyvsp[-3].sym), (yyvsp[-1].explist));}
#line 1704 "y.tab.c"
    break;

  case 28:
#line 129 "tiger.y"
                                          { (yyval.declist) = NULL; }
#line 1710 "y.tab.c"
    break;

  case 29:
#line 130 "tiger.y"
                                            { (yyval.declist) = A_DecList((yyvsp[-1].dec), (yyvsp[0].declist)); }
#line 1716 "y.tab.c"
    break;

  case 30:
#line 134 "tiger.y"
                                          { (yyval.dec) = (yyvsp[0].dec); }
#line 1722 "y.tab.c"
    break;

  case 31:
#line 135 "tiger.y"
                                          { (yyval.dec) = (yyvsp[0].dec); }
#line 1728 "y.tab.c"
    break;

  case 32:
#line 136 "tiger.y"
                                          { (yyval.dec) = (yyvsp[0].dec); }
#line 1734 "y.tab.c"
    break;

  case 33:
#line 140 "tiger.y"
                                          { (yyval.dec) = A_TypeDec(EM_tokPos, A_NametyList((yyvsp[0].namety), NULL)); }
#line 1740 "y.tab.c"
    break;

  case 34:
#line 141 "tiger.y"
                                          { (yyval.dec) = A_TypeDec(EM_tokPos, A_NametyList((yyvsp[-1].namety), (yyvsp[0].dec)->u.type)); }
#line 1746 "y.tab.c"
    break;

  case 35:
#line 145 "tiger.y"
                                          { (yyval.namety) = A_Namety((yyvsp[-2].sym), (yyvsp[0].ty)); }
#line 1752 "y.tab.c"
    break;

  case 36:
#line 149 "tiger.y"
                                          { (yyval.ty) = A_NameTy(EM_tokPos, (yyvsp[0].sym)); }
#line 1758 "y.tab.c"
    break;

  case 37:
#line 150 "tiger.y"
                                          { (yyval.ty) = A_RecordTy(EM_tokPos, (yyvsp[-1].fieldlist)); }
#line 1764 "y.tab.c"
    break;

  case 38:
#line 151 "tiger.y"
                                          { (yyval.ty) = A_ArrayTy(EM_tokPos, (yyvsp[0].sym)); }
#line 1770 "y.tab.c"
    break;

  case 39:
#line 154 "tiger.y"
                                          { (yyval.fieldlist) = NULL; }
#line 1776 "y.tab.c"
    break;

  case 40:
#line 155 "tiger.y"
                                          { (yyval.fieldlist) = (yyvsp[0].fieldlist); }
#line 1782 "y.tab.c"
    break;

  case 41:
#line 159 "tiger.y"
                                          { (yyval.fieldlist) = A_FieldList((yyvsp[0].field), NULL); }
#line 1788 "y.tab.c"
    break;

  case 42:
#line 160 "tiger.y"
                                          { (yyval.fieldlist) = A_FieldList((yyvsp[-2].field), (yyvsp[0].fieldlist)); }
#line 1794 "y.tab.c"
    break;

  case 43:
#line 164 "tiger.y"
                                       { (yyval.field) = A_Field(EM_tokPos, (yyvsp[-2].sym), (yyvsp[0].sym)); }
#line 1800 "y.tab.c"
    break;

  case 44:
#line 168 "tiger.y"
                                           { (yyval.dec) = A_VarDec(EM_tokPos, (yyvsp[-2].sym), NULL, (yyvsp[0].exp)); }
#line 1806 "y.tab.c"
    break;

  case 45:
#line 169 "tiger.y"
                                           { (yyval.dec) = A_VarDec(EM_tokPos, (yyvsp[-4].sym), (yyvsp[-2].sym), (yyvsp[0].exp)); }
#line 1812 "y.tab.c"
    break;

  case 46:
#line 173 "tiger.y"
                                           { (yyval.dec) = A_FunctionDec(EM_tokPos, A_FundecList((yyvsp[0].fundec), NULL)); }
#line 1818 "y.tab.c"
    break;

  case 47:
#line 174 "tiger.y"
                                           { (yyval.dec) = A_FunctionDec(EM_tokPos, A_FundecList((yyvsp[-1].fundec), (yyvsp[0].dec)->u.function)); }
#line 1824 "y.tab.c"
    break;

  case 48:
#line 178 "tiger.y"
                                                            { (yyval.fundec) = A_Fundec(EM_tokPos, (yyvsp[-5].sym), (yyvsp[-3].fieldlist), NULL, (yyvsp[0].exp)); }
#line 1830 "y.tab.c"
    break;

  case 49:
#line 179 "tiger.y"
                                                            { (yyval.fundec) = A_Fundec(EM_tokPos, (yyvsp[-7].sym), (yyvsp[-5].fieldlist), (yyvsp[-2].sym), (yyvsp[0].exp)); }
#line 1836 "y.tab.c"
    break;

  case 50:
#line 183 "tiger.y"
                                           { (yyval.exp) = A_RecordExp(EM_tokPos, (yyvsp[-3].sym), (yyvsp[-1].efieldlist)); }
#line 1842 "y.tab.c"
    break;

  case 51:
#line 186 "tiger.y"
                                           { (yyval.efieldlist) = NULL; }
#line 1848 "y.tab.c"
    break;

  case 52:
#line 187 "tiger.y"
                                           { (yyval.efieldlist) = (yyvsp[0].efieldlist); }
#line 1854 "y.tab.c"
    break;

  case 53:
#line 191 "tiger.y"
                                                              { (yyval.efieldlist) = A_EfieldList((yyvsp[0].efield), NULL); }
#line 1860 "y.tab.c"
    break;

  case 54:
#line 192 "tiger.y"
                                                              { (yyval.efieldlist) = A_EfieldList((yyvsp[-2].efield), (yyvsp[0].efieldlist)); }
#line 1866 "y.tab.c"
    break;

  case 55:
#line 196 "tiger.y"
                                           { (yyval.efield) = A_Efield((yyvsp[-2].sym), (yyvsp[0].exp)); }
#line 1872 "y.tab.c"
    break;

  case 56:
#line 200 "tiger.y"
                                           { (yyval.exp) = A_ArrayExp(EM_tokPos, (yyvsp[-5].sym), (yyvsp[-3].exp), (yyvsp[0].exp)); }
#line 1878 "y.tab.c"
    break;

  case 57:
#line 203 "tiger.y"
                                           {(yyval.explist)=NULL;}
#line 1884 "y.tab.c"
    break;

  case 58:
#line 204 "tiger.y"
                                           { (yyval.explist) = A_ExpList((yyvsp[0].exp), NULL); }
#line 1890 "y.tab.c"
    break;

  case 59:
#line 205 "tiger.y"
                                           { (yyval.explist) = A_ExpList((yyvsp[-2].exp), (yyvsp[0].explist)); }
#line 1896 "y.tab.c"
    break;

  case 60:
#line 208 "tiger.y"
                                           { (yyval.explist) = NULL; }
#line 1902 "y.tab.c"
    break;

  case 61:
#line 209 "tiger.y"
                                           { (yyval.explist) = (yyvsp[0].explist); }
#line 1908 "y.tab.c"
    break;

  case 62:
#line 213 "tiger.y"
                                           { (yyval.explist) = A_ExpList((yyvsp[0].exp), NULL); }
#line 1914 "y.tab.c"
    break;

  case 63:
#line 214 "tiger.y"
                                           { (yyval.explist) = A_ExpList((yyvsp[-2].exp), (yyvsp[0].explist)); }
#line 1920 "y.tab.c"
    break;

  case 64:
#line 218 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_plusOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1926 "y.tab.c"
    break;

  case 65:
#line 219 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_minusOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1932 "y.tab.c"
    break;

  case 66:
#line 220 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_timesOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1938 "y.tab.c"
    break;

  case 67:
#line 221 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_divideOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1944 "y.tab.c"
    break;

  case 68:
#line 225 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_eqOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1950 "y.tab.c"
    break;

  case 69:
#line 226 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_neqOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1956 "y.tab.c"
    break;

  case 70:
#line 227 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_ltOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1962 "y.tab.c"
    break;

  case 71:
#line 228 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_leOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1968 "y.tab.c"
    break;

  case 72:
#line 229 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_gtOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1974 "y.tab.c"
    break;

  case 73:
#line 230 "tiger.y"
                                           { (yyval.exp) = A_OpExp(EM_tokPos, A_geOp, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1980 "y.tab.c"
    break;

  case 74:
#line 235 "tiger.y"
       { (yyval.sym) = S_Symbol((yyvsp[0].sval));}
#line 1986 "y.tab.c"
    break;


#line 1990 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 239 "tiger.y"



