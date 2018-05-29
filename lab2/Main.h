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

class TreeNode {
public:
    int line;
    string* name;
	TreeNode* temp;
    vector<TreeNode*> childs;
    union {
        string *string_value;
        int int_value;
        float float_value;
    };
    TreeNode():temp(NULL){}
    TreeNode* getChild(unsigned int index){
        return index<childs.size()?childs.at(index):NULL;
    }

    unsigned int size()const {
        return childs.size();
    }
};
void createSymbolTable(TreeNode *node,SymbolTable *table,unsigned int index);
void getDeclareVar(TreeNode* node,vector<string> &result);
VarTree *parseVarStm(TreeNode *node);
void TravelVarStm(VarTree *tree,int level);


TreeNode* newNode(const char* name,int argc,...);
void TravelTree(TreeNode* node,int level);
void adjustNodes(TreeNode* root,int index);
#endif //UNTITLED_MAIN_H
