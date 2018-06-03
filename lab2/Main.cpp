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
SymbolTable *thisClass,*thisFun; 
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
            ||pname=="VarType"||pname=="Call"||pname=="Ref"||pname=="Lvalue"||pname=="OP"||pname=="RELOP"||pname=="AUTO")
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
	createSymbolTable(node,symbolRoot,0);
    cout<<"parser End_______________________"<<endl;
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
		if(!symbol->getExtClass().empty()&&symbolRoot->get(symbol->getExtClass())!=NULL){
			table->parent=symbolRoot->get(symbol->getExtClass());
		}
        
        ScannerClassAttr(table,p);
    }

    // for (int i=0;i<symbolRoot->size();i++) {
        // Class *symbol= dynamic_cast<Class *>(symbolRoot->get(i)->symbol);
        // if(symbol==NULL){
            // cout<<"Cast Error!"<<endl;
            // exit(-1);
        // }
        // string msg;
        // msg=msg.append(symbol->getExtClass()).append(" ").append("not Exit");
        // error(symbol->getExtClass().empty()||symbolRoot->get(symbol->getExtClass())!=NULL,symbol->getLine(),msg);
    // }

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
        }
		// else{
            // vector<string> declareList;
            // Rule rules;
            // getDeclareList(p,declareList,rules);
            // for (int j = 0; j < declareList.size(); ++j) {
                // Variable *symbol=new Variable(declareList.at(j));
                // symbol->setLine(p->line);
                // symbol->setStatic(!(*p->attr)["static"].empty());
                // symbol->setFinal(!(*p->attr)["final"].empty());
                // symbol->setVarType((*p->attr)["type"]);
                // new SymbolTable(symbol,root);
            // }
        // }
    }
}

Symbol* findSymbol(SymbolTable* table,const string& target){
	if(table==NULL){
		return NULL;
	}
    Symbol* result=table->getSymbol(target);
	if(result!=NULL){
		return result;
	}
	return findSymbol(table->parent,target);
}

void ReduceFunction(Symbol* globalSymbol,Symbol* symbol,SymbolTable* tree){
	Fun *fSymbol=(Fun*)globalSymbol;
	SymbolTable* targetTree=tree->get(0);
	if(targetTree->size()==fSymbol->size()){
		bool isSame=true;
		for(int i=0;i<fSymbol->size();i++){
			if(fSymbol->get(i)!=targetTree->getSymbol(i)->getRealType()){
				// cout<<"CONST TYPE:"<<fSymbol->get(i)<<"  $$$"<<targetTree->getSymbol(i)->getId()<<endl;
				isSame=false;
				break;
			}
		}
		if(!isSame){
			error(false,symbol->getLine(),"args type isn't same");
		}
	}
	else{
		error(targetTree->size()>fSymbol->size(),symbol->getLine(),"too few arg");
		error(targetTree->size()<fSymbol->size(),symbol->getLine(),"too many arg");
	}
	tree->symbol->setType(CONST);
	tree->symbol->setId(fSymbol->getRealType());
}


void Reduce(SymbolTable* table,SymbolTable* tree){
	Symbol* symbol=tree->symbol;
	Type type=symbol->getType();
	if(type==REF&&tree->getSymbol(0)->getType()==VAR){
		Symbol* varSymbol=tree->getSymbol(0);
		Symbol* globalSymbol=findSymbol(thisClass,varSymbol->getId());
		if(globalSymbol==NULL||globalSymbol->getType()!=VAR){
			error(false,symbol->getLine(),string("var ").append(varSymbol->getId()).append(" isn't exit"));
			tree->symbol->setRealType(ANY);
		}else{
            tree->symbol=globalSymbol;
			// tree->symbol->setRealType(CONST);
			// tree->symbol->setId(globalSymbol->getRealType());
		}
		return;
	}

	
	for(int i=0;i<tree->size();i++){
		Reduce(table,tree->get(i));
	}

    /*  */
    if(symbol->getId()=="AUTO"){
        Symbol* firstSymbol=tree->getSymbol(0);
        if(firstSymbol->getType()!=VAR&&firstSymbol->getRealType()!="int"){
            error(false,symbol->getLine(),"auto op only supprot var int");
        }else{
            tree->symbol=firstSymbol;
        }
        
        return;
    }

	if(type==VAR){
		Symbol* targetSymbol=findSymbol(table,symbol->getId());
		if(targetSymbol==NULL||targetSymbol->getType()!=VAR){
			symbol->setRealType(ANY);
			((Variable*)symbol)->setVarType("ANY");
			error(false,symbol->getLine(),string("var ").append(symbol->getId())+" not exit");
		}else{
			// ((Variable*)symbol)->setVarType(((Variable*)targetSymbol)->getVarType());
            tree->symbol=targetSymbol;
		}
	}
	
	else if(type==OP){
		// cout<<"OP:"<<tree->symbol->getId()<<endl;
		string t1=tree->getSymbol(0)->getRealType();
		string t2=tree->getSymbol(1)->getRealType();
		// cout<<"Real Type:"<<t1<<"\t"<<t2<<endl;
		if(t1=="ANY"||t2=="ANY"){
			tree->symbol->setRealType(ANY);
		} 
		else if(symbol->getId()=="="){
			if(t1==t2){
                // if()
                // tree->symbol=(tree->getSymbol(0)->getType()==VAR||tree->getSymbol(1)->getType()==VAR)?
				tree->symbol->setRealType(CONST);
				tree->symbol->setId(t1);
			}else{
				error(false,symbol->getLine(),string("Lvalue' type is ").append(t1).append(",but Rvalue's type is ").append(t2));
				tree->symbol->setRealType(ANY);
			}
		}
		else if(((t1!=t2)||(t1!="int"&&t1!="float")||(t2!="int"&&t2!="float"))){
			tree->symbol->setRealType(ANY);
			error(false,tree->symbol->getLine(),string("OP only supprot same" 
				" type and type is int,flaot;the symbol ").append(tree->getSymbol(0)->getId()).
				append(" and ").append(tree->getSymbol(1)->getId()).append(" is not same")
			);
		}
		else{
			tree->symbol->setRealType(CONST);
			tree->symbol->setId(t1);
		}
	}
	else if(type==REF){
		bool isThis=symbol->getId()=="THIS";
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@type:"<<symbol->getId()<<endl;
		Symbol* targetSymbol=isThis?thisClass->symbol:findSymbol(table,symbol->getId());
		if(targetSymbol==NULL){
			symbol->setRealType(ANY);
			error(false,symbol->getLine(),string("var ").append(symbol->getId())+" not exit");
		}else{
			Symbol* refSymbol=tree->getSymbol(0);
			Symbol* globalSymbol;
			if(!isThis){
				Variable* varSymbol=(Variable*)targetSymbol;
				string classId=varSymbol->getVarType();
				globalSymbol=findSymbol(symbolRoot->get(classId),refSymbol->getId());
			}else{
				
				globalSymbol=findSymbol(thisClass,refSymbol->getId());
			}
			
			if(globalSymbol==NULL){
				error(false,symbol->getLine(),string("var ").append(symbol->getId())
					.append(" don't have member ").append(refSymbol->getId()));
			}else if(globalSymbol->getType()!=refSymbol->getType()){
				error(false,symbol->getLine(),string(refSymbol->getId()).append(" is ").append(refSymbol->getRealType()).
					append(" not ").append(globalSymbol->getRealType()));
			}else if(refSymbol->getType()==FUN){ 
				ReduceFunction(globalSymbol,symbol,tree);
			}else{
				Variable* varSymbol=(Variable*)globalSymbol;
                tree->symbol=varSymbol;
				// tree->symbol->setType(CONST);
				// tree->symbol->setId(varSymbol->getRealType());
			}
		}
		
	}
	else if(type==CONST){
		
	}
}

SymbolTable *symbolReduce(SymbolTable* table,SymbolTable* tree){
	cout<<"$$$$$$$$$$$$$$$$$$$$$"<<endl;
	TravelSymbols(tree,0);
	cout<<"$$$$$$$$$$$$$$$$$$$$$"<<endl;
	for(int i=0;i<tree->size();i++){
		Reduce(table,tree->get(i));
	}	

}

void createSymbolTable(TreeNode *node,SymbolTable *table,int index){
    if(index>=node->size()){
        return;
    }
    TreeNode* p=node->getChild(index);
    string name=*p->name;
    if(name=="DeclareStm"){
        vector<string> declareList;
        Rule rules;
        SymbolTable* varTree=getDeclareList(p,declareList,rules);
		for (int j = 0; j < declareList.size(); ++j) {
                Variable *symbol=new Variable(declareList.at(j));
                symbol->setLine(p->line);
                symbol->setStatic(!(*p->attr)["static"].empty());
                symbol->setFinal(!(*p->attr)["final"].empty());
                symbol->setVarType((*p->attr)["type"]);
                new SymbolTable(symbol,table);
        }
		symbolReduce(table,varTree);
    }
	else if(name=="Fun"){
		SymbolTable *t=table->get((*p->attr)["id"]);
		TreeNode* args=p->getChild(0);
		for(int i=0;i<args->size();i++){
			Variable *symbol=new Variable(*args->getChild(i)->getChild(1)->string_value);
            symbol->setLine(p->line);
            symbol->setVarType(*args->getChild(i)->getChild(0)->string_value);
            new SymbolTable(symbol,t);
		}
		createSymbolTable(p->getChild(1),t,0);
	}else if(name=="Class"){
		SymbolTable *t=table->get((*p->attr)["id"]);
		thisClass=t;
		createSymbolTable(p,t,0);
	}else if(name=="VarStm"||name=="BoolExp"){
		vector<string> declareList;
        Rule rules;
        SymbolTable* varTree=getDeclareList(p,declareList,rules);
		symbolReduce(table,varTree);
	}else if(name=="IfStm"||name=="ELIfStm"||name=="ElseStm"||name=="WhileStm"){
		Symbol* symbol=new Segment(to_string(table->size()).append("SEG"));
		SymbolTable* T=new SymbolTable(symbol,table);
		createSymbolTable(p,T,0);
	}
	else{
		createSymbolTable(p,table,0);
	}
	createSymbolTable(node,table,index+1);
}

SymbolTable* getDeclareList(TreeNode* node,vector<string> &list,map<string,bool>& rules){
    SymbolTable* tree=parseVarStm(node,list);
	for(int i=0;i<tree->size();i++){
		if(tree->getSymbol(i)->getType()==VAR){
			list.push_back(tree->getSymbol(i)->getId());
		}
	}
    return tree;
}

SymbolTable *parseVarStm(TreeNode *node,vector<string>& list){
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
		Const *symbol=new Const();
        treeNode->symbol=symbol;
		
        symbol->setLine(node->line);
		TreeNode* q=node->getChild(0);
		// cout<<"Constant*****************"<<*q->name<<endl;
		symbol->setVarType(*q->name);

		if(*q->name=="float")
			symbol->setId(to_string(q->float_value));
		else if(*q->name=="int")
			symbol->setId(to_string(q->int_value));
		else symbol->setId(*q->string_value);
        return treeNode;
    }
    for (int i = 0; i < node->size(); ++i) {
        SymbolTable *p=parseVarStm(node->getChild(i),list);
        if(p!=NULL){
            if(p->getId()=="Exp"){
                for (int j=0;j<p->size();j++) {
                    treeNode->add(p->getKey(j),p->get(j));
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
		cout<<"*************************type:"<<*node->string_value<<endl;
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
		list.push_back(*node->string_value);
        treeNode->symbol->setLine(node->line);
        return treeNode;
    }
	else if(name=="AUTO"){
		treeNode->symbol=new Symbol;
		treeNode->symbol->setType(OP);
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId(*node->name);
		return treeNode;
	}
	else if(name=="OP"||name=="RELOP"||name=="ASSIGNOP"){
		treeNode->symbol=new Symbol;
		treeNode->symbol->setType(OP);
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId(*node->string_value);
		return treeNode;
	}
    else{
        treeNode->symbol=new Symbol;
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId("Exp");
    }
    return treeNode;
}


void TravelSymbols(SymbolTable* table,int level){
	if(table==NULL){
		return;
	}
    for (int i = 0; i < level; ++i) {
        cout<<"-";
    }
    if(table->symbol!=NULL)
        cout<<table->symbol->getId()<<":"<<table->symbol->getRealType()<<endl;
    for ( int i=0;i<table->size();i++) {
        TravelSymbols(table->get(i),level+2);
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