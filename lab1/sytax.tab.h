/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    TYPE = 259,
    STRUCT = 260,
    EXTENDS = 261,
    CLASS = 262,
    RETURN = 263,
    IF = 264,
    ELSE = 265,
    ELIF = 266,
    WHILE = 267,
    ID = 268,
    SPACE = 269,
    SEMI = 270,
    COMMA = 271,
    ASSIGNOP = 272,
    RELOP = 273,
    PLUS = 274,
    MINUS = 275,
    STAR = 276,
    DIV = 277,
    AND = 278,
    OR = 279,
    DOT = 280,
    NOT = 281,
    LP = 282,
    RP = 283,
    LB = 284,
    RB = 285,
    LC = 286,
    RC = 287,
    AERROR = 288,
    DPLUS = 289,
    DMINUS = 290,
    INT = 291,
    FLOAT = 292,
    NULLPTR = 293,
    STR = 294,
    BOOL = 295,
    EOL = 296,
    NEW = 297,
    THIS = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "sytax.y" /* yacc.c:1909  */

TreeNode *node;

#line 102 "sytax.tab.h" /* yacc.c:1909  */
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
