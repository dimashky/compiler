#pragma once
#include<bits\stdc++.h>
#include "Symbol.h"
#include "Attribute.h"
#include "class_tree.h"
#include "../AST/Node.h"
using namespace std;


 class compare_1 {
public:
	bool operator()(Symbol* const &s1, Symbol* const &s2) const 
	{
		return s1->compare(s2);
	}
};

class symbolTable
{ 

private:

	bool valid;
	Symbol* owner;
	symbolTable *parent;
	vector<symbolTable*>childs;
	static FILE *nodeFile, *edgeFile;
	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 > symbolMap;

	void add_scope(Symbol* symbol);
	void add_symbol_without_open_brackets(Symbol* symbol);

public:
	
	static int is_main;
	static vector<node*>parents;
	static symbolTable* object_ref;
	static vector<symbolTable*> deleted;
	static class_tree *type_defination_tree;
	static stack<symbolTable*> openBrackets;
	static queue<pair<Symbol*, symbolTable*>> later_defination_override;
	static queue<pair<Symbol*, symbolTable*>> extended_abstract_classes;
	static vector<pair<node*, pair<pair<int, int>, pair<int, int> > > >using_namespaces;
	static queue< pair<queue<string>, pair<node*, Symbol* > > >later_defination,later_defination_var;

	symbolTable(symbolTable* parent,Symbol* owner);
	
	void add_scope();
	void addChild(symbolTable* st);
	void addNamespace(Symbol* symbol);
	void addField(Symbol* symbol, bool known_type);
	void addLocalVariable(Symbol* symbol, bool isParameter);
	void addClass(Symbol* symbol, queue<string>&bases, queue<string>&modifiers);
	void addInterface(Symbol* symbol, queue<string>bases, queue<string>&modifiers);
	void addMethod(Symbol* symbol, queue<string>&modifiers, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > parameters, queue<int>params_dimension, queue<Node*>var_init, bool known_type, bool is_body);

	Symbol* get_owner();
	string getFullPath();
	string get_owner_name();
	symbolTable * get_parent();
	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>& get_symbolMap();

	int print(int);

	bool closeScope();

	void setAsInvalid();

	static bool initPrintFiles();

	static void closePrintFiles();

	void check_method(symbolTable* curr, map<string, bool>check_map);   

	static Symbol* symbolTable::findIdentifier(Symbol* symbol, symbolTable* currentScope, Symbol* lastSymbol = nullptr);
	
	~symbolTable();
};








