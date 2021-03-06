/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "sytax.y"

#include <unistd.h>
#include <stdio.h>   
#include "Main.h"
#include"lex.yy.c"
#include<stdarg.h>
void yyerror(const char* fmt, ...);

/* Line 371 of yacc.c  */
#line 77 "sytax.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     DOT = 277,
     NOT = 278,
     LP = 279,
     RP = 280,
     LB = 281,
     RB = 282,
     LC = 283,
     RC = 284,
     AERROR = 285,
     DPLUS = 286,
     DMINUS = 287,
     INT = 288,
     FLOAT = 289,
     NULLPTR = 290,
     STR = 291,
     BOOL = 292,
     PLUS = 293,
     MINUS = 294,
     STAR = 295,
     DIV = 296,
     OR = 297,
     AND = 298,
     EOL = 299,
     NEW = 300,
     THIS = 301,
     SUPER = 302
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 12 "sytax.y"

TreeNode *node;


/* Line 387 of yacc.c  */
#line 172 "sytax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_SYTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 213 "sytax.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   323

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    16,    24,    27,    29,
      31,    33,    42,    52,    60,    63,    66,    68,    70,    73,
      75,    77,    80,    82,    84,    86,    89,    91,    93,    95,
      97,   100,   108,   111,   116,   118,   126,   138,   142,   147,
     152,   158,   160,   164,   168,   170,   173,   177,   179,   181,
     184,   189,   193,   197,   201,   203,   205,   209,   213,   215,
     219,   223,   227,   229,   233,   237,   241,   244,   247,   249,
     252,   255,   258,   261,   264,   267,   269,   273,   277,   281,
     283,   285,   290,   295,   297,   299,   301,   303,   305,   307,
     312,   314,   316,   318,   322
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    -1,    51,    -1,    51,    50,    -1,
       9,    16,    28,    52,    29,    -1,     9,    16,     8,    16,
      28,    52,    29,    -1,    53,    52,    -1,    53,    -1,    54,
      -1,    65,    -1,    55,    16,    24,    69,    25,    28,    57,
      29,    -1,     3,    55,    16,    24,    69,    25,    28,    57,
      29,    -1,    16,    24,    69,    25,    28,    57,    29,    -1,
       6,    56,    -1,    16,    56,    -1,     6,    -1,    16,    -1,
      26,    27,    -1,    58,    -1,    59,    -1,    59,    58,    -1,
      81,    -1,    61,    -1,    63,    -1,    67,    18,    -1,    65,
      -1,    68,    -1,    60,    -1,    64,    -1,     5,    18,    -1,
      11,    24,    71,    25,    28,    57,    29,    -1,    61,    62,
      -1,    12,    28,    57,    29,    -1,    81,    -1,    15,    24,
      71,    25,    28,    57,    29,    -1,    14,    24,    72,    18,
      71,    18,    72,    25,    28,    57,    29,    -1,    55,    66,
      18,    -1,     3,    55,    66,    18,    -1,     4,    55,    66,
      18,    -1,     3,     4,    55,    66,    18,    -1,    16,    -1,
      16,    20,    72,    -1,    66,    19,    66,    -1,    72,    -1,
      10,    18,    -1,    10,    72,    18,    -1,    81,    -1,    70,
      -1,    55,    16,    -1,    55,    16,    19,    70,    -1,    72,
      21,    72,    -1,    72,    43,    72,    -1,    72,    42,    72,
      -1,    77,    -1,    78,    -1,    16,    22,    78,    -1,    74,
      22,    78,    -1,    73,    -1,    76,    20,    72,    -1,    72,
      38,    72,    -1,    72,    39,    72,    -1,    71,    -1,    72,
      40,    72,    -1,    72,    41,    72,    -1,    24,    72,    25,
      -1,    39,    72,    -1,    23,    72,    -1,    75,    -1,    31,
      73,    -1,    73,    31,    -1,    32,    73,    -1,    73,    32,
      -1,    45,    78,    -1,    45,    75,    -1,    16,    -1,    75,
      22,    16,    -1,    16,    22,    16,    -1,    74,    22,    16,
      -1,    46,    -1,    47,    -1,     6,    26,    72,    27,    -1,
      16,    26,    72,    27,    -1,    73,    -1,    75,    -1,    33,
      -1,    34,    -1,    37,    -1,    36,    -1,    16,    24,    79,
      25,    -1,    81,    -1,    80,    -1,    72,    -1,    72,    19,
      80,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    46,    47,    51,    54,    63,    64,    67,
      68,    70,    71,    72,    75,    81,    87,    88,    90,    93,
      95,    96,   100,   101,   102,   103,   104,   105,   106,   107,
     111,   115,   116,   122,   123,   125,   127,   129,   132,   133,
     134,   137,   138,   139,   141,   143,   144,   146,   147,   154,
     155,   161,   162,   163,   165,   166,   167,   168,   169,   170,
     171,   172,   174,   176,   177,   179,   180,   181,   182,   183,
     184,   185,   186,   188,   189,   192,   193,   194,   195,   197,
     198,   200,   201,   204,   205,   207,   208,   209,   210,   214,
     217,   218,   220,   221,   223
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STATIC", "FINAL", "BREAK", "TYPE",
  "STRUCT", "EXTENDS", "CLASS", "RETURN", "IF", "ELSE", "ELIF", "FOR",
  "WHILE", "ID", "SPACE", "SEMI", "COMMA", "ASSIGNOP", "RELOP", "DOT",
  "NOT", "LP", "RP", "LB", "RB", "LC", "RC", "AERROR", "DPLUS", "DMINUS",
  "INT", "FLOAT", "NULLPTR", "STR", "BOOL", "PLUS", "MINUS", "STAR", "DIV",
  "OR", "AND", "EOL", "NEW", "THIS", "SUPER", "$accept", "Program",
  "ClassDefs", "Class", "ClassStms", "ClassStm", "Fun", "VarType",
  "Arrays", "BaseStm", "Lines", "Line", "BreakStm", "IfStm", "ElseStm",
  "WhileStm", "ForStm", "DeclareStm", "DeclareVarStm", "VarStm",
  "ReturnStm", "Args", "Arg", "BoolExp", "Exp", "IdStm", "ClassPointer",
  "ArrayIndex", "Lvalue", "Constant", "Call", "CallArgs", "CallArg",
  "EMPTY", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    55,    55,    55,    55,    56,    57,
      58,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    61,    61,    62,    62,    63,    64,    65,    65,    65,
      65,    66,    66,    66,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    77,    77,    78,
      79,    79,    80,    80,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     5,     7,     2,     1,     1,
       1,     8,     9,     7,     2,     2,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       2,     7,     2,     4,     1,     7,    11,     3,     4,     4,
       5,     1,     3,     3,     1,     2,     3,     1,     1,     2,
       4,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     3,     3,     2,     2,     1,     2,
       2,     2,     2,     2,     2,     1,     3,     3,     3,     1,
       1,     4,     4,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       0,     0,     0,    16,    17,     0,     8,     9,     0,    10,
       0,     0,    17,     0,     0,     0,    14,    94,    15,     5,
       7,    41,     0,     0,     0,    41,     0,    41,     0,    18,
       0,     0,    48,    47,     0,    94,    37,     0,     6,     0,
      94,    38,    39,    49,     0,     0,    75,     0,     0,     0,
       0,    85,    86,    88,    87,     0,     0,    79,    80,    62,
      42,    58,     0,    68,     0,    54,    55,     0,    43,    40,
       0,     0,    94,     0,     0,    94,     0,    67,     0,    75,
      69,     0,     0,    71,    66,     0,    74,    73,     0,     0,
       0,     0,     0,     0,     0,    70,    72,     0,     0,     0,
       0,     0,    50,     0,     0,    16,     0,     0,     0,     0,
      75,     0,     0,    19,    20,    28,    23,    24,    29,    26,
       0,    27,    44,    22,     0,    77,    56,    92,     0,    91,
      90,     0,    65,     0,     0,    51,    60,    61,    63,    64,
      53,    52,    78,    57,    76,    59,    94,    94,     0,    30,
       0,    45,     0,     0,     0,     0,     0,    13,    21,     0,
      32,    34,    25,    81,     0,    89,    82,    77,    78,     0,
       0,    46,    62,     0,     0,    62,    94,    93,    11,    12,
       0,     0,     0,     0,    94,    62,    94,    33,     0,     0,
       0,    31,     0,    35,     0,    94,     0,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    15,    16,    17,   121,    28,   122,
     123,   124,   125,   126,   170,   127,   128,   129,    32,   130,
     131,    41,    42,    69,   132,    71,    72,    73,    74,    75,
      76,   138,   139,   133
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -128
static const yytype_int16 yypact[] =
{
      26,    46,    18,  -128,    26,     9,  -128,  -128,    61,    86,
      58,    77,    37,    68,   105,    70,    86,  -128,    88,  -128,
      86,    37,    68,    96,   122,   119,  -128,    37,  -128,  -128,
    -128,     0,   140,   123,   122,    24,   161,   141,   173,  -128,
     149,   152,  -128,  -128,   170,    37,  -128,   122,  -128,   181,
      37,  -128,  -128,   153,   167,   155,   147,   170,   170,     3,
       3,  -128,  -128,  -128,  -128,   170,    45,  -128,  -128,  -128,
     264,    95,   188,   112,   169,  -128,  -128,   194,   227,  -128,
     223,    37,    64,   170,   236,   170,   170,  -128,   222,    92,
    -128,   231,   232,  -128,   172,   113,  -128,  -128,   170,   170,
     170,   170,   170,   170,   170,  -128,  -128,   240,   241,   170,
     230,   245,  -128,    77,   256,   233,   117,   252,   253,   257,
     144,   122,   246,  -128,    64,  -128,   268,  -128,  -128,  -128,
     266,  -128,   264,  -128,   228,   262,  -128,   199,   263,  -128,
    -128,   251,  -128,   271,   279,   183,   172,   172,  -128,  -128,
     -11,   104,   262,  -128,  -128,   264,    64,    64,   122,  -128,
     151,  -128,   187,   170,   170,   170,   151,  -128,  -128,   254,
    -128,  -128,  -128,  -128,   170,  -128,  -128,  -128,  -128,   280,
     281,  -128,   283,   264,   193,   286,    64,  -128,  -128,  -128,
     284,   170,   285,   287,    64,   296,    64,  -128,   288,   170,
     289,  -128,   258,  -128,   291,    64,   292,  -128
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,   311,  -128,   108,  -128,  -128,    -5,   -10,  -123,
     196,  -128,  -128,  -128,  -128,  -128,  -128,    97,   -22,  -128,
    -128,     2,   242,  -127,   -44,   185,   191,    25,  -128,  -128,
     -61,  -128,   148,   -19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -85
static const yytype_int16 yytable[] =
{
      70,    36,    38,    26,    18,    97,    23,    24,    43,    55,
      98,    18,    49,    87,    88,    18,    34,     8,     6,    89,
      44,    94,    40,   136,    45,    78,    43,    99,   100,   101,
     102,    43,   104,   179,   180,     1,   182,     9,   185,   134,
      40,   137,   141,    13,    44,    40,   153,    77,    50,    67,
      68,    55,    80,    22,   145,   146,   147,   148,   149,   150,
     151,    95,     5,   193,   195,   155,   140,   113,    12,   114,
     115,   198,   162,   200,   116,   117,    40,    10,   118,   119,
     120,    21,   206,    13,    92,    92,    20,    57,    58,    11,
      12,    96,    13,    22,    25,    59,    60,    61,    62,    29,
      63,    64,    14,    65,    31,    26,    19,   171,   158,    66,
      67,    68,    35,    19,   143,   -83,   134,    19,    86,   183,
     184,   183,   141,    55,    30,    98,   105,   106,    33,    27,
     137,    25,   -84,    56,   108,   161,    36,    85,    37,    86,
      57,    58,    99,   100,   101,   102,    39,   183,    59,    60,
      61,    62,    48,    63,    64,   202,    65,    55,    46,    47,
     -17,    44,    66,    67,    68,    53,    84,    56,    85,    84,
     166,    85,    81,    86,    57,    58,    55,    54,    39,    51,
      47,    83,    59,    60,    61,    62,    56,    63,    64,   109,
      65,    52,    47,    57,    58,    82,    66,    67,    68,    79,
      47,    59,    60,    61,    62,   181,    63,    64,    98,    65,
     107,   191,   101,   102,    98,    66,    67,    68,   174,   110,
      98,    99,   100,   101,   102,    99,   100,   101,   102,   103,
     104,    99,   100,   101,   102,   103,   104,    99,   100,   101,
     102,   103,   104,    98,    90,    93,    47,   142,   111,    98,
      91,    91,   135,   144,   108,   173,   152,   154,   156,   160,
      99,   100,   101,   102,   103,   104,    99,   100,   101,   102,
     103,   104,    98,   157,   159,   167,   163,   164,   176,    98,
     169,   165,   186,   204,   172,    98,    85,   177,   175,    99,
     100,   101,   102,   103,   104,   178,    99,   100,   101,   102,
     103,   104,    99,   100,   101,   102,   103,   104,   190,   188,
     189,   192,   194,   196,   199,     7,   197,   201,   203,   205,
     168,   207,   187,   112
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      44,    23,    24,    13,     9,    66,    11,    12,    27,     6,
      21,    16,    34,    57,    58,    20,    21,     8,     0,    16,
      20,    65,    27,    84,    24,    47,    45,    38,    39,    40,
      41,    50,    43,   156,   157,     9,   163,    28,   165,    83,
      45,    85,    86,     6,    20,    50,   107,    45,    24,    46,
      47,     6,    50,    16,    98,    99,   100,   101,   102,   103,
     104,    16,    16,   186,   191,   109,    85,     3,     4,     5,
       6,   194,   116,   196,    10,    11,    81,    16,    14,    15,
      16,     4,   205,     6,    59,    60,    28,    23,    24,     3,
       4,    66,     6,    16,    26,    31,    32,    33,    34,    29,
      36,    37,    16,    39,    16,   115,     9,   126,   113,    45,
      46,    47,    16,    16,    22,    20,   160,    20,    26,   163,
     164,   165,   166,     6,    16,    21,    31,    32,    20,    24,
     174,    26,    20,    16,    22,    18,   158,    24,    16,    26,
      23,    24,    38,    39,    40,    41,    27,   191,    31,    32,
      33,    34,    29,    36,    37,   199,    39,     6,    18,    19,
      16,    20,    45,    46,    47,    16,    22,    16,    24,    22,
      26,    24,    19,    26,    23,    24,     6,    25,    27,    18,
      19,    26,    31,    32,    33,    34,    16,    36,    37,    20,
      39,    18,    19,    23,    24,    28,    45,    46,    47,    18,
      19,    31,    32,    33,    34,    18,    36,    37,    21,    39,
      22,    18,    40,    41,    21,    45,    46,    47,    19,    25,
      21,    38,    39,    40,    41,    38,    39,    40,    41,    42,
      43,    38,    39,    40,    41,    42,    43,    38,    39,    40,
      41,    42,    43,    21,    59,    60,    19,    25,    25,    21,
      59,    60,    16,    22,    22,    27,    16,    16,    28,    26,
      38,    39,    40,    41,    42,    43,    38,    39,    40,    41,
      42,    43,    21,    28,    18,    29,    24,    24,    27,    21,
      12,    24,    28,    25,    18,    21,    24,    16,    25,    38,
      39,    40,    41,    42,    43,    16,    38,    39,    40,    41,
      42,    43,    38,    39,    40,    41,    42,    43,    25,    29,
      29,    25,    28,    28,    18,     4,    29,    29,    29,    28,
     124,    29,   174,    81
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    49,    50,    51,    16,     0,    50,     8,    28,
      16,     3,     4,     6,    16,    52,    53,    54,    55,    65,
      28,     4,    16,    55,    55,    26,    56,    24,    56,    29,
      52,    16,    66,    52,    55,    16,    66,    16,    66,    27,
      55,    69,    70,    81,    20,    24,    18,    19,    29,    66,
      24,    18,    18,    16,    25,     6,    16,    23,    24,    31,
      32,    33,    34,    36,    37,    39,    45,    46,    47,    71,
      72,    73,    74,    75,    76,    77,    78,    69,    66,    18,
      69,    19,    28,    26,    22,    24,    26,    72,    72,    16,
      73,    74,    75,    73,    72,    16,    75,    78,    21,    38,
      39,    40,    41,    42,    43,    31,    32,    22,    22,    20,
      25,    25,    70,     3,     5,     6,    10,    11,    14,    15,
      16,    55,    57,    58,    59,    60,    61,    63,    64,    65,
      67,    68,    72,    81,    72,    16,    78,    72,    79,    80,
      81,    72,    25,    22,    22,    72,    72,    72,    72,    72,
      72,    72,    16,    78,    16,    72,    28,    28,    55,    18,
      26,    18,    72,    24,    24,    24,    26,    29,    58,    12,
      62,    81,    18,    27,    19,    25,    27,    16,    16,    57,
      57,    18,    71,    72,    72,    71,    28,    80,    29,    29,
      25,    18,    25,    57,    28,    71,    28,    29,    57,    18,
      57,    29,    72,    29,    25,    28,    57,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
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
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 37 "sytax.y"
    {
	(yyval.node)=newNode("Program",1,(yyvsp[(1) - (1)].node));
	adjustNodes((yyval.node),0);
	printf("打印syntax tree:\n");  
	TravelTree((yyval.node),0) ;
	printf("syntax tree打印完毕!\n\n");
	startSymbolCreate((yyval.node));
	}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 46 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 47 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (2)].node);(yyval.node)->temp=(yyvsp[(2) - (2)].node);}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 51 "sytax.y"
    {(yyval.node)=newNode("Class",1,(yyvsp[(4) - (5)].node));adjustNodes((yyval.node),0);
		(*(yyval.node)->attr)["id"]=*(yyvsp[(2) - (5)].node)->string_value;
	}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 54 "sytax.y"
    {
		(yyval.node)=newNode("Class",1,(yyvsp[(6) - (7)].node));
		(yyval.node)->line=(yyvsp[(1) - (7)].node)->line;
		adjustNodes((yyval.node),0);
		(*(yyval.node)->attr)["id"]=*(yyvsp[(2) - (7)].node)->string_value;
		(*(yyval.node)->attr)["ext"]=*(yyvsp[(4) - (7)].node)->string_value;
		}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 63 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (2)].node);(yyval.node)->temp=(yyvsp[(2) - (2)].node);}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 64 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 67 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 68 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 70 "sytax.y"
    {(yyval.node)=newNode("Fun",2,(yyvsp[(4) - (8)].node),(yyvsp[(7) - (8)].node));(yyval.node)->line=(yyvsp[(1) - (8)].node)->line;  (*(yyval.node)->attr)["id"]=*(yyvsp[(2) - (8)].node)->string_value; (*(yyval.node)->attr)["type"]=*(yyvsp[(1) - (8)].node)->string_value;}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 71 "sytax.y"
    {(yyval.node)=newNode("Fun",2,(yyvsp[(5) - (9)].node),(yyvsp[(8) - (9)].node));(yyval.node)->line=(yyvsp[(1) - (9)].node)->line;  (*(yyval.node)->attr)["id"]=*(yyvsp[(3) - (9)].node)->string_value; (*(yyval.node)->attr)["type"]=*(yyvsp[(2) - (9)].node)->string_value; (*(yyval.node)->attr)["static"]=*(yyvsp[(1) - (9)].node)->name;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 72 "sytax.y"
    {(yyval.node)=newNode("Fun",2,(yyvsp[(3) - (7)].node),(yyvsp[(6) - (7)].node));(*(yyval.node)->attr)["id"]=*(yyvsp[(1) - (7)].node)->string_value; }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 75 "sytax.y"
    { (yyval.node)=newNode("VarType",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));adjustNodes((yyval.node),1);
		(yyval.node)->string_value=new string(*(yyvsp[(1) - (2)].node)->string_value);
		for(int i=1;i<(yyval.node)->size();i++){
			*(yyval.node)->string_value+="[";
		}
	}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 81 "sytax.y"
    {(yyval.node)=newNode("VarType",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));adjustNodes((yyval.node),1);
		(yyval.node)->string_value=new string(*(yyvsp[(1) - (2)].node)->string_value);
		for(int i=1;i<(yyval.node)->size();i++){
			*(yyval.node)->string_value+="[";
		}
	}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 87 "sytax.y"
    { (yyval.node)=newNode("VarType",1,(yyvsp[(1) - (1)].node));(yyval.node)->string_value=new string(*(yyvsp[(1) - (1)].node)->string_value);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 88 "sytax.y"
    { (yyval.node)=newNode("VarType",1,(yyvsp[(1) - (1)].node));(yyval.node)->string_value=new string(*(yyvsp[(1) - (1)].node)->string_value);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 90 "sytax.y"
    {(yyval.node)=newNode("Arrays",0,yylineno);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 93 "sytax.y"
    {(yyval.node)=newNode("BaseStm",1,(yyvsp[(1) - (1)].node));adjustNodes((yyval.node),0);}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 95 "sytax.y"
    { (yyval.node)=newNode("Lines",1,(yyvsp[(1) - (1)].node));}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 96 "sytax.y"
    {(yyval.node)=newNode("Lines",1,(yyvsp[(1) - (2)].node));(yyval.node)->temp=(yyvsp[(2) - (2)].node);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 100 "sytax.y"
    {(yyval.node)=newNode("Line",0,yylineno);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 101 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 102 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 103 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (2)].node);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 104 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 105 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 106 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 107 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 111 "sytax.y"
    {
	(yyval.node)=newNode("BreakStm",1,(yyvsp[(1) - (2)].node));
}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 115 "sytax.y"
    {(yyval.node)=newNode("IfStm",2,(yyvsp[(3) - (7)].node),(yyvsp[(6) - (7)].node));}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 116 "sytax.y"
    {(yyval.node)=newNode("If-else",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 122 "sytax.y"
    {(yyval.node)=newNode("ElseStm",1,(yyvsp[(3) - (4)].node));}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 123 "sytax.y"
    {(yyval.node)=newNode("ElseStm",0,yylineno);}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 125 "sytax.y"
    {(yyval.node)=newNode("WhileStm",3,(yyvsp[(1) - (7)].node),(yyvsp[(3) - (7)].node),(yyvsp[(6) - (7)].node));}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 127 "sytax.y"
    {(yyval.node)=newNode("ForStm",3,(yyvsp[(1) - (11)].node),(yyvsp[(3) - (11)].node),(yyvsp[(6) - (11)].node));}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 129 "sytax.y"
    {(yyval.node)=newNode("DeclareStm",1,(yyvsp[(2) - (3)].node));adjustNodes((yyval.node),0);
	(*(yyval.node)->attr)["type"]=*(yyvsp[(1) - (3)].node)->string_value;
	}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 132 "sytax.y"
    {(yyval.node)=newNode("DeclareStm",1,(yyvsp[(3) - (4)].node));adjustNodes((yyval.node),0);(*(yyval.node)->attr)["type"]=*(yyvsp[(2) - (4)].node)->string_value;(*(yyval.node)->attr)["static"]=*(yyvsp[(1) - (4)].node)->name;}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 133 "sytax.y"
    {(yyval.node)=newNode("DeclareStm",1,(yyvsp[(3) - (4)].node));adjustNodes((yyval.node),0);(*(yyval.node)->attr)["type"]=*(yyvsp[(2) - (4)].node)->string_value;(*(yyval.node)->attr)["final"]=*(yyvsp[(1) - (4)].node)->name;}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 134 "sytax.y"
    {(yyval.node)=newNode("DeclareStm",1,(yyvsp[(4) - (5)].node));adjustNodes((yyval.node),0);(*(yyval.node)->attr)["type"]=*(yyvsp[(3) - (5)].node)->string_value;(*(yyval.node)->attr)["static"]=*(yyvsp[(1) - (5)].node)->name;(*(yyval.node)->attr)["final"]=*(yyvsp[(2) - (5)].node)->name;}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 137 "sytax.y"
    {(yyval.node)=newNode("Lvalue",0,yylineno);(yyval.node)->string_value=(yyvsp[(1) - (1)].node)->string_value;}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 138 "sytax.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);(yyvsp[(2) - (3)].node)->add((yyvsp[(1) - (3)].node));(yyvsp[(2) - (3)].node)->add((yyvsp[(3) - (3)].node));}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 139 "sytax.y"
    {(yyval.node)=newNode("VarStm",2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 141 "sytax.y"
    {(yyval.node)=newNode("VarStm",1,(yyvsp[(1) - (1)].node));}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 143 "sytax.y"
    {(yyval.node)=newNode("ReturnStm",0,yylineno);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 144 "sytax.y"
    {(yyval.node)=newNode("ReturnStm",1,(yyvsp[(2) - (3)].node));}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 146 "sytax.y"
    {(yyval.node)=newNode("Args",0,yylineno);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 147 "sytax.y"
    {
		(yyval.node)=newNode("Args",1,(yyvsp[(1) - (1)].node));
		adjustNodes((yyval.node),0);
	}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 154 "sytax.y"
    {(yyval.node)=newNode("Arg",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 155 "sytax.y"
    {
		(yyval.node)=newNode("Arg",2,(yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node));
		(yyval.node)->temp=(yyvsp[(4) - (4)].node);
	}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 161 "sytax.y"
    {(yyval.node)=newNode("BoolExp",1,(yyvsp[(2) - (3)].node));(yyvsp[(2) - (3)].node)->add((yyvsp[(1) - (3)].node));(yyvsp[(2) - (3)].node)->add((yyvsp[(3) - (3)].node));}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 162 "sytax.y"
    {(yyval.node)=newNode("BoolExp",1,(yyvsp[(2) - (3)].node));(yyvsp[(2) - (3)].node)->add((yyvsp[(1) - (3)].node));(yyvsp[(2) - (3)].node)->add((yyvsp[(3) - (3)].node));}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 163 "sytax.y"
    {(yyval.node)=newNode("BoolExp",1,(yyvsp[(2) - (3)].node));(yyvsp[(2) - (3)].node)->add((yyvsp[(1) - (3)].node));(yyvsp[(2) - (3)].node)->add((yyvsp[(3) - (3)].node));}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 165 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(1) - (1)].node));}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 166 "sytax.y"
    {(yyval.node)=newNode("Ref",1,(yyvsp[(1) - (1)].node));(yyval.node)->string_value=new string("THIS");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 167 "sytax.y"
    {(yyval.node)=newNode("Ref",1,(yyvsp[(3) - (3)].node));(yyval.node)->string_value=new string(*(yyvsp[(1) - (3)].node)->string_value);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 168 "sytax.y"
    {(yyval.node)=newNode("Ref",1,(yyvsp[(3) - (3)].node));(yyval.node)->string_value=new string(*(yyvsp[(1) - (3)].node)->name);}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 169 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 170 "sytax.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);(yyval.node)->add((yyvsp[(1) - (3)].node));(yyval.node)->add((yyvsp[(3) - (3)].node));  }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 171 "sytax.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);(yyval.node)->add((yyvsp[(1) - (3)].node));(yyval.node)->add((yyvsp[(3) - (3)].node));}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 172 "sytax.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);(yyval.node)->add((yyvsp[(1) - (3)].node));(yyval.node)->add((yyvsp[(3) - (3)].node));}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 174 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 176 "sytax.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);(yyval.node)->add((yyvsp[(1) - (3)].node));(yyval.node)->add((yyvsp[(3) - (3)].node));}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 177 "sytax.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);(yyval.node)->add((yyvsp[(1) - (3)].node));(yyval.node)->add((yyvsp[(3) - (3)].node));}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 179 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(2) - (3)].node));}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 180 "sytax.y"
    {(yyval.node)=newNode("Exp",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 181 "sytax.y"
    {(yyval.node)=newNode("Exp",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 182 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(1) - (1)].node));}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 183 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(1) - (2)].node));(yyvsp[(1) - (2)].node)->add((yyvsp[(2) - (2)].node));}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 184 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(2) - (2)].node));(yyvsp[(2) - (2)].node)->add((yyvsp[(1) - (2)].node));}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 185 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(1) - (2)].node));(yyvsp[(1) - (2)].node)->add((yyvsp[(2) - (2)].node));}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 186 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(2) - (2)].node));(yyvsp[(2) - (2)].node)->add((yyvsp[(1) - (2)].node));}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 188 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(1) - (2)].node));(yyvsp[(1) - (2)].node)->add((yyvsp[(2) - (2)].node));}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 189 "sytax.y"
    {(yyval.node)=newNode("Exp",1,(yyvsp[(1) - (2)].node));(yyvsp[(1) - (2)].node)->add((yyvsp[(2) - (2)].node));*(yyvsp[(2) - (2)].node)->name="newArray";*(yyvsp[(2) - (2)].node)->string_value+="[";}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 192 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 193 "sytax.y"
    {(yyval.node)=newNode("Ref",1,(yyvsp[(3) - (3)].node));(yyval.node)->string_value=(yyvsp[(1) - (3)].node)->string_value;}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 194 "sytax.y"
    {(yyval.node)=newNode("Ref",1,(yyvsp[(3) - (3)].node));(yyval.node)->string_value=new string(*(yyvsp[(1) - (3)].node)->string_value);}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 195 "sytax.y"
    {(yyval.node)=newNode("Ref",1,(yyvsp[(3) - (3)].node));(yyval.node)->string_value=new string(*(yyvsp[(1) - (3)].node)->name);}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 197 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 198 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 200 "sytax.y"
    {(yyval.node)=newNode("newArray",1,(yyvsp[(3) - (4)].node));(yyval.node)->string_value=(yyvsp[(1) - (4)].node)->string_value;}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 201 "sytax.y"
    {(yyval.node)=newNode("ArrayIndex",1,(yyvsp[(3) - (4)].node));(yyval.node)->string_value=(yyvsp[(1) - (4)].node)->string_value;}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 204 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 205 "sytax.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 207 "sytax.y"
    {(yyval.node)=newNode("Constant",1,(yyvsp[(1) - (1)].node));}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 208 "sytax.y"
    {(yyval.node)=newNode("Constant",1,(yyvsp[(1) - (1)].node));}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 209 "sytax.y"
    {(yyval.node)=newNode("Constant",1,(yyvsp[(1) - (1)].node));}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 210 "sytax.y"
    {(yyval.node)=newNode("Constant",1,(yyvsp[(1) - (1)].node));}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 214 "sytax.y"
    {(yyval.node)=newNode("Call",1,(yyvsp[(3) - (4)].node));(yyval.node)->string_value=new string(*(yyvsp[(1) - (4)].node)->string_value);}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 217 "sytax.y"
    {(yyval.node)=newNode("CallArgs",0,yylineno);}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 218 "sytax.y"
    {(yyval.node)=newNode("CallArgs",1,(yyvsp[(1) - (1)].node));adjustNodes((yyval.node),0);}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 220 "sytax.y"
    {(yyval.node)=newNode("CallArg",1,(yyvsp[(1) - (1)].node));}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 221 "sytax.y"
    {(yyval.node)=newNode("CallArg",1,(yyvsp[(1) - (3)].node));(yyval.node)->temp=(yyvsp[(3) - (3)].node);}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 223 "sytax.y"
    {}
    break;


/* Line 1792 of yacc.c  */
#line 2307 "sytax.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 225 "sytax.y"



void yyerror(const char*s,...) //变长参数错误处理函数
{
    va_list ap;
    va_start(ap,s);
    // fprintf(stderr,"%d:error:",yylineno);//错误行号
	fprintf(stderr, "Error at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr,s,ap);
    fprintf(stderr,"\n");
}