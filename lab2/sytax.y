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

%token  <node> STATIC ARRAY FINAL BREAK TYPE STRUCT  EXTENDS CLASS RETURN IF ELSE ELIF FOR WHILE ID SPACE SEMI COMMA ASSIGNOP RELOP  DOT NOT LP RP LB RB LC RC AERROR DPLUS DMINUS
%token  <node> INT FLOAT NULLPTR STR BOOL PLUS MINUS STAR DIV OR AND
%token  <node> EOL NEW THIS
%type   <node> Program EMPTY ClassDefs Class Exp Arg Args ClassStm Fun BaseStm Lines Line IfStm ELIfStm ElseStm ForStm WhileStm BreakStm VarStm DeclareStm  Call CallArgs CallArg Constant ReturnStm VarType ClassStms Arrays ArrayIndex Lvalue


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
	startSymbolCreate($$);
	};
	
ClassDefs: Class{$$=$1;}
	|  Class ClassDefs{$$=$1;$$->temp=$2;}
	;
	
	
Class:CLASS ID LC ClassStms RC{$$=newNode("Class",1,$4);adjustNodes($$,0);
		//$$->string_value=new string(*$2->string_value);
		(*$$->attr)["id"]=*$2->string_value;
	}
	| CLASS ID EXTENDS ID  LC ClassStms RC{
		$$=newNode("Class",1,$6);
		$$->line=$1->line;
		adjustNodes($$,0);
		
		(*$$->attr)["id"]=*$2->string_value;
		(*$$->attr)["ext"]=*$4->string_value;
		}
	;

ClassStms:ClassStm ClassStms{$$=$1;$$->temp=$2;}
	|ClassStm{$$=$1;};
	;

ClassStm:Fun{$$=$1;}
	| DeclareStm{$$=$1;};
	
Fun:VarType ID LP Args RP LC BaseStm RC {$$=newNode("Fun",2,$4,$7);$$->line=$1->line;  (*$$->attr)["id"]=*$2->string_value; (*$$->attr)["type"]=*$1->string_value;}
	|STATIC VarType ID LP Args RP LC BaseStm RC {$$=newNode("Fun",2,$5,$8);$$->line=$1->line;  (*$$->attr)["id"]=*$3->string_value; (*$$->attr)["type"]=*$2->string_value; (*$$->attr)["static"]=*$1->name;}
	|ID LP Args RP LC BaseStm RC {$$=newNode("ConstructFun",2,$3,$6);$$->line=$1->line; (*$$->attr)["id"]=*$1->string_value;}
    ; 
	
VarType:TYPE Arrays{ $$=newNode("VarType",2,$1,$2);adjustNodes($$,1);
		$$->string_value=new string(*$1->string_value);
		for(int i=1;i<$$->size();i++){
			*$$->string_value+="[";
		}
	}
	| ID Arrays{$$=newNode("VarType",2,$1,$2);adjustNodes($$,1);
		$$->string_value=new string(*$1->string_value);
		for(int i=1;i<$$->size();i++){
			*$$->string_value+="[";
		}
	}
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
		}
	| DeclareStm{$$=newNode("Line",1,$1);}
	| ReturnStm{$$=newNode("Line",1,$1);}
	| BreakStm{$$=newNode("Line",1,$1);}
	| ForStm{$$=newNode("Line",1,$1);}
;


BreakStm:BREAK SEMI{
	$$=newNode("BreakStm",1,$1);
};

IfStm:IF LP Exp RP LC BaseStm RC{$$=newNode("IfStm",2,$3,$6);}
	| IfStm ELIfStm ElseStm {$$=newNode("IfStm",3,$1,$2,$3);};

ELIfStm:ELIF LP Exp RP LC BaseStm RC{$$=newNode("ELIfStm",2,$3,$6);}
	|EMPTY{$$=newNode("ELIfStm",0,yylineno);};
	
ElseStm:ELSE LC BaseStm RC{$$=newNode("ElseStm",1,$3);}
|EMPTY{$$=newNode("ElseStm",0,yylineno);};

WhileStm:WHILE LP Exp RP LC BaseStm RC{$$=newNode("WhileStm",3,$1,$3,$6);};

ForStm:FOR LP Exp SEMI Exp SEMI Exp RP LC BaseStm RC{$$=newNode("ForStm",3,$1,$3,$6);};

DeclareStm:VarType VarStm SEMI{$$=newNode("DeclareStm",1,$2);adjustNodes($$,0);
	(*$$->attr)["type"]=*$1->string_value;
	}
	|STATIC VarType VarStm SEMI{$$=newNode("DeclareStm",1,$3);adjustNodes($$,0);(*$$->attr)["type"]=*$2->string_value;(*$$->attr)["static"]=*$1->name;}
	|FINAL VarType VarStm SEMI{$$=newNode("DeclareStm",1,$3);adjustNodes($$,0);(*$$->attr)["type"]=*$2->string_value;(*$$->attr)["final"]=*$1->name;}
	|STATIC FINAL VarType VarStm SEMI{$$=newNode("DeclareStm",1,$4);adjustNodes($$,0);(*$$->attr)["type"]=*$3->string_value;(*$$->attr)["static"]=*$1->name;(*$$->attr)["final"]=*$2->name;}
	;

VarStm: Exp {$$=newNode("VarStm",1,$1);}
	|  Exp COMMA  VarStm{$$=newNode("VarStm",1,$1);$$->temp=$3;}
	;
	
ReturnStm:RETURN SEMI{$$=newNode("ReturnStm",1,$1);}
	| RETURN Exp SEMI{$$=newNode("ReturnStm",2,$1,$2);}
	
Args:EMPTY{$$=newNode("Args",0,yylineno);}
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
		|Call{$$=newNode("Ref",1,$1);$$->string_value=new string("THIS");}
		|ID DOT Call{$$=newNode("Ref",1,$3);$$->string_value=new string(*$1->string_value);}
		|ID DOT Constant{$$=newNode("Ref",1,$3);$$->string_value=new string(*$1->string_value);}
		|ID{$$=$1;}
		|THIS DOT ID{$$=newNode("Ref",1,$3);$$->string_value=new string(*$1->string_value);}
		|THIS DOT Call{$$=newNode("Ref",1,$3);$$->string_value=new string(*$1->string_value);}
        
		|Lvalue ASSIGNOP Exp{$$=$1;$$->add($2);$$->add($3);  }
		|Exp PLUS Exp{$$=$2;$$->add($1);$$->add($3);}
        |Exp MINUS Exp{$$=$2;$$->add($1);$$->add($3);}
		
        |Exp AND Exp{$$=$2;$$->add($1);$$->add($3);}
        |Exp OR Exp{$$=$2;$$->add($1);$$->add($3);}
		|Exp STAR Exp{$$=$2;$$->add($1);$$->add($3);}
        |Exp DIV Exp{$$=$2;$$->add($1);$$->add($3);}
        |Exp RELOP Exp{$$=$2;$$->add($1);$$->add($3);}
        |LP Exp RP{$$=newNode("Exp",1,$2);}
        |MINUS Exp {$$=newNode("Exp",2,$1,$2);}
        |NOT Exp {$$=newNode("Exp",2,$1,$2);}
        |ID ArrayIndex {$$=newNode("Exp",2,$1,$2);adjustNodes($$,1);}
		|DPLUS ID{$$=newNode("Exp",2,$1,$2);}
		|ID DPLUS{$$=newNode("Exp",2,$1,$2);}
		|DMINUS ID{$$=newNode("Exp",2,$1,$2);}
		|ID DMINUS{$$=newNode("Exp",2,$1,$2);}
		|NEW Call{$$=newNode("Exp",2,$1,$2);}
		|NEW TYPE ArrayIndex{$$=newNode("Exp",3,$1,$2,$3);adjustNodes($$,2);}
        ;
		
ArrayIndex:LB Exp RB{$$=newNode("ArrayIndex",1,$2);}
		|LB Exp RB ArrayIndex {$$=newNode("ArrayIndex",1,$2);$$->temp=$4;}
	;
	
Lvalue:ID{$$=$1;*$$->name="Lvalue";};
		
Constant:INT {$$=newNode("Constant",1,$1);}
        |FLOAT{$$=newNode("Constant",1,$1);}
		|BOOL{$$=newNode("Constant",1,$1);}
		|STR{$$=newNode("Constant",1,$1);}
		;
		

Call:ID LP CallArgs RP{$$=newNode("Call",1,$3);$$->string_value=new string(*$1->string_value);}
	;

CallArgs:EMPTY{$$=newNode("CallArgs",0,yylineno);}
	| CallArg{$$=newNode("CallArgs",1,$1);adjustNodes($$,0);};
	
CallArg:Exp {$$=newNode("CallArg",1,$1);}
	| Exp COMMA CallArg{$$=newNode("CallArg",1,$1);$$->temp=$3;};
	
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