//
// Created by wei on 2018/5/17.
//

#include <cstdlib>
#include <cstdio>
#include<cstdarg>
#include "Main.h"
TreeNode* newNode(const char* name,int argc,...){
	cout<<"DEBUG(name):"<<name<<endl;
	cout<<"DEBUG(yytext):"<<yytext<<endl;
    TreeNode *newNode=new TreeNode;
    newNode->name=new string(name);
    va_list list;
    va_start(list,argc);
    if(argc>0){ //非终结符
		newNode->lchild=va_arg(list,TreeNode*);
		TreeNode* t=newNode->lchild;
		newNode->line=newNode->lchild->line;
        for (int i = 1; i < argc; ++i) {
            t->rchild=va_arg(list,TreeNode*);
            t=t->rchild;
        }
        
    } else if (argc==0){
        newNode->line=va_arg(list, int);
        string pname=*(newNode->name);
        if(pname=="INT")
            newNode->int_value=strtol(yytext,NULL,10);
        else if(pname=="INT8"){
            newNode->int_value=strtol(yytext,NULL,8);
			*(newNode->name)="INT";
		}
        else if(pname=="INT16"){
            newNode->int_value=strtol(yytext,NULL,16);
			*(newNode->name)="INT";
		}
        else if(pname=="BOOL"||pname=="STR"||pname=="NULL"||pname=="ID")
            newNode->string_value=new string(yytext);
        else if(pname=="FLOAT")
            newNode->float_value=strtof(yytext,NULL);
		else if(pname=="TYPE")
			newNode->string_value=new string(yytext);

    }
    return newNode;
}

void TravelTree(TreeNode* node,int level){
	if(node==NULL)
		return;
	for(int i=0; i<level; ++i)
        cout<<"  ";
	
	string pname=*(node->name);
	cout<<pname;
    if(pname=="INT"||pname=="INT8"||pname=="INT16")
        cout<<":"<<node->int_value;
    else if(pname=="BOOL"||pname=="STR"||pname=="NULL"||pname=="ID"||pname=="TYPE")
        cout<<":"<<*(node->string_value);
    else if(pname=="FLOAT")
        cout<<":"<<node->float_value;
	cout<<endl;
	TravelTree(node->lchild,level+1);
	TravelTree(node->rchild,level);
	
}


int main(int argc,char **argv){
	if (argc > 1){
        if (!(yyin = fopen(argv[1], "r")))
        {
            perror(argv[1]);
            return 1;
        }
    }
	cout<<"start\n";
    return yyparse(); //启动文法分析，调用词法分析
}