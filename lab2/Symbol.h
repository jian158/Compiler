//
// Created by wei on 2018/5/22.
//

#ifndef UNTITLED_SYBOL_H
#define UNTITLED_SYBOL_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>


using namespace std;
extern void error(bool e,int line, const string& msg);
enum Type{_CLASS,VAR,FUN,CONST,REF,EXP};


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
	
	string toString(){
		string result;
		switch(type){
			case _CLASS:result="CLASS";break;
			case VAR:result="VAR";break;
			case FUN:result="FUN";break;
			case CONST:result="CONST";break;
			case EXP:result="EXP";break;
			case REF:result="REF";break;
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

    bool check(vector<string>& args){

    }

};

class Const:public Symbol{
public:
    string varType;
    Const(){
        setType(CONST);
    }
};



class SymbolTable{
public:
    Symbol *symbol;
    SymbolTable *parent;
    map<string,SymbolTable*> nodes;
    SymbolTable():parent(NULL),symbol(NULL){}
    SymbolTable(Symbol* s,SymbolTable *p):parent(p),symbol(s){
        p->add(s->getId(),this);
    }
	
	string getId(){
		return symbol->getId();
	}
	
	SymbolTable* getFirst(){
		return begin()->second;
	}
	
	map<string,SymbolTable*>::iterator end(){
		return nodes.end();
	}
	
	map<string,SymbolTable*>::iterator begin(){
		return nodes.begin();
	}
	
	int size()const{
		return nodes.size();
	}

    void add(const string& Id,SymbolTable* table){
        if(nodes[Id]!=NULL){
            string msg;
			msg.append(Id).append(" ").append("already have been declare!");
            error(false,table->symbol->getLine(),msg);
        }
        nodes[Id]=table;
    }
	
	
};



#endif //UNTITLED_SYBOL_H
