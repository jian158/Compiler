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
    FINAL = 259,
    BREAK = 260,
    TYPE = 261,
    STRUCT = 262,
    EXTENDS = 263,
    CLASS = 264,
    RETURN = 265,
    IF = 266,
    ELSE = 267,
    ELIF = 268,
    FOR = 269,
    WHILE = 270,
    ID = 271,
    SPACE = 272,
    SEMI = 273,
    COMMA = 274,
    ASSIGNOP = 275,
    RELOP = 276,
    PLUS = 277,
    MINUS = 278,
    STAR = 279,
    DIV = 280,
    AND = 281,
    OR = 282,
    DOT = 283,
    NOT = 284,
    LP = 285,
    RP = 286,
    LB = 287,
    RB = 288,
    LC = 289,
    RC = 290,
    AERROR = 291,
    DPLUS = 292,
    DMINUS = 293,
    INT = 294,
    FLOAT = 295,
    NULLPTR = 296,
    STR = 297,
    BOOL = 298,
    EOL = 299,
    NEW = 300,
    THIS = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "sytax.y" /* yacc.c:355  */

TreeNode *node;

#line 166 "sytax.tab.c" /* yacc.c:355  */
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

#line 197 "sytax.tab.c" /* yacc.c:358  */

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
#define YYLAST   482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    43,    44,    48,    49,    52,    53,    56,
      57,    59,    60,    61,    63,    64,    66,    67,    68,    71,
      73,    74,    78,    79,    80,    81,    82,    83,    84,    85,
      89,    93,    94,    96,    97,    99,   100,   102,   104,   106,
     107,   108,   109,   112,   113,   116,   117,   119,   120,   127,
     128,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   162,   163,   164,   166,   167,
     168,   169,   172,   173,   174,   177,   178,   180,   181,   183
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STATIC", "FINAL", "BREAK", "TYPE",
  "STRUCT", "EXTENDS", "CLASS", "RETURN", "IF", "ELSE", "ELIF", "FOR",
  "WHILE", "ID", "SPACE", "SEMI", "COMMA", "ASSIGNOP", "RELOP", "PLUS",
  "MINUS", "STAR", "DIV", "AND", "OR", "DOT", "NOT", "LP", "RP", "LB",
  "RB", "LC", "RC", "AERROR", "DPLUS", "DMINUS", "INT", "FLOAT", "NULLPTR",
  "STR", "BOOL", "EOL", "NEW", "THIS", "$accept", "Program", "ClassDefs",
  "Class", "ClassStms", "ClassStm", "Fun", "VarType", "Arrays", "BaseStm",
  "Lines", "Line", "BreakStm", "IfStm", "ELIfStm", "ElseStm", "WhileStm",
  "ForStm", "DeclareStm", "VarStm", "ReturnStm", "Args", "Arg", "Exp",
  "Lvalue", "Constant", "Call", "CallArgs", "CallArg", "EMPTY", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -107

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-107)))

#define YYTABLE_NINF -90

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,     5,    29,  -107,     3,     1,  -107,  -107,    18,    50,
      21,    53,    10,    30,    30,    28,    50,  -107,   218,  -107,
      33,    50,    10,   236,   254,    41,  -107,  -107,  -107,  -107,
    -107,    60,   254,   254,   254,    61,    70,  -107,  -107,  -107,
      79,    66,    78,   316,    80,  -107,    81,    72,   254,    73,
      90,   112,    94,    30,   -12,    76,  -107,  -107,   147,    51,
     366,  -107,  -107,    86,    93,    81,   -12,  -107,   254,   254,
     254,   254,   254,   254,   254,   254,   104,   254,   254,   111,
    -107,   110,    76,  -107,   254,  -107,  -107,    93,  -107,  -107,
     182,   113,    99,  -107,   328,   102,  -107,  -107,  -107,   254,
    -107,  -107,  -107,   181,   147,   147,    51,    51,   450,   438,
    -107,   340,   426,   105,  -107,   108,  -107,   117,   107,   254,
    -107,   353,   124,   254,   118,    10,   154,  -107,  -107,   114,
     154,  -107,    53,   128,   200,   121,   125,   131,   254,   119,
    -107,   154,  -107,    20,  -107,  -107,  -107,   129,  -107,  -107,
    -107,   127,   254,  -107,  -107,   280,   254,   254,   254,  -107,
    -107,   133,   155,  -107,  -107,  -107,  -107,   378,   292,   390,
     254,   132,  -107,  -107,   139,   254,   142,   402,   154,   154,
     304,   154,   144,   145,   150,   254,   151,   154,  -107,  -107,
     414,  -107,   152,   148,  -107,   154,   153,  -107
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,    89,
       0,     0,     0,    89,    89,     0,    89,     9,     0,    10,
      13,    89,     0,     0,     0,     0,    14,    16,    15,     5,
       7,    78,     0,     0,     0,     0,     0,    79,    80,    81,
       0,     0,     0,    43,     0,    51,    52,     0,     0,    78,
       0,    78,     0,    17,     0,    89,    70,    72,    66,    67,
       0,    69,    71,     0,     0,    73,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,    89,    40,    89,    41,    18,    78,    54,    53,
      78,     0,     0,    48,    87,     0,    86,    47,    65,     0,
      55,    56,    44,    62,    58,    59,    63,    64,    60,    61,
      77,     0,    57,    83,    42,     0,    85,    49,     0,     0,
      82,     0,    68,    89,     0,     0,    89,    88,    74,     0,
      89,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    28,    23,    24,    29,    26,     0,    27,    22,
      84,     0,     0,    30,    45,     0,     0,     0,     0,    11,
      21,     0,    89,    34,    25,    12,    46,     0,     0,     0,
       0,     0,    32,    36,     0,     0,     0,     0,    89,    89,
       0,    89,     0,     0,     0,     0,     0,    89,    35,    31,
       0,    37,     0,     0,    33,    89,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,   185,  -107,     9,  -107,  -107,    49,    -2,  -106,
      54,  -107,  -107,  -107,  -107,  -107,  -107,  -107,    -3,    -4,
    -107,   126,    65,   -32,  -107,   -49,   -18,    84,    77,    -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    15,    16,    17,   138,    28,   139,
     140,   141,   142,   143,   162,   172,   144,   145,   146,   147,
     148,    92,    93,    43,    44,    45,    46,    95,    96,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    59,    60,    20,    87,    88,    19,    27,    27,     8,
      20,    26,     1,    19,    42,    20,    13,   100,    19,    50,
      52,     5,    65,    94,   151,    30,    14,    37,    38,     6,
      47,    39,   -89,   161,    10,     9,    89,   103,   104,   105,
     106,   107,   108,   109,    81,   111,   112,    27,   101,    97,
      94,    86,    94,    11,    12,    21,    13,    22,    18,    13,
      23,    24,    25,    29,   102,    18,    14,   121,    -8,    14,
      18,    48,   183,   184,    53,   186,    97,    61,   116,    76,
     -75,   192,    13,    77,    27,    63,    62,    94,    54,   196,
      55,    94,    90,   -75,    66,    64,    67,    56,    57,    32,
      78,    54,   155,    82,    91,    33,    34,    80,    83,    79,
      56,    57,    85,    35,    36,    37,    38,   116,    99,    39,
     110,    40,    41,    84,   167,   168,   169,   113,   114,   117,
     118,    91,   -75,   120,    42,   123,   125,   163,   177,   124,
      54,   126,    84,   180,   -76,   150,   153,   164,    50,    56,
      57,   156,   130,   190,   159,   157,   173,   132,    12,   133,
      13,   158,   165,   170,   134,   135,   178,   171,   136,   137,
      90,    72,    73,   179,    91,    76,   181,    32,   187,    77,
     188,   152,   195,    33,    34,   189,   191,   194,   197,     7,
     131,    35,    36,    37,    38,   160,   127,    39,   -89,    40,
      41,     0,   -75,    70,    71,    72,    73,   129,   115,    76,
      54,   -89,    84,    77,    25,     0,    51,     0,   154,    56,
      57,   -89,   -89,    32,     0,   -89,     0,   -89,   -89,    33,
      34,     0,     0,     0,    31,     0,     0,    35,    36,    37,
      38,    32,     0,    39,     0,    40,    41,    33,    34,     0,
       0,     0,    49,     0,     0,    35,    36,    37,    38,    32,
       0,    39,     0,    40,    41,    33,    34,     0,     0,     0,
      51,     0,     0,    35,    36,    37,    38,    32,     0,    39,
       0,    40,    41,    33,    34,     0,     0,     0,     0,     0,
       0,    35,    36,    37,    38,     0,     0,    39,   166,    40,
      41,    69,    70,    71,    72,    73,    74,    75,    76,     0,
     175,     0,    77,    69,    70,    71,    72,    73,    74,    75,
      76,     0,   185,     0,    77,    69,    70,    71,    72,    73,
      74,    75,    76,     0,     0,    68,    77,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,   119,    77,    69,
      70,    71,    72,    73,    74,    75,    76,     0,     0,     0,
      77,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,     0,    77,   122,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,     0,    77,   128,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,    98,    77,    69,
      70,    71,    72,    73,    74,    75,    76,     0,     0,   174,
      77,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,   176,    77,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,   182,    77,    69,    70,    71,    72,    73,
      74,    75,    76,     0,     0,   193,    77,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,     0,    77,    69,
      70,    71,    72,    73,    74,     0,    76,     0,     0,     0,
      77,    69,    70,    71,    72,    73,     0,     0,    76,     0,
       0,     0,    77
};

static const yytype_int16 yycheck[] =
{
      32,    33,    34,     9,    16,    54,     9,    13,    14,     8,
      16,    13,     9,    16,    18,    21,     6,    66,    21,    23,
      24,    16,    40,    55,   130,    16,    16,    39,    40,     0,
      21,    43,    12,    13,    16,    34,    54,    69,    70,    71,
      72,    73,    74,    75,    48,    77,    78,    53,    66,    55,
      82,    53,    84,     3,     4,    34,     6,     4,     9,     6,
      11,    12,    32,    35,    68,    16,    16,    99,    35,    16,
      21,    22,   178,   179,    33,   181,    82,    16,    84,    28,
      20,   187,     6,    32,    90,     6,    16,   119,    28,   195,
      30,   123,    16,    20,    28,    16,    18,    37,    38,    23,
      20,    28,   134,    30,    55,    29,    30,    35,    18,    28,
      37,    38,    18,    37,    38,    39,    40,   123,    32,    43,
      16,    45,    46,    30,   156,   157,   158,    16,    18,    16,
      31,    82,    20,    31,   138,    30,    19,   143,   170,    31,
      28,    34,    30,   175,    20,    31,    18,    18,   152,    37,
      38,    30,    34,   185,    35,    30,   162,     3,     4,     5,
       6,    30,    35,    30,    10,    11,    34,    12,    14,    15,
      16,    24,    25,    34,   125,    28,    34,    23,    34,    32,
      35,   132,    34,    29,    30,    35,    35,    35,    35,     4,
     125,    37,    38,    39,    40,   141,   119,    43,    16,    45,
      46,    -1,    20,    22,    23,    24,    25,   123,    82,    28,
      28,    29,    30,    32,    32,    -1,    16,    -1,    18,    37,
      38,    39,    40,    23,    -1,    43,    -1,    45,    46,    29,
      30,    -1,    -1,    -1,    16,    -1,    -1,    37,    38,    39,
      40,    23,    -1,    43,    -1,    45,    46,    29,    30,    -1,
      -1,    -1,    16,    -1,    -1,    37,    38,    39,    40,    23,
      -1,    43,    -1,    45,    46,    29,    30,    -1,    -1,    -1,
      16,    -1,    -1,    37,    38,    39,    40,    23,    -1,    43,
      -1,    45,    46,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    -1,    -1,    43,    18,    45,
      46,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      18,    -1,    32,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    18,    -1,    32,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    19,    32,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    19,    32,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    33,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    32,    33,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    32,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    21,
      22,    23,    24,    25,    26,    -1,    28,    -1,    -1,    -1,
      32,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    48,    49,    50,    16,     0,    49,     8,    34,
      16,     3,     4,     6,    16,    51,    52,    53,    54,    65,
      76,    34,     4,    54,    54,    32,    55,    76,    55,    35,
      51,    16,    23,    29,    30,    37,    38,    39,    40,    43,
      45,    46,    66,    70,    71,    72,    73,    51,    54,    16,
      66,    16,    66,    33,    28,    30,    37,    38,    70,    70,
      70,    16,    16,     6,    16,    73,    28,    18,    19,    21,
      22,    23,    24,    25,    26,    27,    28,    32,    20,    28,
      35,    66,    30,    18,    30,    18,    55,    16,    72,    73,
      16,    54,    68,    69,    70,    74,    75,    76,    31,    32,
      72,    73,    66,    70,    70,    70,    70,    70,    70,    70,
      16,    70,    70,    16,    18,    68,    76,    16,    31,    19,
      31,    70,    33,    30,    31,    19,    34,    75,    33,    74,
      34,    69,     3,     5,    10,    11,    14,    15,    54,    56,
      57,    58,    59,    60,    63,    64,    65,    66,    67,    76,
      31,    56,    54,    18,    18,    70,    30,    30,    30,    35,
      57,    13,    61,    76,    18,    35,    18,    70,    70,    70,
      30,    12,    62,    76,    31,    18,    31,    70,    34,    34,
      70,    34,    31,    56,    56,    18,    56,    34,    35,    35,
      70,    35,    56,    31,    35,    34,    56,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    51,    52,
      52,    53,    53,    53,    54,    54,    55,    55,    55,    56,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    60,    60,    61,    61,    62,    62,    63,    64,    65,
      65,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    72,    72,
      72,    72,    73,    73,    73,    74,    74,    75,    75,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     5,     7,     2,     1,     1,
       1,     8,     9,     1,     2,     2,     1,     2,     3,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       2,     7,     3,     7,     1,     4,     1,     7,    11,     3,
       4,     4,     5,     1,     3,     2,     3,     1,     1,     2,
       4,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     4,     2,
       2,     2,     2,     2,     5,     1,     4,     3,     1,     1,
       1,     1,     4,     3,     6,     1,     1,     1,     3,     0
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
#line 35 "sytax.y" /* yacc.c:1646  */
    {
	(yyval.node)=newNode("Program",1,(yyvsp[0].node));
	adjustNodes((yyval.node),0);
	printf("打印syntax tree:\n");  
	TravelTree((yyval.node),0) ;  
	printf("syntax tree打印完毕!\n\n");
	}
#line 1561 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassDefs",1,(yyvsp[0].node));}
#line 1567 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 44 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassDefs",1,(yyvsp[-1].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 1573 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Class",3,(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-1].node));adjustNodes((yyval.node),2);}
#line 1579 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Class",5,(yyvsp[-6].node),(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-1].node));adjustNodes((yyval.node),5);}
#line 1585 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassStms",1,(yyvsp[-1].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 1591 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 53 "sytax.y" /* yacc.c:1646  */
    {}
#line 1597 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 56 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassStm",1,(yyvsp[0].node));}
#line 1603 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 57 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassStm",1,(yyvsp[0].node));}
#line 1609 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Fun",4,(yyvsp[-7].node),(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1615 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Fun",5,(yyvsp[-8].node),(yyvsp[-7].node),(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1621 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Fun",0,-1);}
#line 1627 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 63 "sytax.y" /* yacc.c:1646  */
    { (yyval.node)=newNode("VarType",2,(yyvsp[-1].node),(yyvsp[0].node));adjustNodes((yyval.node),2);}
#line 1633 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarType",2,(yyvsp[-1].node),(yyvsp[0].node));adjustNodes((yyval.node),2);}
#line 1639 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "sytax.y" /* yacc.c:1646  */
    {}
#line 1645 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Arrays",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1651 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Arrays",2,(yyvsp[-2].node),(yyvsp[-1].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 1657 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("BaseStm",1,(yyvsp[0].node));adjustNodes((yyval.node),0);}
#line 1663 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 73 "sytax.y" /* yacc.c:1646  */
    { (yyval.node)=newNode("Lines",1,(yyvsp[0].node));}
#line 1669 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Lines",1,(yyvsp[-1].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 1675 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 78 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",0,-1);}
#line 1681 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 79 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1687 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 80 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1693 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 81 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[-1].node));}
#line 1699 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 82 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1705 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 83 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1711 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 84 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1717 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 85 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1723 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 89 "sytax.y" /* yacc.c:1646  */
    {
	(yyval.node)=newNode("BreakStm",1,(yyvsp[-1].node));
}
#line 1731 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 93 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("IfStm",3,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1737 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 94 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("IfStm",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1743 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 96 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ELIfStm",3,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1749 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ELIfStm",0,-1);}
#line 1755 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 99 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ElseStm",2,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1761 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 100 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ElseStm",0,-1);}
#line 1767 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("WhileStm",3,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1773 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 104 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ForStm",3,(yyvsp[-10].node),(yyvsp[-8].node),(yyvsp[-5].node));}
#line 1779 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 106 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",2,(yyvsp[-2].node),(yyvsp[-1].node));adjustNodes((yyval.node),2);}
#line 1785 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",3,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node));adjustNodes((yyval.node),3);}
#line 1791 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",3,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node));adjustNodes((yyval.node),3);}
#line 1797 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",4,(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node));adjustNodes((yyval.node),4);}
#line 1803 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 112 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",1,(yyvsp[0].node));}
#line 1809 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 113 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",1,(yyvsp[-2].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 1815 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 116 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ReturnStm",1,(yyvsp[-1].node));}
#line 1821 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 117 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ReturnStm",1,(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1827 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 119 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1833 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 120 "sytax.y" /* yacc.c:1646  */
    {
		(yyval.node)=newNode("Args",1,(yyvsp[0].node));
		adjustNodes((yyval.node),0);
	}
#line 1842 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 127 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Arg",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1848 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "sytax.y" /* yacc.c:1646  */
    {
		(yyval.node)=newNode("Arg",2,(yyvsp[-3].node),(yyvsp[-2].node));
		(yyval.node)->temp=(yyvsp[0].node);
	}
#line 1857 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 135 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[0].node));}
#line 1863 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 136 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[0].node));}
#line 1869 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 137 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1875 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 138 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1881 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 139 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1887 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 140 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1893 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 141 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1899 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 142 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1905 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 143 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1911 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1917 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 146 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1923 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 147 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1929 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 148 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1935 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 149 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1941 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 150 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[-1].node));}
#line 1947 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 151 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1953 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 152 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1959 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 153 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",4,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1965 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 154 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1971 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 155 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1977 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 156 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1983 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 157 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1989 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1995 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 159 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",5,(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2001 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 162 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Lvalue",1,(yyvsp[0].node));}
#line 2007 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 163 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Lvalue",4,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2013 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 164 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Lvalue",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2019 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 166 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 2025 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 2031 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 168 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 2037 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 169 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 2043 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 172 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Call",2,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 2049 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Call",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 2055 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 174 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Call",4,(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-1].node));}
#line 2061 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 177 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArgs",0,-1);}
#line 2067 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 178 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArgs",1,(yyvsp[0].node));adjustNodes((yyval.node),0);}
#line 2073 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 180 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArg",1,(yyvsp[0].node));}
#line 2079 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 181 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArg",1,(yyvsp[-2].node));(yyval.node)->temp=(yyvsp[0].node);}
#line 2085 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 183 "sytax.y" /* yacc.c:1646  */
    {}
#line 2091 "sytax.tab.c" /* yacc.c:1646  */
    break;


#line 2095 "sytax.tab.c" /* yacc.c:1646  */
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
#line 185 "sytax.y" /* yacc.c:1906  */



void yyerror(const char*s,...) //变长参数错误处理函数
{
    va_list ap;
    va_start(ap,s);
    // fprintf(stderr,"%d:error:",yylineno);//错误行号
	fprintf(stderr, "Error at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr,s,ap);
    fprintf(stderr,"\n");
}
