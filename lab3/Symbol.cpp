#include "Main.h"
AnySymbol *(AnySymbol::singleInstance)=new AnySymbol;
SymbolTable *symbolRoot;
SymbolTable *thisClass,*thisFun; 

unsigned int label= 0;

void startSymbolCreate(TreeNode *node){
	cout<<"******************startSymbolCreate********************"<<endl;
	
	
	
    ScannerClass(node);
	createSymbolTable(node,symbolRoot,0);
    
    TravelSymbols(symbolRoot,0);
	cout<<"******************endSymbolCreate********************"<<endl;
}

void ScannerClass(TreeNode *node){
    symbolRoot=new SymbolTable;
	new SymbolTable(new Class("int"),symbolRoot);
	new SymbolTable(new Class("float"),symbolRoot);
	new SymbolTable(new Class("bool"),symbolRoot);
	new SymbolTable(new Class("void"),symbolRoot);
	new SymbolTable(new Class("String"),symbolRoot);
	
    for (int i = 0; i < node->size(); ++i) {
        TreeNode *p=node->getChild(i);
        Class *symbol=new Class((*p->attr)["id"]);
        symbol->setLine(p->line);
        symbol->setExtClass((*p->attr)["ext"]);
		SymbolTable *table=new SymbolTable(symbol,symbolRoot);
		if(!symbol->getExtClass().empty()&&symbolRoot->get(symbol->getExtClass())!=NULL){
			table->parent=symbolRoot->get(symbol->getExtClass());
		}else if(!symbol->getExtClass().empty()){
			error(false,symbol->getLine(),string("extends class ").append(symbol->getExtClass()).append(" isn't exit"));
		}
        
        ScannerClassAttr(table,p);
    }

}

void ScannerClassAttr(SymbolTable *root,TreeNode *node){
    for (int i = 0; i < node->size(); ++i) {
        TreeNode *p=node->getChild(i);
        string name=*p->name;
        if(name=="Fun"){
            Fun *symbol=new Fun((*p->attr)["id"]);
            symbol->setVarType((*p->attr)["type"]);
            symbol->IsStatic=!(*p->attr)["static"].empty();
			symbol->IsConstruct=!(*p->attr)["construct"].empty();
            symbol->setLine(p->line);
			
			if(!symbol->getVarType().empty()&&symbolRoot->get(symbol->getVarType())==NULL){
				error(false,symbol->getLine(),string("Unknow type ").append(symbol->getVarType()));
				symbol->setVarType("ANY");
			}
			
            TreeNode *args=p->getChild(0);
            for (int j = 0; j < args->size(); ++j) {
                symbol->addArgs(*args->getChild(j)->getChild(0)->string_value);
            }
            new SymbolTable(symbol,root);
        }
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
	Const *s=new Const();
	tree->symbol=s;
	s->setVarType(fSymbol->getRealType());
}


void reduceVar(SymbolTable *table,Symbol* symbol,SymbolTable* tree){
	Symbol* targetSymbol=findSymbol(table,symbol->getId());
	if(targetSymbol==NULL||targetSymbol->getType()!=VAR){
		error(false,symbol->getLine(),string("var ").append(symbol->getId())+" don't declare");
		tree->symbol=AnySymbol::getInstance();
	}else{
		tree->symbol=targetSymbol;
	}
}

void Reduce(SymbolTable* table,SymbolTable* tree){
	Symbol* symbol=tree->symbol;
	Type type=symbol->getType();
	if(type==REF&&tree->getSymbol(0)->getType()==VAR){
		goto label;
	}

	
	for(int i=0;i<tree->size();i++){
		Reduce(table,tree->get(i));
	}

    /*  */
    if(symbol->getId()=="AUTO"){
        Symbol* firstSymbol=tree->getSymbol(0);
        if(!(firstSymbol->getType()==VAR&&firstSymbol->getRealType()=="int")){
            error(false,symbol->getLine(),"auto op only supprot var int");
			tree->symbol=AnySymbol::getInstance();
        }else{
            tree->symbol=firstSymbol;
        }
        
        return;
    }

label:	
	if(type==VAR){
		reduceVar(table,symbol,tree);
	}
	else if(type==OP){
		string t1=tree->getSymbol(0)->getRealType();
		if(symbol->getId()=="NEW"){
			Symbol *targetSymbol=tree->getSymbol(0);
			if(targetSymbol->getType()==FUN){
				Symbol *classSymbol=findSymbol(symbolRoot,targetSymbol->getId());
				if(classSymbol==NULL){
					error(false,symbol->getLine(),string(" No this class ").append(targetSymbol->getId()));
				}
				else if(tree->get(0)->size()!=0){
					Symbol *constructSymbol=symbolRoot->get(targetSymbol->getId())->getSymbol(targetSymbol->getId());
					if(constructSymbol==NULL)
						error(false,symbol->getLine(),string("No this Contruct"));
					else {
						ReduceFunction(constructSymbol,symbol,tree);
					}
				}
			}
			tree->symbol=targetSymbol;
			return;
		}
		
		string t2=tree->getSymbol(1)->getRealType();
		if(t1=="ANY"||t2=="ANY"){
			tree->symbol=AnySymbol::getInstance();
		} 
		else if(symbol->getId()=="="){
			if(t1==t2){
				if(tree->getSymbol(0)->getType()!=VAR){
					tree->symbol=AnySymbol::getInstance();
					error(false,symbol->getLine(),string("Lvalue' must be Var"));
				}else{
					tree->symbol=tree->getSymbol(0);
				}
			}else{
				error(false,symbol->getLine(),string("Lvalue' type is ").append(t1).append(",but Rvalue's type is ").append(t2));
				tree->symbol=AnySymbol::getInstance();
			}
		}
		else if(((t1!=t2)||(t1!="int"&&t1!="float")||(t2!="int"&&t2!="float"))){
			error(false,tree->symbol->getLine(),string("OP only supprot same" 
				" type and type is int,flaot;the symbol ").append(tree->getSymbol(0)->getId()).
				append(" and ").append(tree->getSymbol(1)->getId()).append(" is not same")
			);
			tree->symbol=AnySymbol::getInstance();
		}
		else{
			Const *constSymbol=new Const();
			constSymbol->setVarType(t1);
			tree->symbol=constSymbol;
		}
	}
	else if(type==REF){
		// cout<<"########REF##########:"<<symbol->getId()<<endl;
		SymbolTable* targetTable=NULL;
		if(symbol->getId()=="THIS"){
			targetTable=thisClass;
		}else if(symbol->getId()=="SUPER"){
			Class *t=(Class*)thisClass->symbol;
			if(thisClass->parent==NULL||t->getExtClass().empty()){
				error(false,symbol->getLine(),"this class don't have super pointer");
				tree->symbol=AnySymbol::getInstance();
				return;
			}else{
				targetTable=thisClass->parent;
			}
		}else{
			Symbol* varSymbol=findSymbol(table,symbol->getId());
			if(varSymbol==NULL){
				error(false,symbol->getLine(),string("var ").append(symbol->getId())+" don't declare");
				tree->symbol=AnySymbol::getInstance();
				return;
			}else{
				string type=varSymbol->getRealType();
				targetTable=symbolRoot->get(type);
			}
		}
		
		
		Symbol* refSymbol=tree->getSymbol(0);
		Symbol* globalSymbol=findSymbol(targetTable,refSymbol->getId());
		
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
		}
	}
	else if(type==NEWARRAY||type==ARRAYINDEX){
		Symbol* indexSymbol=tree->getSymbol(0);
		if(indexSymbol->getRealType()!="int"){
			error(false,symbol->getLine(),"array index must be int");
		}
		if(type==ARRAYINDEX){
			reduceVar(table,symbol,tree);
			Variable* s=new Variable(symbol->getId());
			s->setVarType(Symbol::trimArray(tree->symbol->getRealType()));
			tree->symbol=s;
			
		}
	}
}

SymbolTable *symbolReduce(SymbolTable* table,SymbolTable* tree){
	// cout<<"$$$$$$$$$$$$$$$$$$$$$"<<endl;
	// TravelSymbols(tree,0);
	// cout<<"$$$$$$$$$$$$$$$$$$$$$"<<endl;
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
		
		string varType=(*p->attr)["type"];
		int index=varType.find('[');
		varType=varType.substr(0,index);
		
		if(symbolRoot->get(varType)==NULL){
			error(false,p->line,string("Unknow type ").append(varType));
		}
		
        vector<string> declareList;
        SymbolTable* varTree=getDeclareList(p,declareList);
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
		thisFun=t;
		createSymbolTable(p->getChild(1),t,0);
	}else if(name=="Class"){
		SymbolTable *t=table->get((*p->attr)["id"]);
		thisClass=t;
		createSymbolTable(p,t,0);
	}else if(name=="VarStm"||name=="BoolExp"){
		vector<string> declareList;
        SymbolTable* varTree=getDeclareList(p,declareList);
		symbolReduce(table,varTree);
	}else if(name=="IfStm"||name=="ElseStm"||name=="WhileStm"){
		Symbol* symbol=new Segment(to_string(table->size()).append(name));
		SymbolTable* T=new SymbolTable(symbol,table);
		createSymbolTable(p,T,0);
	}
	else if(name=="ReturnStm"){
		// cout<<"##:"<<thisFun->symbol->getRealType()<<endl;
		if(thisFun->symbol->getRealType()=="void"){
			if(p->size()>0){
				error(false,p->line,"type void don't need return any");
			}
		}
		else if(p->size()==0){
			error(false,p->line,"return need args");
		}else{
			vector<string> declareList;
			SymbolTable* varTree=getDeclareList(p,declareList);
			symbolReduce(table,varTree);
			if(varTree->getSymbol(0)->getRealType()!=thisFun->symbol->getRealType()){
				error(false,p->line,"Return type isn't same");
			}
		}
		
	}
	else{
		createSymbolTable(p,table,0);
	}
	createSymbolTable(node,table,index+1);
}

SymbolTable* getDeclareList(TreeNode* node,vector<string> &list){
    SymbolTable* tree=parseVarStm(node,list);
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
		// cout<<"*************************type:"<<*node->string_value<<endl;
        treeNode->symbol=new Symbol;
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setType(REF);
        treeNode->symbol->setId(*node->string_value);
        return treeNode;
    }else if (name=="newArray"){
        treeNode->symbol=new Symbol;
		treeNode->symbol->setType(NEWARRAY);
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId(*node->string_value);
    }
	else if(name=="ArrayIndex"){
		treeNode->symbol=new Symbol;
		treeNode->symbol->setType(ARRAYINDEX);
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId(*node->string_value);
	}
	else if(name=="Lvalue"){
		list.push_back(*node->string_value);
        treeNode->symbol=new Variable(*node->string_value);
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
		if(name=="ASSIGNOP"&&treeNode->getSymbol(0)->getType()==VAR){
			list.push_back(treeNode->getSymbol(0)->getId());
		}
		treeNode->symbol=new Symbol;
		treeNode->symbol->setType(OP);
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId(*node->string_value);
		return treeNode;
	}
	else if(name=="NEW"){
		treeNode->symbol=new Symbol;
		treeNode->symbol->setType(OP);
        treeNode->symbol->setLine(node->line);
        treeNode->symbol->setId("NEW");
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
