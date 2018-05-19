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
    TYPE = 258,
    STRUCT = 259,
    EXTENDS = 260,
    CLASS = 261,
    RETURN = 262,
    IF = 263,
    ELSE = 264,
    ELIF = 265,
    WHILE = 266,
    ID = 267,
    SPACE = 268,
    SEMI = 269,
    COMMA = 270,
    ASSIGNOP = 271,
    RELOP = 272,
    PLUS = 273,
    MINUS = 274,
    STAR = 275,
    DIV = 276,
    AND = 277,
    OR = 278,
    DOT = 279,
    NOT = 280,
    LP = 281,
    RP = 282,
    LB = 283,
    RB = 284,
    LC = 285,
    RC = 286,
    AERROR = 287,
    DPLUS = 288,
    DMINUS = 289,
    INT = 290,
    FLOAT = 291,
    NULLPTR = 292,
    STR = 293,
    BOOL = 294,
    EOL = 295,
    NEW = 296,
    THIS = 297,
    LINECOMMENT = 298,
    WEAKCOMMENT = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "sytax.y" /* yacc.c:355  */

TreeNode *node;

#line 164 "sytax.tab.c" /* yacc.c:355  */
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

#line 195 "sytax.tab.c" /* yacc.c:358  */

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
#define YYLAST   515

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    42,    43,    47,    48,    51,    52,    53,
      54,    57,    58,    60,    61,    63,    64,    67,    68,    69,
      70,    71,    72,    76,    77,    79,    80,    82,    83,    85,
      87,    90,    91,    94,    95,    97,    98,   102,   103,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   133,   134,   135,   136,   139,   140,   141,   144,
     145,   147,   148,   150
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE", "STRUCT", "EXTENDS", "CLASS",
  "RETURN", "IF", "ELSE", "ELIF", "WHILE", "ID", "SPACE", "SEMI", "COMMA",
  "ASSIGNOP", "RELOP", "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT",
  "NOT", "LP", "RP", "LB", "RB", "LC", "RC", "AERROR", "DPLUS", "DMINUS",
  "INT", "FLOAT", "NULLPTR", "STR", "BOOL", "EOL", "NEW", "THIS",
  "LINECOMMENT", "WEAKCOMMENT", "$accept", "Program", "ClassDefs", "Class",
  "ClassStm", "Fun", "VarType", "Lines", "Line", "IfStm", "ELIfStm",
  "ElseStm", "WhileStm", "DeclareStm", "VarStm", "ReturnStm", "Args",
  "Arg", "Exp", "Constant", "Call", "CallArgs", "CallArg", "EMPTY", YY_NULLPTR
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
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF -92

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define YYTABLE_NINF -74

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    -2,    20,    10,   -92,    29,   -92,   -92,    12,    -1,
      27,   -92,   -92,     0,   -92,   347,   -92,   -92,    -1,   -92,
     -92,   -92,    43,   365,   365,   365,    48,    59,   -92,   -92,
     -92,    62,    54,     4,   487,   -92,    57,     2,    17,   292,
     -92,   -92,    56,    88,    40,   435,   -92,   -92,    60,    57,
      17,   -92,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,    80,   -92,    60,   -92,    57,   311,    98,    61,
     -92,   408,    85,   -92,   -92,   365,   -92,   -92,    57,   487,
     487,    44,    88,    88,    40,    40,    76,   128,   421,    89,
     110,    97,   365,   -92,   -92,   -92,   365,    -1,   280,   -92,
     105,   -92,   329,   107,   112,   365,    95,   -92,    74,   -92,
     -92,   108,   -92,   -92,   -92,   -92,   394,   365,   365,   -92,
     -92,   115,   133,   -92,   -92,   -92,   448,   461,   365,   122,
     -92,   -92,   123,   124,   474,   280,   280,   280,   125,   132,
     169,   206,   280,   -92,   -92,   -92,   243,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,    73,
       0,    13,    14,     0,     7,     0,     8,    12,    73,     5,
       9,    10,    62,     0,     0,     0,     0,     0,    63,    64,
      65,     0,     0,     0,    31,    39,    40,     0,     0,    73,
      58,    60,    62,    54,    55,     0,    57,    59,     0,    61,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,    62,    42,    41,    62,     0,     0,
      36,    71,     0,    70,    35,    73,    53,    43,    44,    32,
      47,    50,    45,    46,    51,    52,    48,    49,     0,    67,
      37,     0,     0,    66,    69,    56,    73,     0,    73,    72,
       0,    38,     0,     0,     0,     0,     0,    15,    18,    19,
      21,     0,    22,    17,    68,    33,     0,     0,     0,    11,
      16,     0,    73,    26,    20,    34,     0,     0,     0,     0,
      24,    28,     0,     0,     0,    73,    73,    73,     0,     0,
       0,     0,    73,    27,    23,    29,     0,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,   156,   142,    33,     8,   -18,   -91,   -92,
     -92,   -92,   -92,    14,   -14,   -92,   -92,    64,   -17,   -25,
      23,    66,    72,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    13,    14,   105,   106,   107,   108,
     122,   130,   109,   110,   111,   112,    69,    70,    34,    35,
      36,    72,    73,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    33,    11,    11,    17,    11,    43,    44,    45,    17,
       5,    12,    12,    65,    12,   120,     1,    15,    51,    52,
       6,    15,    71,    16,    10,    77,    15,    21,    17,    64,
      74,    19,    16,    63,     8,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    15,    20,    68,   120,   120,
     120,    21,    28,    29,    49,   120,    30,    18,    71,     9,
      46,    66,    55,    56,    57,    58,    94,    38,    61,    39,
      20,    47,    61,    78,    48,    71,    40,    41,    50,    71,
      38,    62,    75,   -73,   121,   116,    75,    94,    91,    40,
      41,    33,    89,    54,    55,    56,    57,    58,    11,   123,
     126,   127,   102,   103,    61,    68,   104,    67,    57,    58,
      90,   134,    93,   131,    23,    96,    61,   139,   140,   141,
      24,    25,   124,    52,   146,    97,   119,    98,    26,    27,
      28,    29,   114,   117,    30,    11,    31,    32,   118,   102,
     103,   128,   129,   104,    67,    54,    55,    56,    57,    58,
      59,    23,   135,   136,   137,   142,    61,    24,    25,     7,
      37,   101,   100,   143,    99,    26,    27,    28,    29,     0,
       0,    30,    11,    31,    32,     0,   102,   103,     0,     0,
     104,    67,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,    24,    25,     0,     0,     0,     0,
     144,     0,    26,    27,    28,    29,     0,     0,    30,    11,
      31,    32,     0,   102,   103,     0,     0,   104,    67,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,    24,    25,     0,     0,     0,     0,   145,     0,    26,
      27,    28,    29,     0,     0,    30,    11,    31,    32,     0,
     102,   103,     0,     0,   104,    67,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,    24,    25,
       0,     0,     0,     0,   147,     0,    26,    27,    28,    29,
       0,     0,    30,    11,    31,    32,     0,   102,   103,     0,
       0,   104,    67,     0,     0,    11,     0,     0,     0,    23,
       0,     0,     0,     0,    67,    24,    25,     0,     0,     0,
       0,    23,     0,    26,    27,    28,    29,    24,    25,    30,
       0,    31,    32,   -14,     0,    26,    27,    28,    29,     0,
     -14,    30,     0,    31,    32,    38,   -14,    75,     0,     0,
       0,    42,     0,   115,    40,    41,   -14,   -14,    23,     0,
     -14,     0,   -14,   -14,    24,    25,     0,     0,     0,    22,
       0,     0,    26,    27,    28,    29,    23,     0,    30,     0,
      31,    32,    24,    25,     0,     0,     0,    42,     0,     0,
      26,    27,    28,    29,    23,     0,    30,     0,    31,    32,
      24,    25,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,     0,     0,    30,     0,    31,    32,   125,     0,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    92,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      95,    53,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,    76,    61,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,   132,    61,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,   133,    61,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,   138,    61,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
       9,    15,     3,     3,    13,     3,    23,    24,    25,    18,
      12,    12,    12,    38,    12,   106,     6,     9,    14,    15,
       0,    13,    39,     9,    12,    50,    18,    13,    37,    12,
      39,    31,    18,    31,     5,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    37,    13,    39,   139,   140,
     141,    37,    35,    36,    31,   146,    39,    30,    75,    30,
      12,    38,    18,    19,    20,    21,    75,    24,    28,    26,
      37,    12,    28,    50,    12,    92,    33,    34,    24,    96,
      24,    24,    26,     9,    10,   102,    26,    96,    27,    33,
      34,   105,    12,    17,    18,    19,    20,    21,     3,   108,
     117,   118,     7,     8,    28,    97,    11,    12,    20,    21,
      12,   128,    27,   122,    19,    26,    28,   135,   136,   137,
      25,    26,    14,    15,   142,    15,    31,    30,    33,    34,
      35,    36,    27,    26,    39,     3,    41,    42,    26,     7,
       8,    26,     9,    11,    12,    17,    18,    19,    20,    21,
      22,    19,    30,    30,    30,    30,    28,    25,    26,     3,
      18,    97,    96,    31,    92,    33,    34,    35,    36,    -1,
      -1,    39,     3,    41,    42,    -1,     7,     8,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    39,     3,
      41,    42,    -1,     7,     8,    -1,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,     3,    41,    42,    -1,
       7,     8,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,     3,    41,    42,    -1,     7,     8,    -1,
      -1,    11,    12,    -1,    -1,     3,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    12,    25,    26,    -1,    -1,    -1,
      -1,    19,    -1,    33,    34,    35,    36,    25,    26,    39,
      -1,    41,    42,    12,    -1,    33,    34,    35,    36,    -1,
      19,    39,    -1,    41,    42,    24,    25,    26,    -1,    -1,
      -1,    12,    -1,    14,    33,    34,    35,    36,    19,    -1,
      39,    -1,    41,    42,    25,    26,    -1,    -1,    -1,    12,
      -1,    -1,    33,    34,    35,    36,    19,    -1,    39,    -1,
      41,    42,    25,    26,    -1,    -1,    -1,    12,    -1,    -1,
      33,    34,    35,    36,    19,    -1,    39,    -1,    41,    42,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    41,    42,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      29,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    46,    47,    48,    12,     0,    48,     5,    30,
      12,     3,    12,    49,    50,    51,    58,    68,    30,    31,
      50,    58,    12,    19,    25,    26,    33,    34,    35,    36,
      39,    41,    42,    59,    63,    64,    65,    49,    24,    26,
      33,    34,    12,    63,    63,    63,    12,    12,    12,    65,
      24,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    28,    24,    31,    12,    64,    65,    12,    51,    61,
      62,    63,    66,    67,    68,    26,    27,    64,    65,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    12,
      12,    27,    15,    27,    68,    29,    26,    15,    30,    67,
      66,    62,     7,     8,    11,    51,    52,    53,    54,    57,
      58,    59,    60,    68,    27,    14,    63,    26,    26,    31,
      53,    10,    55,    68,    14,    14,    63,    63,    26,     9,
      56,    68,    27,    27,    63,    30,    30,    30,    27,    52,
      52,    52,    30,    31,    31,    31,    52,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    49,
      49,    50,    50,    51,    51,    52,    52,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    65,    65,    65,    66,
      66,    67,    67,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     5,     7,     1,     1,     2,
       2,     8,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     7,     3,     7,     1,     4,     1,     7,
       3,     1,     3,     2,     3,     1,     1,     2,     4,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     4,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     4,     3,     6,     1,
       1,     1,     3,     0
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
	printf("打印syntax tree:\n");  
	TravelTree((yyval.node),0) ;  
	printf("syntax tree打印完毕!\n\n");
	}
#line 1544 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 42 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassDefs",1,(yyvsp[0].node));}
#line 1550 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 43 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassDefs",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1556 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Class",5,(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1562 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Class",7,(yyvsp[-6].node),(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1568 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 51 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassStm",1,(yyvsp[0].node));}
#line 1574 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 52 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassStm",1,(yyvsp[0].node));}
#line 1580 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassStm",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1586 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ClassStm",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1592 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 57 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Fun",8,(yyvsp[-7].node),(yyvsp[-6].node),(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1598 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Args",0,-1);}
#line 1604 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "sytax.y" /* yacc.c:1646  */
    { (yyval.node)=newNode("VarType",1,(yyvsp[0].node));}
#line 1610 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarType",1,(yyvsp[0].node));}
#line 1616 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "sytax.y" /* yacc.c:1646  */
    { (yyval.node)=newNode("Lines",1,(yyvsp[0].node));}
#line 1622 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Lines",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1628 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",0,-1);}
#line 1634 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1640 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 69 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1646 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 70 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1652 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1658 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Line",1,(yyvsp[0].node));}
#line 1664 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 76 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("IfStm",7,(yyvsp[-6].node),(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1670 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 77 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("IfStm",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1676 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ELIfStm",7,(yyvsp[-6].node),(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1682 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 80 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ELIfStm",0,-1);}
#line 1688 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 82 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ElseStm",3,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1694 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 83 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ElseStm",0,-1);}
#line 1700 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 85 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("WhileStm",7,(yyvsp[-6].node),(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1706 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 87 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("DeclareStm",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1712 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 90 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",1,(yyvsp[0].node));}
#line 1718 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 91 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("VarStm",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1724 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 94 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ReturnStm",1,(yyvsp[-1].node));}
#line 1730 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 95 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("ReturnStm",1,(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1736 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 97 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Args",0,-1);}
#line 1742 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 98 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Args",1,(yyvsp[0].node));}
#line 1748 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Arg",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1754 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 103 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Arg",4,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
	}
#line 1761 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 108 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[0].node));}
#line 1767 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 109 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[0].node));}
#line 1773 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 110 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1779 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 111 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1785 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 112 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1791 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 113 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1797 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 114 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1803 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 115 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1809 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 116 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1815 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 117 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1821 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 118 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1827 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 119 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1833 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 120 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1839 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 121 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1845 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 122 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1851 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 123 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1857 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 124 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1863 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 125 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",4,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1869 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 126 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1875 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 127 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1881 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 128 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1887 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 129 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1893 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 130 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1899 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 133 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Exp",1,(yyvsp[0].node));}
#line 1905 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 134 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 1911 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 135 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 1917 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 136 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Constant",1,(yyvsp[0].node));}
#line 1923 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 139 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Call",4,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1929 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 140 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Call",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1935 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 141 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("Call",6,(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1941 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 144 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArgs",0,-1);}
#line 1947 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 145 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArgs",1,(yyvsp[0].node));}
#line 1953 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 147 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArg",1,(yyvsp[0].node));}
#line 1959 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 148 "sytax.y" /* yacc.c:1646  */
    {(yyval.node)=newNode("CallArg",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1965 "sytax.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 150 "sytax.y" /* yacc.c:1646  */
    {}
#line 1971 "sytax.tab.c" /* yacc.c:1646  */
    break;


#line 1975 "sytax.tab.c" /* yacc.c:1646  */
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
#line 152 "sytax.y" /* yacc.c:1906  */



void yyerror(const char*s,...) //变长参数错误处理函数
{
    va_list ap;
    va_start(ap,s);
    // fprintf(stderr,"%d:error:",yylineno);//错误行号
	fprintf(stderr, "Error at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr,s,ap);
    fprintf(stderr,"\n");
}
