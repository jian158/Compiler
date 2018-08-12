//
// Created by wei on 2018/5/17.
//

#ifndef UNTITLED_MAIN_H
#define UNTITLED_MAIN_H

#include <iostream>
#include <vector>
#include "Symbol.h"
using namespace std;

extern char* yytext;
extern FILE* yyin;
extern int yylineno;
extern int yyparse();
extern SymbolTable *symbolRoot;

class TreeNode {
public:
    int line;
    string* name;
    TreeNode* temp;
    vector<TreeNode*> childs;
    union {
        map<string,string> *attr;
        string *string_value;
        int int_value;
        float float_value;
    };
    TreeNode():temp(NULL){}
    TreeNode* getChild(unsigned int index){
        return index<childs.size()?childs.at(index):NULL;
    }

    void add(TreeNode* node){
        childs.push_back(node);
    }

    unsigned int size()const {
        return childs.size();
    }
};
void createSymbolTable(TreeNode *node,SymbolTable *table,int index);
SymbolTable *parseVarStm(TreeNode *node,vector<string>& list);
SymbolTable* getDeclareList(TreeNode* node,vector<string> &list);
TreeNode* newNode(const char* name,int argc,...);
void TravelTree(TreeNode* node,int level);
void adjustNodes(TreeNode* root,int index);
void TravelSymbols(SymbolTable* table,int level,int index);
void startSymbolCreate(TreeNode *node);

void ScannerClass(TreeNode *node);
void ScannerClassAttr(SymbolTable *root,TreeNode *node);

void error(bool e,int line, const string& msg);

#endif //UNTITLED_MAIN_H
