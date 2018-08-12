%{
#include <unistd.h>
#include <stdio.h>   
#include "Main.h"
#include"lex.yy.c"
%}

%union{
TreeNode *node;
}

/*declare tokens*/
%token  <node> INT INT8 INT16 FLOAT NULLPTR STR BOOL
%token  <node> TYPE STRUCT RETURN IF ELSE WHILE ID SPACE SEMI COMMA ASSIGNOP RELOP PLUS MINUS STAR DIV AND OR DOT NOT LP RP LB RB LC RC AERROR
%token  <node> EOL
%type   <node> Program ExtDefList ExtDef ExtDecList Specifire StructSpecifire 
OptTag  Tag VarDec  FunDec VarList ParamDec Compst StmtList Stmt DefList Def DecList Dec Exp Args

/*priority*/
%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT 
%left LP RP LB RB DOT
%%
Program:ExtDefList {$$=newNode("Program",1,$1);printf("打印syntax tree:\n");  TravelTree($$,0) ;   printf("syntax tree打印完毕!\n\n");};

ExtDefList:ExtDef ExtDefList {$$=newNode("ExtDefList",2,$1,$2);}
	| {$$=newNode("ExtDefList",0,-1);};
ExtDef:Specifire ExtDecList SEMI    {$$=newNode("ExtDef",3,$1,$2,$3);}    
	|Specifire SEMI	{$$=newNode("ExtDef",2,$1,$2);}
	|Specifire FunDec Compst	{$$=newNode("ExtDef",3,$1,$2,$3);}
	;
ExtDecList:VarDec {$$=newNode("ExtDecList",1,$1);}
	|VarDec COMMA ExtDecList {$$=newNode("ExtDecList",3,$1,$2,$3);}
	;
	
/*Specifire*/
Specifire:TYPE {$$=newNode("Specifire",1,$1);}
	|StructSpecifire {$$=newNode("Specifire",1,$1);}
	;
StructSpecifire:STRUCT OptTag LC DefList RC {$$=newNode("StructSpecifire",5,$1,$2,$3,$4,$5);}
	|STRUCT Tag {$$=newNode("StructSpecifire",2,$1,$2);}
	;
OptTag:ID {$$=newNode("OptTag",1,$1);}
	|{$$=newNode("OptTag",0,-1);}
	;
Tag:ID {$$=newNode("Tag",1,$1);}
	;
	
/*Declarators*/
VarDec:ID {$$=newNode("VarDec",1,$1);}
	| VarDec LB INT RB {$$=newNode("VarDec",4,$1,$2,$3,$4);}
	;
FunDec:ID LP VarList RP {$$=newNode("FunDec",4,$1,$2,$3,$4);}
	|ID LP RP {$$=newNode("FunDec",3,$1,$2,$3);}
	;
VarList:ParamDec COMMA VarList {$$=newNode("VarList",3,$1,$2,$3);}
	|ParamDec {$$=newNode("VarList",1,$1);}
	;
ParamDec:Specifire VarDec {$$=newNode("ParamDec",2,$1,$2);}
    ;

/*Statement*/
Compst:LC DefList StmtList RC {$$=newNode("Compst",4,$1,$2,$3,$4);}
	;
StmtList:Stmt StmtList{$$=newNode("StmtList",2,$1,$2);}
	| {$$=newNode("StmtList",0,-1);}
	;
Stmt:Exp SEMI {$$=newNode("Stmt",2,$1,$2);}
	|Compst {$$=newNode("Stmt",1,$1);}
	|RETURN Exp SEMI {$$=newNode("Stmt",3,$1,$2,$3);}
	|IF LP Exp RP Stmt {$$=newNode("Stmt",5,$1,$2,$3,$4,$5);}
	|IF LP Exp RP Stmt ELSE Stmt {$$=newNode("Stmt",7,$1,$2,$3,$4,$5,$6,$7);}
	|WHILE LP Exp RP Stmt {$$=newNode("Stmt",5,$1,$2,$3,$4,$5);}
	;
/*Local Definitions*/
DefList:Def DefList{$$=newNode("DefList",2,$1,$2);}
	| {$$=newNode("DefList",0,-1);}
	;
Def:Specifire DecList SEMI {$$=newNode("Def",3,$1,$2,$3);}
	;
DecList:Dec {$$=newNode("DecList",1,$1);}
	|Dec COMMA DecList {$$=newNode("DecList",3,$1,$2,$3);}
	;
Dec:VarDec {$$=newNode("Dec",1,$1);}
	|VarDec ASSIGNOP Exp {$$=newNode("Dec",3,$1,$2,$3);}
	;
/*Expressions*/
Exp:Exp ASSIGNOP Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp AND Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp OR Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp RELOP Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp PLUS Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp MINUS Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp STAR Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp DIV Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |LP Exp RP{$$=newNode("Exp",3,$1,$2,$3);}
        |MINUS Exp {$$=newNode("Exp",2,$1,$2);}
        |NOT Exp {$$=newNode("Exp",2,$1,$2);}
        |ID LP Args RP {$$=newNode("Exp",4,$1,$2,$3,$4);}
        |ID LP RP {$$=newNode("Exp",3,$1,$2,$3);}
        |Exp LB Exp RB {$$=newNode("Exp",4,$1,$2,$3,$4);}
        |Exp DOT ID {$$=newNode("Exp",3,$1,$2,$3);}
        |ID {$$=newNode("Exp",1,$1);}
        |INT {$$=newNode("Exp",1,$1);}
		|INT8 {$$=newNode("Exp",1,$1);}
		|INT16 {$$=newNode("Exp",1,$1);}
        |FLOAT{$$=newNode("Exp",1,$1);}
        ;
Args:Exp COMMA Args {$$=newNode("Args",3,$1,$2,$3);}
        |Exp {$$=newNode("Args",1,$1);}
        ;
%%