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

%token  <node> STATIC ARRAY FINAL BREAK TYPE STRUCT EXTENDS CLASS RETURN IF ELSE ELIF FOR WHILE ID SPACE SEMI COMMA ASSIGNOP RELOP PLUS MINUS STAR DIV AND OR DOT NOT LP RP LB RB LC RC AERROR DPLUS DMINUS
%token  <node> INT FLOAT NULLPTR STR BOOL 
%token  <node> EOL NEW THIS
%type   <node> Program EMPTY ClassDefs Class Exp Arg Args ClassStm Fun BaseStm Lines Line IfStm ELIfStm ElseStm ForStm WhileStm BreakStm VarStm DeclareStm  Call CallArgs CallArg Constant ReturnStm VarType ClassStms Arrays Lvalue


%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT DMINUS DPLUS
%left LP RP LB RB DOT

%%

Program:ClassDefs{
	$$=newNode("Program",1,$1);
	adjustNodes($$,0);
	printf("打印syntax tree:\n");  
	TravelTree($$,0) ;
	printf("syntax tree打印完毕!\n\n");
	};
	
ClassDefs: Class{$$=newNode("ClassDefs",1,$1);}
	|  Class ClassDefs{$$=newNode("ClassDefs",1,$1);$$->temp=$2;}
	;
	
	
Class:CLASS ID LC ClassStms RC{$$=newNode("Class",1,$4);adjustNodes($$,0);$$->string_value=new string(*$2->string_value);}
	| CLASS ID EXTENDS ID  LC ClassStms RC{
		$$=newNode("Class",1,$6);
		adjustNodes($$,0);
		$$->string_value=new string(*$2->string_value);
		*($$->string_value)+="#";
		*($$->string_value)+=*$4->string_value;
		}
	;

ClassStms:ClassStm ClassStms{$$=$1;$$->temp=$2;}
	|ClassStm{$$=$1;};
	;

ClassStm:Fun{$$=newNode("ClassStm",1,$1);}
	| DeclareStm{$$=newNode("ClassStm",1,$1);};
	
Fun:VarType ID LP Args RP LC BaseStm RC {$$=newNode("Fun",4,$1,$2,$4,$7);}
	|STATIC VarType ID LP Args RP LC BaseStm RC {$$=newNode("Fun",4,$2,$3,$5,$8);$$->string_value=new string("STATIC");}
	|ID LP Args RP LC BaseStm RC {$$=newNode("ConstructFun",3,$1,$3,$6);}
    |EMPTY{$$=newNode("Fun",0,-1);};
	
VarType:TYPE Arrays{ $$=newNode("VarType",2,$1,$2);adjustNodes($$,1);$$->string_value=new string(*$1->string_value);}
	| ID Arrays{$$=newNode("VarType",2,$1,$2);adjustNodes($$,1);$$->string_value=new string(*$1->string_value);};
	| TYPE{ $$=newNode("VarType",1,$1);$$->string_value=new string(*$1->string_value);}
	| ID{ $$=newNode("VarType",1,$1);$$->string_value=new string(*$1->string_value);}
	
Arrays:ARRAY{$$=newNode("Arrays",1,$1);}
	|ARRAY Arrays{$$=newNode("Arrays",1,$1);$$->temp=$2;};
	
	
BaseStm:Lines{$$=newNode("BaseStm",1,$1);adjustNodes($$,0);}

Lines: Line{ $$=newNode("Lines",1,$1);}
	| Line Lines {$$=newNode("Lines",1,$1);$$->temp=$2;}
	;


Line:EMPTY{$$=newNode("Line",0,-1);}
	| IfStm {$$=newNode("Line",1,$1);}
	| WhileStm{$$=newNode("Line",1,$1);}
	| VarStm SEMI{$$=newNode("Line",1,$1);
		VarTree *tree=parseVarStm($$);
		cout<<"*************************"<<endl;
        TravelVarStm(tree,0);
		cout<<"*************************"<<endl;
		}
	| DeclareStm{$$=newNode("Line",1,$1);}
	| ReturnStm{$$=newNode("Line",1,$1);}
	| BreakStm{$$=newNode("Line",1,$1);}
	| ForStm{$$=newNode("Line",1,$1);}
;


BreakStm:BREAK SEMI{
	$$=newNode("BreakStm",1,$1);
};

IfStm:IF LP Exp RP LC BaseStm RC{$$=newNode("IfStm",3,$1,$3,$6);}
	| IfStm ELIfStm ElseStm {$$=newNode("IfStm",3,$1,$2,$3);};

ELIfStm:ELIF LP Exp RP LC BaseStm RC{$$=newNode("ELIfStm",3,$1,$3,$6);}
	|EMPTY{$$=newNode("ELIfStm",0,-1);};
	
ElseStm:ELSE LC BaseStm RC{$$=newNode("ElseStm",2,$1,$3);}
|EMPTY{$$=newNode("ElseStm",0,-1);};

WhileStm:WHILE LP Exp RP LC BaseStm RC{$$=newNode("WhileStm",3,$1,$3,$6);};

ForStm:FOR LP Exp SEMI Exp SEMI Exp RP LC BaseStm RC{$$=newNode("ForStm",3,$1,$3,$6);};

DeclareStm:VarType VarStm SEMI{$$=newNode("DeclareStm",1,$2);adjustNodes($$,0);$$->string_value=new string(*$1->string_value);}
	|STATIC VarType VarStm SEMI{$$=newNode("DeclareStm",1,$3);adjustNodes($$,0);$$->string_value=new string(*$2->string_value+"#STATIC");}
	|FINAL VarType VarStm SEMI{$$=newNode("DeclareStm",1,$3);adjustNodes($$,0);$$->string_value=new string(*$2->string_value+"#FINAL");}
	|STATIC FINAL VarType VarStm SEMI{$$=newNode("DeclareStm",1,$4);adjustNodes($$,0);$$->string_value=new string(*$3->string_value+"#STATIC#FINAL");}
	;

VarStm: Exp {$$=newNode("VarStm",1,$1);}
	|  Exp COMMA  VarStm{$$=newNode("VarStm",1,$1);$$->temp=$3;}
	;
	
ReturnStm:RETURN SEMI{$$=newNode("ReturnStm",1,$1);}
	| RETURN Exp SEMI{$$=newNode("ReturnStm",1,$1,$2);}
	
Args:EMPTY{$$=newNode("Args",0,-1);}
	|Arg{
		$$=newNode("Args",1,$1);
		adjustNodes($$,0);
	}
	;
	

Arg:VarType ID{$$=newNode("Arg",2,$1,$2);}
	|VarType ID COMMA Arg{
		$$=newNode("Arg",2,$1,$2);
		$$->temp=$4;
	}
;


Exp:	Constant{$$=newNode("Exp",1,$1);}
		|Call{$$=newNode("Exp",1,$1);}
		|ID DOT Call{$$=newNode("Ref",1,$3);$$->string_value=new string(*$1->string_value);}
		|ID DOT Constant{$$=newNode("Ref",1,$3);$$->string_value=new string(*$1->string_value);}
		|THIS DOT Constant{$$=newNode("Ref",1,$3);$$->string_value=new string(*$1->string_value);}
		|THIS DOT Call{$$=newNode("Ref",1,$3);$$->string_value=new string(*$1->string_value);}
        |Exp PLUS Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp MINUS Exp{$$=newNode("Exp",3,$1,$2,$3);}
		|Lvalue ASSIGNOP Exp{$$=newNode("Exp",3,$1,$2,$3);}

        |Exp AND Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp OR Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp RELOP Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp STAR Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |Exp DIV Exp{$$=newNode("Exp",3,$1,$2,$3);}
        |LP Exp RP{$$=newNode("Exp",1,$2);}
        |MINUS Exp {$$=newNode("Exp",2,$1,$2);}
        |NOT Exp {$$=newNode("Exp",2,$1,$2);}
        |Exp LB Exp RB {$$=newNode("Exp",4,$1,$2,$3,$4);}
		|DPLUS ID{$$=newNode("Exp",2,$1,$2);}
		|ID DPLUS{$$=newNode("Exp",2,$1,$2);}
		|DMINUS ID{$$=newNode("Exp",2,$1,$2);}
		|ID DMINUS{$$=newNode("Exp",2,$1,$2);}
		|NEW Call{$$=newNode("Exp",2,$1,$2);}
		|NEW TYPE LB Exp RB{$$=newNode("Exp",5,$1,$2,$3,$4,$5);}
        ;
	
Lvalue:ID{$$=newNode("Lvalue",1,$1);}
		| Exp LB Exp RB{$$=newNode("Lvalue",4,$1,$2,$3,$4);}
		| Exp DOT ID{$$=newNode("Lvalue",3,$1,$2,$3);};
		
Constant:ID {$$=$1;}
        |INT {$$=newNode("Constant",1,$1);}
        |FLOAT{$$=newNode("Constant",1,$1);}
		|BOOL{$$=newNode("Constant",1,$1);};
		

Call:ID LP CallArgs RP{$$=newNode("Call",1,$3);$$->string_value=new string(*$1->string_value);}
	|Call DOT ID {$$=newNode("Call",3,$1,$2,$3);}
	|Call DOT ID LP CallArgs RP {$$=newNode("Call",4,$1,$2,$3,$5);}
	;

CallArgs:EMPTY{$$=newNode("CallArgs",0,-1);}
	| CallArg{$$=newNode("CallArgs",1,$1);adjustNodes($$,0);};
	
CallArg:Exp {$$=newNode("CallArg",1,$1);}
	| Exp COMMA CallArg{$$=newNode("CallArg",1,$1);$$->temp=$3;};
	
EMPTY:{$$=NULL;};
	
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