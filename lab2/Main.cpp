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
SymbolTable *symbolRoot;
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
        else if(pname=="BOOL"||pname=="STR"||pname=="NULL"||pname=="ID"||pname=="TYPE"||pname=="ASSIGNOP")
            newNode->string_value=new string(yytext);
        else if(pname=="FLOAT")
            newNode->float_value=strtof(yytext,NULL);

    }
	if(pname=="Fun"){
		cout<<"Fun line at "<<newNode->line<<endl;
		cout<<"argc " <<argc<<endl;
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
    else if(pname=="BOOL"||pname=="String"||pname=="NULL"||pname=="ID"||pname=="TYPE"||pname=="ASSIGNOP"
            ||pname=="VarType"||pname=="Call"||pname=="Ref"||pname=="Lvalue")
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

void startSymbolCreate(TreeNode *node){
	cout<<"******************startSymbolCreate********************"<<endl;
    ScannerClass(node);
    TravelSymbols(symbolRoot,0);
	cout<<"******************endSymbolCreate********************"<<endl;
}

void ScannerClass(TreeNode *node){
	
    symbolRoot=new SymbolTable;
    for (int i = 0; i < node->size(); ++i) {
        TreeNode *p=node->getChild(i);
        Class *symbol=new Class((*p->attr)["id"]);
        symbol->setLine(p->line);
        symbol->setExtClass((*p->attr)["ext"]);
        SymbolTable *table=new SymbolTable(symbol,symbolRoot);
        ScannerClassAttr(table,p);
    }

    map<string,SymbolTable*>::iterator it=symbolRoot->nodes.begin();
    for (;it!=symbolRoot->nodes.end(); ++it) {
        Class *symbol= dynamic_cast<Class *>(it->second->symbol);
		if(symbol==NULL){
			cout<<"Cast Error!"<<endl;
			exit(-1);
		}
        string msg;
		msg=msg.append(symbol->getExtClass()).append(" ").append("not Exit");
        error(symbol->getExtClass().empty()||symbolRoot->nodes[symbol->getExtClass()]!=NULL,symbol->getLine(),msg);
    }
	
}

void ScannerClassAttr(SymbolTable *root,TreeNode *node){
    for (int i = 0; i < node->size(); ++i) {
        TreeNode *p=node->getChild(i);
        string name=*p->name;
        if(name=="Fun"){
            Fun *symbol=new Fun((*p->attr)["id"]);
            symbol->setVarType((*p->attr)["type"]);
            symbol->setStatic(!(*p->attr)["static"].empty());
            symbol->setLine(p->line);
            TreeNode *args=p->getChild(0);
            for (int j = 0; j < args->size(); ++j) {
                symbol->addArgs(*args->getChild(j)->getChild(0)->string_value);
            }
            new SymbolTable(symbol,root);
        } else{
            vector<string> declareList;
            getDeclareList(p,declareList);
            for (int j = 0; j < declareList.size(); ++j) {
                Variable *symbol=new Variable(declareList.at(j));
                symbol->setLine(p->line);
                symbol->setStatic(!(*p->attr)["static"].empty());
                symbol->setFinal(!(*p->attr)["final"].empty());
                symbol->setVarType((*p->attr)["type"]);
                new SymbolTable(symbol,root);
            }
        }
    }
}


void createSymbolTable(TreeNode *node,SymbolTable *table,unsigned int index){
    if(node==NULL||index<=node->childs.size()){
        return;
    }
    TreeNode *p=node->getChild(index);
    string name=*p->name;

}

void getDeclareList(TreeNode* node,vector<string> &list){
	SymbolTable* tree=parseVarStm(node);
	if(tree->getId()!="Exp"){
		list.push_back(tree->getId());
	}else{
		for(map<string,SymbolTable*>::iterator it=tree->begin();it!=tree->end();it++){
			list.push_back(it->second->getId());
		}
	}
}

SymbolTable *parseVarStm(TreeNode *node){
    if(node==NULL)
        return NULL;
	// cout<<"Id:"<<*node->name<<"  line:"<<node->line<<endl;
    SymbolTable *treeNode=new SymbolTable;
    string name=*node->name;
    if(name=="ID"){
        treeNode->symbol=new Variable(*node->string_value);
        treeNode->symbol->setLine(node->line);
        return treeNode;
    }else if(name=="Constant"){
        treeNode->symbol=new Const();
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId(*node->getChild(0)->name);
        return treeNode;
    }
    for (int i = 0; i < node->size(); ++i) {
        SymbolTable *p=parseVarStm(node->getChild(i));
        if(p!=NULL){
            if(p->getId()=="Exp"){
                for (map<string,SymbolTable*>::iterator it=p->nodes.begin(); it!=p->nodes.end(); ++it) {
                    treeNode->add(it->first,it->second);
                }
                delete p;
            } else treeNode->add(p->getId(),p);
        }
    }
    if(name=="Call"){
        Fun *symbol=new Fun(*node->string_value);
        treeNode->symbol=symbol;
        treeNode->symbol->setLine(node->line);
        return treeNode;
    } else if(name=="Ref"){
        treeNode->symbol=new Symbol;
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setType(REF);
        treeNode->symbol->setId(*node->string_value);
        return treeNode;
    }else if (name=="ArrayIndex"){
        treeNode->symbol=new Symbol;
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId("[]");
        return treeNode;
    }else if(name=="Lvalue"){
		treeNode->symbol=new Variable(*node->string_value);
        treeNode->symbol->setLine(node->line);
        return treeNode;
	}
	else{
        treeNode->symbol=new Symbol;
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId("Exp");
    }
    return treeNode->nodes.size()==0?NULL:(treeNode->nodes.size()==1?treeNode->getFirst():treeNode);
}

void TravelVarStm(SymbolTable *tree,int level){
    for (int i = 0; i < level; ++i) {
        cout<<"-";
    }
    // if(tree->symbol!=NULL)
    cout<<tree->symbol->getId()<<endl;
    for (map<string,SymbolTable*>::iterator it=tree->nodes.begin();it!=tree->nodes.end();++it) {
        TravelVarStm(it->second,level+2);
    }
}

void TravelSymbols(SymbolTable* table,int level){
    for (int i = 0; i < level; ++i) {
        cout<<"-";
    }
     if(table->symbol!=NULL)
		cout<<table->symbol->getId()<<":"<<table->symbol->toString()<<endl;
    for ( map<string,SymbolTable*>::iterator it=table->nodes.begin();it!=table->nodes.end();++it) {
        TravelSymbols(it->second,level+2);
    }
}


void error(bool e,int line, const string& msg){
    if(e)
        return;
    cout<<"at line "<<line<<":"<<msg<<endl;
    exit(-1);
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