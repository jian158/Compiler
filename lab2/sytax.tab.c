/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sytax.y" /* yacc.c:339  */

#include <unistd.h>
#include <stdio.h>   
#include "Main.h"
#include"lex.yy.c"
#include<stdarg.h>
void yyerror(const char* fmt, ...);

#line 75 "sytax.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sytax.tab.h".  */
#ifndef YY_YY_SYTAX_TAB_H_INCLUDED
# define YY_YY_SYTAX_TAB_H_INCLUDED
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
    STATIC = 258,
    ARRAY = 259,
    FINAL = 260,
    BREAK = 261,
    TYPE = 262,
    STRUCT = 263,
    EXTENDS = 264,
    CLASS = 265,
    RETURN = 266,
    IF = 267,
    ELSE = 268,
    ELIF = 269,
    FOR = 270,
    WHILE = 271,
    ID = 272,
    SPACE = 273,
    SEMI = 274,
    COMMA = 275,
    ASSIGNOP = 276,
    RELOP = 277,
    DOT = 278,
    NOT = 279,
    LP = 280,
    RP = 281,
    LB = 282,
    RB = 283,
    LC = 284,
    RC = 285,
    AERROR = 286,
    DPLUS = 287,
    DMINUS = 288,
    INT = 289,
    FLOAT = 290,
    NULLPTR = 291,
    STR = 292,
    BOOL = 293,
    PLUS = 294,
    MINUS = 295,
    STAR = 296,
    DIV = 297,
    OR = 298,
    AND = 299,
    EOL = 300,
    NEW = 301,
    THIS = 302,
    SUPER = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "sytax.y" /* yacc.c:355  */

TreeNode *node;

#line 168 "sytax.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SYTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 199 "sytax.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    46,    47,    51,    55,    65,    66,    69,
      70,    72,    73,    74,    77,    83,    89,    90,    92,    93,
      96,    98,    99,   103,   104,   105,   106,   107,   108,   109,
     110,   114,   118,   119,   121,   122,   124,   125,   127,   129,
     131,   134,   135,   136,   139,   140,   141,   143,   144,   147,
     148,   150,   151,   158,   159,   165,   166,   167,   169,   170,
     171,   172,   173,   174,   175,   176,   178,   180,   181,   183,
     184,   185,   186,   187,   188,   189,   190,   192,   193,   196,
     197,   198,   200,   201,   203,   204,   207,   208,   210,   211,
     212,   213,   217,   220,   221,   223,   224,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STATIC", "ARRAY", "FINAL", "BREAK",
  "TYPE", "STRUCT", "EXTENDS", "CLASS", "RETURN", "IF", "ELSE", "ELIF",
  "FOR", "WHILE", "ID", "SPACE", "SEMI", "COMMA", "ASSIGNOP", "RELOP",
  "DOT", "NOT", "LP", "RP", "LB", "RB", "LC", "RC", "AERROR", "DPLUS",
  "DMINUS", "INT", "FLOAT", "NULLPTR", "STR", "BOOL", "PLUS", "MINUS",
  "STAR", "DIV", "OR", "AND", "EOL", "NEW", "THIS", "SUPER", "$accept",
  "Program", "ClassDefs", "Class", "ClassStms", "ClassStm", "Fun",
  "VarType", "Arrays", "BaseStm", "Lines", "Line", "BreakStm", "IfStm",
  "ELIfStm", "ElseStm", "WhileStm", "ForStm", "DeclareStm",
  "DeclareVarStm", "VarStm", "ReturnStm", "Args", "Arg", "BoolExp", "Exp",
  "IdStm", "ClassPointer", "ArrayIndex", "Lvalue", "Constant", "Call",
  "CallArgs", "CallArg", "EMPTY", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -160

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define YYTABLE_NINF -98

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,     9,    29,  -160,     1,    12,  -160,  -160,    26,    39,
      28,     5,    41,    58,    13,    35,    39,  -160,    53,  -160,
      39,    41,    58,   176,   195,    58,  -160,    41,  -160,  -160,
    -160,    64,    -1,    49,   195,   127,   195,   195,   -11,   -11,
    -160,  -160,  -160,  -160,   195,    56,  -160,  -160,    83,  -160,
     224,    84,    81,    90,  -160,  -160,   150,    95,  -160,   112,
     107,  -160,  -160,   195,    41,  -160,   124,  -160,   126,   134,
     132,   195,   122,  -160,   273,   139,  -160,   162,  -160,    78,
     128,   143,  -160,  -160,   195,   195,   195,   195,   195,   195,
     195,   195,  -160,  -160,   169,   195,   195,  -160,   167,   159,
     314,   170,   177,   179,  -160,   143,  -160,   277,   180,   249,
     181,  -160,  -160,   279,  -160,   185,   198,  -160,  -160,   119,
      78,    78,  -160,  -160,    96,    54,   143,  -160,   314,  -160,
      41,    75,   188,   189,   195,  -160,   128,  -160,  -160,  -160,
       5,   202,   157,   200,   201,   211,   124,   208,  -160,    75,
    -160,   111,  -160,  -160,  -160,   220,  -160,  -160,    75,    75,
    -160,  -160,   195,  -160,  -160,   212,   195,   195,   195,  -160,
    -160,   222,   232,  -160,  -160,   219,   240,  -160,   246,   314,
     218,   247,   195,   221,  -160,  -160,  -160,  -160,   245,   195,
     248,   302,    75,    75,   229,    75,   250,   252,   253,   195,
     254,    75,  -160,  -160,   308,  -160,   255,   251,  -160,    75,
     256,  -160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       0,     0,     0,    16,    17,     0,     8,     9,     0,    10,
       0,     0,    17,     0,     0,    18,    14,    97,    15,     5,
       7,    44,     0,     0,     0,    79,     0,     0,     0,     0,
      88,    89,    91,    90,     0,     0,    82,    83,     0,    66,
      47,    62,     0,     0,    58,    59,    79,     0,    19,     0,
       0,    52,    51,     0,    97,    40,     0,     6,     0,     0,
      97,     0,    72,    71,     0,    79,    73,     0,    75,    70,
       0,     0,    77,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    76,     0,     0,    97,    42,    53,     0,
      45,     0,    44,    46,    43,    80,    60,    79,     0,    95,
       0,    94,    51,     0,    69,     0,     0,    78,    48,    55,
      64,    65,    67,    68,    57,    56,    81,    61,    63,    93,
       0,    97,     0,     0,     0,    92,    84,    80,    81,    54,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      29,    24,    25,    30,    27,     0,    28,    23,    97,    97,
      96,    85,     0,    31,    49,     0,     0,     0,     0,    13,
      22,     0,    97,    35,    26,     0,     0,    50,    66,     0,
       0,    66,     0,     0,    33,    37,    11,    12,     0,     0,
       0,     0,    97,    97,    66,    97,     0,     0,     0,     0,
       0,    97,    36,    32,     0,    38,     0,     0,    34,    97,
       0,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,   271,  -160,    85,  -160,  -160,     4,    15,  -126,
     129,  -160,  -160,  -160,  -160,  -160,  -160,  -160,    68,   210,
     -20,  -160,    33,   166,  -159,   -36,    89,   145,   -75,  -160,
    -160,   -22,  -160,   153,   -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    15,    16,    17,   146,    28,   147,
     148,   149,   150,   151,   172,   184,   152,   153,   154,    32,
     155,   156,    60,    61,    49,    50,    51,    52,    72,    53,
      54,    55,   110,   111,   157
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    74,    62,    48,    57,   117,    75,   178,    79,   181,
      21,     1,    13,    18,    68,    23,    24,    25,    65,    66,
      18,     8,    22,    82,    18,    34,     5,   100,    26,     6,
     194,    59,   175,   176,   109,   113,    46,    47,    27,    62,
      58,     9,    11,    10,    12,   112,    13,   106,    13,   119,
     120,   121,   122,   123,   124,   125,    14,    20,    22,   128,
     109,   161,    25,    80,   118,    29,   197,   198,    59,   200,
      31,   129,   127,    81,    59,   206,    85,    19,   140,    67,
      12,   141,    13,   210,    19,    63,   142,   143,    19,    64,
     144,   145,   107,    86,    87,    88,    89,   101,   109,    36,
      37,    30,    83,   108,    94,    33,   165,    38,    39,    40,
      41,    95,    42,    43,    97,    44,    92,    93,    85,    88,
      89,    45,    46,    47,   -97,   171,   173,    76,    78,    98,
     179,   180,   179,    99,    59,    86,    87,    88,    89,    13,
      91,   102,    48,   -87,   162,   104,   191,   185,   -86,   107,
      69,   105,    70,   179,    71,    71,    36,    37,    86,    87,
      88,    89,   115,   204,    38,    39,    40,    41,    96,    42,
      43,   -86,    44,    69,    56,    96,   164,    71,    45,    46,
      47,    36,    37,    77,    77,   116,   126,   130,   131,    38,
      39,    40,    41,    35,    42,    43,   132,    44,    63,    66,
      36,    37,   137,    45,    46,    47,   133,   135,    38,    39,
      40,    41,    56,    42,    43,   138,    44,   158,   159,    36,
      37,   163,    45,    46,    47,   166,   167,    38,    39,    40,
      41,   177,    42,    43,    85,    44,   168,   189,   169,   174,
      85,    45,    46,    47,    84,   183,    85,   182,   199,   186,
     192,    86,    87,    88,    89,    90,    91,    86,    87,    88,
      89,    90,    91,    86,    87,    88,    89,    90,    91,   134,
     187,    85,   188,   190,   193,     7,   103,   195,   170,   201,
     209,    25,   202,   203,   205,   208,   211,   160,    86,    87,
      88,    89,    90,    91,   -17,    85,   139,     0,   -86,   114,
      69,    85,    96,     0,    71,     0,     0,   136,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    86,    87,
      88,    89,    90,    91,    85,     0,     0,     0,   196,     0,
      85,     0,     0,     0,   207,     0,    85,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    86,    87,    88,
      89,    90,    91,    86,    87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
      36,    37,    27,    23,    24,    80,    17,   166,    44,   168,
       5,    10,     7,     9,    34,    11,    12,     4,    19,    20,
      16,     9,    17,    45,    20,    21,    17,    63,    13,     0,
     189,    27,   158,   159,    70,    71,    47,    48,    25,    64,
      25,    29,     3,    17,     5,    70,     7,    69,     7,    85,
      86,    87,    88,    89,    90,    91,    17,    29,    17,    95,
      96,   136,     4,     7,    84,    30,   192,   193,    64,   195,
      17,    96,    94,    17,    70,   201,    22,     9,     3,    30,
       5,     6,     7,   209,    16,    21,    11,    12,    20,    25,
      15,    16,    17,    39,    40,    41,    42,    64,   134,    24,
      25,    16,    19,    70,    23,    20,   142,    32,    33,    34,
      35,    21,    37,    38,    19,    40,    32,    33,    22,    41,
      42,    46,    47,    48,    13,    14,   151,    38,    39,    17,
     166,   167,   168,    26,   130,    39,    40,    41,    42,     7,
      44,    17,   162,    21,   140,    19,   182,   172,    21,    17,
      23,    17,    25,   189,    27,    27,    24,    25,    39,    40,
      41,    42,    23,   199,    32,    33,    34,    35,    25,    37,
      38,    21,    40,    23,    17,    25,    19,    27,    46,    47,
      48,    24,    25,    38,    39,    23,    17,    20,    29,    32,
      33,    34,    35,    17,    37,    38,    26,    40,    21,    20,
      24,    25,    17,    46,    47,    48,    26,    26,    32,    33,
      34,    35,    17,    37,    38,    17,    40,    29,    29,    24,
      25,    19,    46,    47,    48,    25,    25,    32,    33,    34,
      35,    19,    37,    38,    22,    40,    25,    19,    30,    19,
      22,    46,    47,    48,    20,    13,    22,    25,    19,    30,
      29,    39,    40,    41,    42,    43,    44,    39,    40,    41,
      42,    43,    44,    39,    40,    41,    42,    43,    44,    20,
      30,    22,    26,    26,    29,     4,    66,    29,   149,    29,
      29,     4,    30,    30,    30,    30,    30,   134,    39,    40,
      41,    42,    43,    44,    17,    22,   130,    -1,    21,    26,
      23,    22,    25,    -1,    27,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    39,    40,
      41,    42,    43,    44,    22,    -1,    -1,    -1,    26,    -1,
      22,    -1,    -1,    -1,    26,    -1,    22,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    39,    40,    41,
      42,    43,    44,    39,    40,    41,    42,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    50,    51,    52,    17,     0,    51,     9,    29,
      17,     3,     5,     7,    17,    53,    54,    55,    56,    67,
      29,     5,    17,    56,    56,     4,    57,    25,    57,    30,
      53,    17,    68,    53,    56,    17,    24,    25,    32,    33,
      34,    35,    37,    38,    40,    46,    47,    48,    69,    73,
      74,    75,    76,    78,    79,    80,    17,    69,    57,    56,
      71,    72,    83,    21,    25,    19,    20,    30,    69,    23,
      25,    27,    77,    74,    74,    17,    75,    76,    75,    74,
       7,    17,    80,    19,    20,    22,    39,    40,    41,    42,
      43,    44,    32,    33,    23,    21,    25,    19,    17,    26,
      74,    71,    17,    68,    19,    17,    80,    17,    71,    74,
      81,    82,    83,    74,    26,    23,    23,    77,    69,    74,
      74,    74,    74,    74,    74,    74,    17,    80,    74,    83,
      20,    29,    26,    26,    20,    26,    28,    17,    17,    72,
       3,     6,    11,    12,    15,    16,    56,    58,    59,    60,
      61,    62,    65,    66,    67,    69,    70,    83,    29,    29,
      82,    77,    56,    19,    19,    74,    25,    25,    25,    30,
      59,    14,    63,    83,    19,    58,    58,    19,    73,    74,
      74,    73,    25,    13,    64,    83,    30,    30,    26,    19,
      26,    74,    29,    29,    73,    29,    26,    58,    58,    19,
      58,    29,    30,    30,    74,    30,    58,    26,    30,    29,
      58,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    56,    56,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    61,    62,    62,    63,    63,    64,    64,    65,    66,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    80,    81,    81,    82,    82,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     5,     7,     2,     1,     1,
       1,     8,     9,     7,     2,     2,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     2,     7,     3,     7,     1,     4,     1,     7,    11,
       3,     4,     4,     5,     1,     3,     3,     1,     3,     2,
       3,     1,     1,     2,     4,     3,     3,     3,     1,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     1,
       3,     3,     1,     1,     3,     4,     1,     2,     1,     1,
       1,     1,     4,     1,     1,     1,     3,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 37 "sytax.y" /* yacc.c:1646  */
    {
	(yyval.node)=newNode("Program",1,(yyvsp[0].node));
	adjustNodes((yyval.node),0);
	printf("打印syntax tree:\n");  
	TravelTree((yyval.node),0) ;
	printf("syntax tree打印完毕!\n\n");
	startSymbolCreate((yyval.node));
	}
#line 1551 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1557 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);(yyval.node)->temp=(yyvsp[0].node);}
#line 1563 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 51 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Class",1,(yyvsp[-1].node));adjustNodes((yyval.node),0);
		//$$->string_value=new string(*$2->string_value);
		(*(yyval.node)->attr)["id"]=*(yyvsp[-3].node)->string_value;
	}
#line 1572 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 55 "sytax.y" /* yacc.c:1646  */
    {
		(yyval.node)=newNode("Class",1,(yyvsp[-1].node));
		(yyval.node)->line=(yyvsp[-6].node)->line;
		adjustNodes((yyval.node),0);
		
		(*(yyval.node)->attr)["id"]=*(yyvsp[-5].node)->string_value;
		(*(yyval.node)->attr)["ext"]=*(yyvsp[-3].node)->string_value;
		}
#line 1585 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 65 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);(yyval.node)->temp=(yyvsp[0].node);}
#line 1591 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1597 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1603 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1609 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 72 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Fun",2,(yyvsp[-4].node),(yyvsp[-1].node));(yyval.node)->line=(yyvsp[-7].node)->line;  (*(yyval.node)->attr)["id"]=*(yyvsp[-6].node)->string_value; (*(yyval.node)->attr)["type"]=*(yyvsp[-7].node)->string_value;}
#line 1615 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 73 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Fun",2,(yyvsp[-4].node),(yyvsp[-1].node));(yyval.node)->line=(yyvsp[-8].node)->line;  (*(yyval.node)->attr)["id"]=*(yyvsp[-6].node)->string_value; (*(yyval.node)->attr)["type"]=*(yyvsp[-7].node)->string_value; (*(yyval.node)->attr)["static"]=*(yyvsp[-8].node)->name;}
#line 1621 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ConstructFun",2,(yyvsp[-4].node),(yyvsp[-1].node));(yyval.node)->line=(yyvsp[-6].node)->line; (*(yyval.node)->attr)["id"]=*(yyvsp[-6].node)->string_value;}
#line 1627 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 77 "sytax.y" /* yacc.c:1646  */
    { (yyval.node)=newNode("VarType",2,(yyvsp[-1].node),(yyvsp[0].node));adjustNodes((yyval.node),1);
		(yyval.node)->string_value=new string(*(yyvsp[-1].node)->string_value);
		for(int i=1;i<(yyval.node)->size();i++){
			*(yyval.node)->string_value+="[";
		}
	}
#line 1638 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarType",2,(yyvsp[-1].node),(yyvsp[0].node));adjustNodes((yyval.node),1);
		(yyval.node)->string_value=new string(*(yyvsp[-1].node)->string_value);
		for(int i=1;i<(yyval.node)->size();i++){
			*(yyval.node)->string_value+="[";
		}
	}
#line 1649 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 89 "sytax.y" /* yacc.c:1646  */
    { (yyval.node)=newNode("VarType",1,(yyvsp[0].node));(yyval.node)->string_value=new string(*(yyvsp[0].node)->string_value);}
#line 1655 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 90 "sytax.y" /* yacc.c:1646  */
    { (yyval.node)=newNode("VarType",1,(yyvsp[0].node));(yyval.node)->string_value=new string(*(yyvsp[0].node)->string_value);}
#line 1661 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 92 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Arrays",1,(yyvsp[0].node));}
#line 1667 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Arrays",1,(yyvsp[-1].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 1673 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 96 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("BaseStm",1,(yyvsp[0].node));adjustNodes((yyval.node),0);}
#line 1679 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 98 "sytax.y" /* yacc.c:1646  */
    { (yyval.node)=newNode("Lines",1,(yyvsp[0].node));}
#line 1685 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Lines",1,(yyvsp[-1].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 1691 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 103 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",0,yylineno);}
#line 1697 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 104 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1703 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 105 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1709 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 106 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1715 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1721 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1727 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 109 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1733 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 110 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1739 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 114 "sytax.y" /* yacc.c:1646  */
    {
	(yyval.node)=newNode("BreakStm",1,(yyvsp[-1].node));
}
#line 1747 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("IfStm",2,(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1753 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("IfStm",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1759 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ELIfStm",2,(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1765 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 122 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ELIfStm",0,yylineno);}
#line 1771 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ElseStm",1,(yyvsp[-1].node));}
#line 1777 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 125 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ElseStm",0,yylineno);}
#line 1783 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 127 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("WhileStm",3,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1789 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ForStm",3,(yyvsp[-10].node),(yyvsp[-8].node),(yyvsp[-5].node));}
#line 1795 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 131 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",1,(yyvsp[-1].node));adjustNodes((yyval.node),0);
	(*(yyval.node)->attr)["type"]=*(yyvsp[-2].node)->string_value;
	}
#line 1803 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 134 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",1,(yyvsp[-1].node));adjustNodes((yyval.node),0);(*(yyval.node)->attr)["type"]=*(yyvsp[-2].node)->string_value;(*(yyval.node)->attr)["static"]=*(yyvsp[-3].node)->name;}
#line 1809 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 135 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",1,(yyvsp[-1].node));adjustNodes((yyval.node),0);(*(yyval.node)->attr)["type"]=*(yyvsp[-2].node)->string_value;(*(yyval.node)->attr)["final"]=*(yyvsp[-3].node)->name;}
#line 1815 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 136 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",1,(yyvsp[-1].node));adjustNodes((yyval.node),0);(*(yyval.node)->attr)["type"]=*(yyvsp[-2].node)->string_value;(*(yyval.node)->attr)["static"]=*(yyvsp[-4].node)->name;(*(yyval.node)->attr)["final"]=*(yyvsp[-3].node)->name;}
#line 1821 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 139 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",1,(yyvsp[0].node));*(yyvsp[0].node)->name="Lvalue";}
#line 1827 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 140 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",1,(yyvsp[-1].node));(yyvsp[-1].node)->add((yyvsp[-2].node));(yyvsp[-1].node)->add((yyvsp[0].node));*(yyvsp[-2].node)->name="Lvalue";}
#line 1833 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 141 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",2,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1839 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",1,(yyvsp[0].node));}
#line 1845 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 144 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",1,(yyvsp[-2].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 1851 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 147 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ReturnStm",1,(yyvsp[-1].node));}
#line 1857 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 148 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ReturnStm",2,(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1863 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 150 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Args",0,yylineno);}
#line 1869 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 151 "sytax.y" /* yacc.c:1646  */
    {
		(yyval.node)=newNode("Args",1,(yyvsp[0].node));
		adjustNodes((yyval.node),0);
	}
#line 1878 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 158 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Arg",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1884 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 159 "sytax.y" /* yacc.c:1646  */
    {
		(yyval.node)=newNode("Arg",2,(yyvsp[-3].node),(yyvsp[-2].node));
		(yyval.node)->temp=(yyvsp[0].node);
	}
#line 1893 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 165 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("BoolExp",1,(yyvsp[-1].node));(yyvsp[-1].node)->add((yyvsp[-2].node));(yyvsp[-1].node)->add((yyvsp[0].node));}
#line 1899 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 166 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("BoolExp",1,(yyvsp[-1].node));(yyvsp[-1].node)->add((yyvsp[-2].node));(yyvsp[-1].node)->add((yyvsp[0].node));}
#line 1905 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 167 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("BoolExp",1,(yyvsp[-1].node));(yyvsp[-1].node)->add((yyvsp[-2].node));(yyvsp[-1].node)->add((yyvsp[0].node));}
#line 1911 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 169 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[0].node));}
#line 1917 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 170 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Ref",1,(yyvsp[0].node));(yyval.node)->string_value=new string("THIS");}
#line 1923 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Ref",1,(yyvsp[0].node));(yyval.node)->string_value=new string(*(yyvsp[-2].node)->string_value);}
#line 1929 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 172 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Ref",1,(yyvsp[0].node));(yyval.node)->string_value=new string(*(yyvsp[-2].node)->name);}
#line 1935 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 173 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1941 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 174 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);(yyval.node)->add((yyvsp[-2].node));(yyval.node)->add((yyvsp[0].node));  }
#line 1947 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 175 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);(yyval.node)->add((yyvsp[-2].node));(yyval.node)->add((yyvsp[0].node));}
#line 1953 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 176 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);(yyval.node)->add((yyvsp[-2].node));(yyval.node)->add((yyvsp[0].node));}
#line 1959 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 178 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1965 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 180 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);(yyval.node)->add((yyvsp[-2].node));(yyval.node)->add((yyvsp[0].node));}
#line 1971 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 181 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);(yyval.node)->add((yyvsp[-2].node));(yyval.node)->add((yyvsp[0].node));}
#line 1977 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 183 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[-1].node));}
#line 1983 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 184 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1989 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 185 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1995 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 186 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));adjustNodes((yyval.node),1);}
#line 2001 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 187 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[-1].node));(yyvsp[-1].node)->add((yyvsp[0].node));}
#line 2007 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 188 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[0].node));(yyvsp[0].node)->add((yyvsp[-1].node));}
#line 2013 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 189 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[-1].node));(yyvsp[-1].node)->add((yyvsp[0].node));}
#line 2019 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 190 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[0].node));(yyvsp[0].node)->add((yyvsp[-1].node));}
#line 2025 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 192 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2031 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 193 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));adjustNodes((yyval.node),2);}
#line 2037 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 196 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2043 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 197 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Ref",1,(yyvsp[0].node));(yyval.node)->string_value=new string(*(yyvsp[-2].node)->string_value);}
#line 2049 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 198 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Ref",1,(yyvsp[0].node));(yyval.node)->string_value=new string(*(yyvsp[-2].node)->name);}
#line 2055 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 200 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2061 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 201 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2067 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 203 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ArrayIndex",1,(yyvsp[-1].node));}
#line 2073 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 204 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ArrayIndex",1,(yyvsp[-2].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 2079 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 207 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);*(yyval.node)->name="Lvalue";}
#line 2085 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 208 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("LVARRAY",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 2091 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 210 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 2097 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 211 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 2103 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 212 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 2109 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 213 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 2115 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 217 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Call",1,(yyvsp[-1].node));(yyval.node)->string_value=new string(*(yyvsp[-3].node)->string_value);}
#line 2121 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 220 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArgs",0,yylineno);}
#line 2127 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 221 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArgs",1,(yyvsp[0].node));adjustNodes((yyval.node),0);}
#line 2133 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 223 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArg",1,(yyvsp[0].node));}
#line 2139 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 224 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArg",1,(yyvsp[-2].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 2145 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 226 "sytax.y" /* yacc.c:1646  */
    {}
#line 2151 "sytax.tab.c" /* yacc.c:1646  */
    break;


#line 2155 "sytax.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 228 "sytax.y" /* yacc.c:1906  */



void yyerror(const char*s,...) //变长参数错误处理函数
{
    va_list ap;
    va_start(ap,s);
    // fprintf(stderr,"%d:error:",yylineno);//错误行号
	fprintf(stderr, "Error at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr,s,ap);
    fprintf(stderr,"\n");
}
