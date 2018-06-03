
%{
#include<stdio.h>
#include<stdlib.h>
#include "Main.h"
#include "sytax.tab.h"

    int yycolumn = 1;
    #define YY_USER_ACTION \
      yylloc.first_line = yylloc.last_line = yylineno; \
      yylloc.first_column = yycolumn; \
      yylloc.last_column = yycolumn + yyleng - 1; \
      yycolumn += yyleng;

%}

%option yylineno

PLUS  "+"
MINUS "-"

INT		[1-9]+[0-9]*|0
INT8	[0][0-9]+
INT16   0x[0-9a-fA-F]+[hH]?
FLOAT   [0-9]+\.[0-9]*
STR		\"[^\"\n]*\"
NULLPTR null
BOOL    true|false
ID	   [a-z_A-Z][a-zA-Z_0-9]*
TYPE   int|float|void|bool|String
STRUCT "struct"
CLASS  "class"
RETURN "return"
STATIC "static"
BREAK  "break"
IF "if"
ELSE "else"
ELIF "else[ ]*if"
FOR  "for"
FINAL "final"
WHILE while
THIS  this
NEW   new
DPLUS \+\+
DMINUS --
EXTENDS extends
SPACE [ \t\r]*
EOL [ \n\t\r]*
SEMI ;
COMMA ,
ASSIGNOP [+*\-/]?=
RELOP >|<|>=|<=|==|!=
STAR \*
DIV \/
AND &&
OR \|\|
DOT \.
NOT !
LP \(
RP \)
LB \[
RB \]
LC \{
RC \}
AERROR .
LINECOMMENT  "//"[^\n]*$
WEAKCOMMENT  "/*"([^*]|\*+[^*/])*\*+"/"
%%
{BREAK} {yylval.node=newNode("BREAK",0,yylineno); return BREAK;}
{STATIC} {yylval.node=newNode("STATIC",0,yylineno); return STATIC;}
{THIS} {yylval.node=newNode("THIS",0,yylineno); return THIS;}
{NEW}  {yylval.node=newNode("NEW",0,yylineno); return NEW;}
{DPLUS} {yylval.node=newNode("AUTO",0,yylineno);cout<<"&&&&&&&&&&&&&&&&7"<<endl; return DPLUS;}
{DMINUS} {yylval.node=newNode("AUTO",0,yylineno); return DMINUS;}
{PLUS} {yylval.node=newNode("OP",0,yylineno); return PLUS;}
{MINUS} {yylval.node=newNode("OP",0,yylineno); return MINUS;}
{LINECOMMENT} {}
{WEAKCOMMENT} {}
{FINAL} {yylval.node=newNode("FINAL",0,yylineno);return FINAL;}
{TYPE} {yylval.node=newNode("TYPE",0,yylineno);return TYPE;}
{STRUCT} {yylval.node=newNode("STRUCT",0,yylineno);return STRUCT;}
{CLASS} {yylval.node=newNode("CLASS",0,yylineno);return CLASS;}
{RETURN} {yylval.node=newNode("RETURN",0,yylineno); return RETURN;}
{IF} { yylval.node=newNode("IF",0,yylineno);return IF;}
{ELSE} {yylval.node=newNode("ELSE",0,yylineno); return ELSE;}
{ELIF} {yylval.node=newNode("ELIF",0,yylineno); return ELIF;}
{WHILE} {yylval.node=newNode("WHILE",0,yylineno); return WHILE;}
{FOR} {yylval.node=newNode("FOR",0,yylineno); return FOR;}
{EXTENDS} {yylval.node=newNode("EXTENDS",0,yylineno); return EXTENDS;}

{INT} {yylval.node=newNode("INT",0,yylineno);*yylval.node->name="int"; return INT;}
{INT8} {yylval.node=newNode("INT8",0,yylineno);*yylval.node->name="int"; return INT;}
{INT16} {yylval.node=newNode("INT16",0,yylineno);*yylval.node->name="int"; return INT;}
{FLOAT}  {yylval.node=newNode("float",0,yylineno); return FLOAT;}
{STR}		{yylval.node=newNode("String",0,yylineno); return STR;}
{NULLPTR} {yylval.node=newNode("NULLPTR",0,yylineno); return NULLPTR;}
{BOOL}    {yylval.node=newNode("bool",0,yylineno); return BOOL;}
{ID} {yylval.node=newNode("ID",0,yylineno); return ID;}

{SPACE} {}
{EOL} { yycolumn = 1; }
{SEMI} {yylval.node=newNode("SEMI",0,yylineno); return SEMI;}
{COMMA} {yylval.node=newNode("COMMA",0,yylineno); return COMMA;}
{ASSIGNOP} {yylval.node=newNode("ASSIGNOP",0,yylineno); return ASSIGNOP;}
{RELOP} {yylval.node=newNode("RELOP",0,yylineno); return RELOP;}
{STAR} {yylval.node=newNode("OP",0,yylineno); return STAR;}
{DIV} {yylval.node=newNode("OP",0,yylineno); return DIV;}
{AND} {yylval.node=newNode("OP",0,yylineno); return AND;}
{OR} {yylval.node=newNode("OP",0,yylineno); return OR;}
{DOT} {yylval.node=newNode("DOT",0,yylineno); return DOT;}
{NOT} {yylval.node=newNode("NOT",0,yylineno); return NOT;}
{LP} {yylval.node=newNode("LP",0,yylineno); return LP;}
{RP} {yylval.node=newNode("RP",0,yylineno); return RP;}
{LB} {yylval.node=newNode("LB",0,yylineno); return LB;}
{RB} {yylval.node=newNode("RB",0,yylineno); return RB;}
{LC} {yylval.node=newNode("LC",0,yylineno); return LC;}
{RC} {yylval.node=newNode("RC",0,yylineno); return RC;}

{AERROR} {}

%%
int yywrap()
{
    return 1;
}
