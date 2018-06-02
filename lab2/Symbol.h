//
// Created by wei on 2018/5/22.
//

#ifndef UNTITLED_SYBOL_H
#define UNTITLED_SYBOL_H
#include <iostream>
#include <string>
#include "LinkedHashMap.h"
#include <stdlib.h>


using namespace std;
extern void error(bool e,int line, const string& msg);
enum Type{_CLASS,VAR,FUN,CONST,REF,EXP,OP,ANY};


typedef union Value{
    string *string_value;
    int int_value;
    float float_value;
}Value;

class Symbol{
protected:
    Type  type;
    string Id;
    int line;
    Value value;
    bool isNull;
public:
	Symbol(){
		setType(EXP);
	}
    virtual Type getType(){
        return type;
    }
    virtual string getId(){
        return Id;
    }
    virtual Value getValue(){
        return value;
    }
    virtual void setNull(bool b){
        isNull=b;
    }

    void setType(Type type){
        this->type=type;
    }

    void setLine(int line){
        this->line=line;
    }
    int getLine(){
        return line;
    }

    void setId(string Id){
        this->Id=Id;
    }
	
	virtual void setRealType(Type type){
		this->type=type;
	}
	
	virtual string getRealType(){
		return toString();
	}
	
	string toString(){
		string result;
		switch(type){
			case _CLASS:result="CLASS";break;
			case VAR:result="VAR";break;
			case FUN:result="FUN";break;
			case CONST:result="CONST";break;
			case EXP:result="EXP";break;
			case REF:result="REF";break;
			case OP:result="OP";break;
			case ANY:result="ANY";break;
			default:result="EXP";
		}
		return result;
	}
};

class Variable:public Symbol{
    bool IsFinal,IsStatic;
    string varType;
public:
    Variable(const string& Id){
        setType(VAR);
        setId(Id);
    }

    void setVarType(const string& type){
        varType=type;
    }
	
	string getRealType(){
		return varType;
	}

    string getVarType()const {
        return varType;
    }

    bool isFinal() const {
        return IsFinal;
    }

    bool isStatic() const{
        return IsStatic;
    }

    void setFinal(bool b){
        IsFinal=b;
    }

    void setStatic(bool b){
        IsStatic=b;
    }

};


class Class:public Symbol{
    string extClass;
public:
    Class(const string& Id){
        setId(Id);
        setType(_CLASS);
    }
    string getExtClass()const {
        return extClass;
    }
    void setExtClass(const string& extName){
        extClass=extName;
    }
};

class Fun:public Symbol{
    bool IsStatic;
    vector<string> ArgList;
    string returnType;
public:
    Fun(const string& Id){
        setType(FUN);
        setId(Id);
    }

	string getRealType(){
		return returnType;
	}
	
    void setStatic(bool b){
        IsStatic=b;
    }

    void setVarType(const string& type){
        returnType=type;
    }

    void addArgs(const string& argType){
        ArgList.push_back(argType);
    }

    string getVarType()const {
        return returnType;
    }

    string get(int index){
		return ArgList[index];
	}
	
	int size()const{
		return ArgList.size();
	}

};

class Const:public Symbol{
public:
    string varType;
    Const(){
        setType(CONST);
    }
	void setVarType(const string& type){
		varType=type;
	}
	string getRealType(){
		return varType;
	}
};



class SymbolTable{
public:
    Symbol *symbol;
	SymbolTable* parentClass;
    SymbolTable *parent;
    LinkedMap<string,SymbolTable*> nodes;
    SymbolTable():parent(NULL),symbol(NULL),parentClass(NULL){}
    SymbolTable(Symbol* s,SymbolTable *p):parent(p),symbol(s),parentClass(NULL){
        p->add(s->getId(),this);
    }
	
	bool isClass(){
		return symbol==NULL?false:symbol->getType()==_CLASS;
	}
	
	string getId(){
		return symbol->getId();
	}
	
	SymbolTable* getFirst(){
		return nodes.get(0);
	}
	
	SymbolTable* get(const string& Id){
		return nodes.get(Id);
	}
	
	string getKey(int index){
		return nodes.getKey(index);
	}
	
	SymbolTable* get(int index){
		return nodes.get(index);
	}
	
	Symbol* getSymbol(int index){
		SymbolTable* t=nodes.get(index);
		return t!=NULL?t->symbol:NULL;
	}
	
	
	Symbol* getSymbol(const string& Id){
		SymbolTable* t=nodes.get(Id);
		return t!=NULL?t->symbol:NULL;
	}
	
	int size()const{
		return nodes.size();
	}

    void add(const string& Id,SymbolTable* table){
        if(nodes.get(Id)!=NULL){
            string msg;
			msg.append(Id).append(" ").append("already have been declare!");
            error(false,table->symbol->getLine(),msg);
			exit(-1);
        }
        nodes.put(Id,table);
    }
	
};



#endif //UNTITLED_SYBOL_H
