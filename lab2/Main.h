//
// Created by wei on 2018/5/17.
//

#ifndef UNTITLED_MAIN_H
#define UNTITLED_MAIN_H

#include <iostream>
#include <vector>
using namespace std;

extern char* yytext;
extern FILE* yyin;
extern int yylineno;
extern int yyparse();

class TreeNode {
public:
    int line;
    string* name;
	vector<TreeNode*> childs;
	TreeNode* temp;
    union {
        string *string_value;
        int int_value;
        float float_value;
    };
    TreeNode():temp(NULL){}
};


TreeNode* newNode(const char* name,int argc,...);
void TravelTree(TreeNode* node,int level);
void adjustNodes(TreeNode* root,int index);
#endif //UNTITLED_MAIN_H
