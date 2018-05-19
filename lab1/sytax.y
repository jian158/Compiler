%{
#include <unistd.h>
#include <stdio.h>   
#include "Main.h"
#include"lex.yy.c"
#include<stdarg.h>
void yyerror(const char* fmt, ...);
%}
%error-verbose
%locations

%union{
TreeNode *node;
}

/*declare tokens*/

%token  <node> TYPE STRUCT EXTENDS CLASS RETURN IF ELSE ELIF WHILE ID SPACE SEMI COMMA ASSIGNOP RELOP PLUS MINUS STAR DIV AND OR DOT NOT LP RP LB RB LC RC AERROR DPLUS DMINUS
%token  <node> INT FLOAT NULLPTR STR BOOL 
%token  <node> EOL NEW THIS
%type   <node> Program EMPTY ClassDefs Class Exp Arg Args ClassStm Fun Lines Line IfStm ELIfStm ElseStm WhileStm VarStm DeclareStm  Call CallArgs CallArg Constant ReturnStm VarType


%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT DMINUS DPLUS
%left LP RP LB RB DOT
%left LINECOMMENT WEAKCOMMENT
%%

Program:ClassDefs{
	$$=newNode("Program",1,$1);
	printf("打印syntax tree:\n");  
	TravelTree($$,0) ;  
	printf("syntax tree打印完毕!\n\n");
	};
	
ClassDefs: Class{$$=newNode("ClassDefs",1,$1);}
	| ClassDefs Class{$$=newNode("ClassDefs",2,$1,$2);}
	;
	
	
Class:CLASS ID LC ClassStm RC{$$=newNode("Class",5,$1,$2,$3,$4,$5);}
	| CLASS ID EXTENDS ID  LC ClassStm RC{$$=newNode("Class",7,$1,$2,$3,$4,$5,$6,$7);}
	;

ClassStm:Fun{$$=newNode("ClassStm",1,$1);}
	| DeclareStm{$$=newNode("ClassStm",1,$1);}
	| ClassStm Fun {$$=newNode("ClassStm",2,$1,$2);}
	| ClassStm DeclareStm {$$=newNode("ClassStm",2,$1,$2);}
	;

Fun:VarType ID LP Args RP LC Lines RC {$$=newNode("Fun",8,$1,$2,$3,$4,$5,$6,$7,$8);} 
    |EMPTY{$$=newNode("Args",0,-1);};
	
VarType:TYPE{ $$=newNode("VarType",1,$1);}
	| ID{$$=newNode("VarType",1,$1);};

Lines: Line{ $$=newNode("Lines",1,$1);}
	| Lines Line {$$=newNode("Lines",2,$1,$2);}
	;

Line:EMPTY{$$=newNode("Line",0,-1);}
	| IfStm {$$=newNode("Line",1,$1);}
	| WhileStm{$$=newNode("Line",1,$1);}
	| VarStm SEMI{$$=newNode("Line",2,$1,$2);}
	| DeclareStm{$$=newNode("Line",1,$1);}
	| ReturnStm{$$=newNode("Line",1,$1);}
;


IfStm:IF LP Exp RP LC Lines RC{$$=newNode("IfStm",7,$1,$2,$3,$4,$5,$6,$7);}
	| IfStm ELIfStm ElseStm {$$=newNode("IfStm",3,$1,$2,$3);};

ELIfStm:ELIF LP Exp RP LC Lines RC{$$=newNode("ELIfStm",7,$1,$2,$3,$4,$5,$6,$7);}
	|EMPTY{$$=newNode("ELIfStm",0,-1);};
	
ElseStm:ELSE LC Lines RC{$$=newNode("ElseStm",3,$1,$2,$3);}
|EMPTY{$$=newNode("ElseStm",0,-1);};

WhileStm:WHILE LP Exp RP LC Lines RC{$$=newNode("WhileStm",7,$1,$2,$3,$4,$5,$6,$7);};

DeclareStm:VarType VarStm SEMI{$$=newNode("DeclareStm",3,$1,$2,$3);}
	;

VarStm: Exp {$$=newNode("VarStm",1,$1);}
	| VarStm COMMA Exp {$$=newNode("VarStm",3,$1,$2,$3);}
	;
	
ReturnStm:RETURN SEMI{$$=newNode("ReturnStm",1,$1);}
	| RETURN Exp SEMI{$$=newNode("ReturnStm",1,$1,$2);}
	
Args:EMPTY{$$=newNode("Args",0,-1);}
	|Arg{$$=newNode("Args",1,$1);}
	;
	

Arg:VarType ID{$$=newNode("Arg",2,$1,$2);}
	|VarType ID COMMA Arg{$$=newNode("Arg",4,$1,$2,$3,$4);
	}
;


Exp:	Constant{$$=newNode("Exp",1,$1);}
		|Call{$$=newNode("Exp",1,$1);}
		|ID DOT Call{$$=newNode("Exp",3,$1,$2,$3);}
		|ID DOT Constant{$$=newNode("Exp",3,$1,$2,$3);}
		|THIS DOT Constant{$$=newNode("Exp",3,$1,$2,$3);}
		|THIS DOT Call{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp PLUS Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp MINUS Exp{$$=newNode("Exp",3,$1,$2,$3);}
		|Exp ASSIGNOP Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp AND Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp OR Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp RELOP Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp STAR Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp DIV Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |LP Exp RP{$$=newNode("Exp",3,$1,$2,$3);}
        |MINUS Exp {$$=newNode("Exp",2,$1,$2);}
        |NOT Exp {$$=newNode("Exp",2,$1,$2);}
        |Exp LB Exp RB {$$=newNode("Exp",4,$1,$2,$3,$4);}
		|DPLUS ID{$$=newNode("Exp",2,$1,$2);}
		|ID DPLUS{$$=newNode("Exp",2,$1,$2);}
		|DMINUS ID{$$=newNode("Exp",2,$1,$2);}
		|ID DMINUS{$$=newNode("Exp",2,$1,$2);}
		|NEW Call{$$=newNode("Exp",2,$1,$2);}
        ;
		
Constant:ID {$$=newNode("Exp",1,$1);}
        |INT {$$=newNode("Constant",1,$1);}
        |FLOAT{$$=newNode("Constant",1,$1);}
		|BOOL{$$=newNode("Constant",1,$1);};
		

Call:ID LP CallArgs RP{$$=newNode("Call",4,$1,$2,$3,$4);}
	|Call DOT ID {$$=newNode("Call",3,$1,$2,$3);}
	|Call DOT ID LP CallArgs RP {$$=newNode("Call",6,$1,$2,$3,$4,$5,$6);}
	;

CallArgs:EMPTY{$$=newNode("CallArgs",0,-1);}
	| CallArg{$$=newNode("CallArgs",1,$1);};
	
CallArg:Exp {$$=newNode("CallArg",1,$1);}
	| Exp COMMA CallArg{$$=newNode("CallArg",3,$1,$2,$3);};
	
EMPTY:{};
	
%%


void yyerror(const char*s,...) //变长参数错误处理函数
{
    va_list ap;
    va_start(ap,s);
    // fprintf(stderr,"%d:error:",yylineno);//错误行号
	fprintf(stderr, "Error at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr,s,ap);
    fprintf(stderr,"\n");
}