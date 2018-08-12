//
// Created by wei on 2018/5/17.
//
//
// Created by wei on 2018/5/17.
//

#include <cstdlib>
#include <cstdio>
#include<cstdarg>
#include "Main.h"

TreeNode* newNode(const char* name,int argc,...){
    // cout<<"DEBUG(name):"<<name<<endl;
    // cout<<"DEBUG(yytext):"<<yytext<<endl;
    TreeNode *newNode=new TreeNode;
    newNode->name=new string(name);
    va_list list;
    va_start(list,argc);
    string pname=*(newNode->name);
    if(pname=="Fun"||pname=="Class"||pname=="DeclareStm")
        newNode->attr=new map<string,string>();
    if(argc>0){ //非终结符
        for (int i = 0; i < argc; ++i) {
            newNode->childs.push_back(va_arg(list,TreeNode*));
        }
        newNode->line=newNode->childs.at(0)->line;
    } else if (argc==0){
        newNode->line=va_arg(list, int);
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
        else if(pname=="AUTO"||pname=="bool"||pname=="String"||pname=="NULL"||pname=="ID"||pname=="TYPE"||pname=="ASSIGNOP"||pname=="OP"||pname=="RELOP")
            newNode->string_value=new string(yytext);
        else if(pname=="float")
            newNode->float_value=strtof(yytext,NULL);
			

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
    if(pname=="int")
        cout<<":"<<node->int_value;
    else if(pname=="bool"||pname=="String"||pname=="NULL"||pname=="ID"||pname=="TYPE"||pname=="ASSIGNOP"
            ||pname=="VarType"||pname=="Call"||pname=="Ref"||pname=="OP"||pname=="RELOP"||pname=="AUTO")
        cout<<":"<<*(node->string_value);
    else if(pname=="float")
        cout<<":"<<node->float_value;
    else if(pname=="Class"){
        cout<<":"<<(*node->attr)["id"]<<"  "<<(*node->attr)["ext"];
    }
    else if(pname=="Fun"){
        cout<<":"<<(*node->attr)["type"]<<"  "<<(*node->attr)["id"]<<"  "<<(*node->attr)["static"];
    }
    else if(pname=="DeclareStm"){
        cout<<":"<<(*node->attr)["type"]<<"  "<<(*node->attr)["static"]<<"  "<<(*node->attr)["final"];
    }
    cout<<endl;
    for(int i=0;i<node->childs.size();i++){
        TravelTree(node->childs.at(i),level+1);
    }
}
void adjustNodes(TreeNode* root,int index){
    if(root->childs.size()<=index)
        return;
    TreeNode* p=root->childs.at(index);
    while(p->temp!=NULL){
        root->childs.push_back(p->temp);
        p=p->temp;
    }
}



void error(bool e,int line, const string& msg){
    if(e)
        return;
    cout<<"at line "<<line<<":"<<msg<<endl;
    // exit(-1);
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