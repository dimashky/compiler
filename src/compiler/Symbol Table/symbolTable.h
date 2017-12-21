#pragma once
#include<bits\stdc++.h>
#include "Symbol.h"
#include "Attribute.h"
#include "class_tree.h"
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
	map<Symbol*, pair<symbolTable*,symbolTable* >, compare_1 > symbolMap;
	vector<symbolTable*>childs;
	symbolTable *parent;
	Symbol* owner;
	void add_scope(Symbol* symbol);
	void add_scope();
	void add_symbol_without_open_brackets(Symbol* symbol);
	static FILE *nodeFile, *edgeFile;
public:
	static vector<node*>parents;
	static stack<symbolTable*> openBrackets;
	static queue< pair<queue<string>, pair<node*, Symbol* > > >later_defination;
	static class_tree *type_defination_tree;

	symbolTable(symbolTable* parent,Symbol* owner);
	void addNamespace(Symbol* symbol);
	void addClass(Symbol* symbol, queue<string>&bases, queue<string>&modifiers);
	void addInterface(Symbol* symbol, queue<string>bases, queue<string>&modifiers);
	void addMethod(Symbol* symbol,queue<string>&modifiers, queue<pair<pair<string, string >, pair<int, int> > > parameters);
	void addField(Symbol* symbol);
	void addLocalVariable(Symbol* symbol, bool isParameter);

	void addChild(symbolTable* st);
	bool closeScope();
	Symbol* get_owner();
	string get_owner_name();
	~symbolTable();
	int print(int);
	static bool initPrintFiles();
	static void closePrintFiles();
};








