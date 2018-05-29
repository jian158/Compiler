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
#define ErrorMSg "Error Line at Line:"
using namespace std;
enum Type{_CLASS,VAR,FUN,CONST,REF};

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
};

class Variable:public Symbol{
    bool IsFinal,IsStatic;
    string varType;
public:
    Variable(){
        setType(VAR);
    }

    Variable(const string& instruction):IsFinal(false),IsStatic(false){
        setType(VAR);
        vector<string> list;
        int index=0,prev=0;
        while ((index=instruction.find('#',prev))>-1){
            list.push_back(instruction.substr(prev,index-prev));
            prev=index+1;
        }
        list.push_back(instruction.substr(prev,instruction.length()-prev));
        varType=list.at(0);
        if(list.size()>1){
            if(list.at(1)=="STATIC")
                IsStatic= true;
            else IsFinal=true;
        }

        if(list.size()>2){
            if(list.at(2)=="STATIC")
                IsStatic= true;
            else IsFinal=true;
        }
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

};


class Class:public Symbol{
    string extClass;
public:
    Class(const string& name,const string& extName){
        this->Id=name;
        setType(_CLASS);
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
    Fun(){
        setType(FUN);
    }

    void setReturnType(const string& type){
        returnType=type;
    }

    void addArgs(const string& argType){
        ArgList.push_back(argType);
    }

    string getReturnType()const {
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
    static SymbolTable root;
    Symbol *symbol;
    SymbolTable *parent;
    map<string,SymbolTable*> nodes;
    SymbolTable():parent(NULL),symbol(NULL){}
    SymbolTable(Symbol* s,SymbolTable *p):parent(p),symbol(s){
        p->add(s->getId(),this);
    }

    void add(const string& Id,SymbolTable* table){
        if(nodes.count(Id)>0){
            string s;
            cout<<ErrorMSg<<":"<<symbol->getLine()<<"  symbol "<<Id<<" duplicate!"<<endl;
            exit(-1);
        }
        nodes.insert(pair<string,SymbolTable*>(Id,table));
    }
};


class VarTree{
public:
    Symbol* symbol;
    vector<VarTree*> childs;
	VarTree():symbol(NULL){}
};


#endif //UNTITLED_SYBOL_H
