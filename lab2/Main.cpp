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
    if(argc>0){ //非终结符
		// newNode->lchild=va_arg(list,TreeNode*);
		// TreeNode* t=newNode->lchild;
		// newNode->line=newNode->lchild->line;
        for (int i = 0; i < argc; ++i) {
            newNode->childs.push_back(va_arg(list,TreeNode*));
        }
		newNode->line=newNode->childs.at(0)->line;
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
        else if(pname=="BOOL"||pname=="STR"||pname=="NULL"||pname=="ID"||pname=="TYPE"||pname=="ASSIGNOP")
            newNode->string_value=new string(yytext);
        else if(pname=="FLOAT")
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
else if(pname=="BOOL"||pname=="String"||pname=="NULL"||pname=="ID"||pname=="TYPE"||pname=="ASSIGNOP"||pname=="VarType"||pname=="Class"||pname=="DeclareStm"||pname=="Call"||pname=="Ref")
        cout<<":"<<*(node->string_value);
    else if(pname=="float")
        cout<<":"<<node->float_value;
	cout<<endl;
	for(int i=0;i<node->childs.size();i++){
		TravelTree(node->childs.at(i),level+1);
	}
	// TravelTree(node->lchild,level+1);
	// TravelTree(node->rchild,level);
	
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



void createSymbolTable(TreeNode *node,SymbolTable *table,unsigned int index){
    if(node==NULL||index<=node->childs.size()){
        return;
    }
    TreeNode *p=node->getChild(index);
    string name=*p->name;
    if(name=="Class"){
        string className=*p->string_value;
        string classPName;
        int index;
        if((index=className.find('#'))>-1){
            classPName=className.substr(index+1,className.length()-index);
            className=className.substr(0,index);
        }
        Class *symbol=new Class(className,classPName);
        symbol->setLine(p->line);
        SymbolTable *newT=new SymbolTable(symbol,table);
        createSymbolTable(p,newT,0);
    } else if(name=="DeclareStm"){
        vector<string> declareList;
        getDeclareVar(p,declareList);
        for (int i = 0; i < declareList.size(); ++i) {
            Variable *symbol=new Variable(*p->string_value);
            symbol->setLine(p->line);
            symbol->setId(declareList.at(i));
            SymbolTable *newT=new SymbolTable(symbol,table);
        }
    } else if(name=="VarStm"){
        createSymbolTable(p,table,0);
    } else if(name=="ClassStm"){
        createSymbolTable(p,table,0);
    } else if(name=="Fun"){
        Fun *symbol=new Fun;
        symbol->setLine(p->line);
        symbol->setReturnType(*p->getChild(0)->string_value);
        symbol->setId(*p->getChild(1)->string_value);
        TreeNode *args=p->getChild(2);
        SymbolTable *newT=new SymbolTable(symbol,table);
        for (int i = 0; i < args->size(); ++i) {
            symbol->addArgs(*args->getChild(i)->getChild(0)->string_value);
            Variable *vsymbol=new Variable(*args->getChild(i)->getChild(0)->string_value);
            vsymbol->setId(*args->getChild(i)->getChild(1)->string_value);
            SymbolTable *newTT=new SymbolTable(vsymbol,newT);
        }
        createSymbolTable(p->getChild(3),newT,0);
    } else{
        createSymbolTable(p,table,0);
    }
    createSymbolTable(node,table,index+1);
}

void getDeclareVar(TreeNode* node,vector<string> &result){
    if(node==NULL)
        return;
    for (int i = 0; i < node->size(); ++i) {
        result.push_back(*node->getChild(i)->getChild(0)->getChild(0)->string_value);
    }
}

VarTree *parseVarStm(TreeNode *node){
    if(node==NULL)
        return NULL;
    VarTree *treeNode=new VarTree;
    string name=*node->name;
    if(name=="ID"){
        treeNode->symbol=new Variable();
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId(*node->string_value);
        return treeNode;
    }else if(name=="Constant"){
        treeNode->symbol=new Const();
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId(*node->getChild(0)->name);
        return treeNode;
    }
    for (int i = 0; i < node->size(); ++i) {
        VarTree *p=parseVarStm(node->getChild(i));
        if(p!=NULL){
			if(p->symbol->getId()=="Exp"){
                for (int j = 0; j < p->childs.size(); ++j) {
                    treeNode->childs.push_back(p->childs.at(j));
                }
            } else treeNode->childs.push_back(p);
        }
    }
    if(name=="Call"){
        Fun *symbol=new Fun;
        treeNode->symbol=symbol;
        treeNode->symbol->setLine(node->line);
        symbol->setId(*node->string_value);
        return treeNode;
    } else if(name=="Ref"){
        treeNode->symbol=new Symbol;
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setType(REF);
        treeNode->symbol->setId(*node->string_value);
        return treeNode;
    } else{
		treeNode->symbol=new Symbol;
        treeNode->symbol->setLine(node->line);
		treeNode->symbol->setId("Exp");
	}
    return treeNode->childs.size()==0?NULL:(treeNode->childs.size()==1?treeNode->childs.at(0):treeNode);
}

void TravelVarStm(VarTree *tree,int level){
    for (int i = 0; i < level; ++i) {
        cout<<"#";
    }
	if(tree->symbol!=NULL)
		cout<<tree->symbol->getId()<<endl;
    for (int j = 0; j < tree->childs.size(); ++j) {
        TravelVarStm(tree->childs.at(j),level+2);
    }
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