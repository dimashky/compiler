#pragma once
#include<bits\stdc++.h>
#include "Symbol.h"
#include "Attribute.h"
#include"Class.h"
#include "class_tree.h"

using namespace::std;


class compare_1 {
public:
	bool operator()(Symbol* const &s1, Symbol* const &s2) { return  s1->getName() > s2->getName(); }
};



class symbolTable
{
private:


	map<Symbol*, pair<symbolTable*,symbolTable* >, compare_1 > symbolMap;
	vector<symbolTable*>childs;
	symbolTable *parent;
	Symbol* owner;
	class_tree *type_defination_tree;
	void addScope(Symbol* symbol);
	void addScope();

public:
	static stack<symbolTable*> openBrackets;

	symbolTable(symbolTable* parent,Symbol* owner);
	void addNamespace(Symbol* symbol);
	void addClass(Symbol* symbol, queue<string>&bases, queue<string>&modifiers);
	void addInterface(Symbol* symbol, queue<string>bases);
	bool closeScope();
	string get_owner_name() {
		return owner->getName();
	}

	void addChild(symbolTable* st);
	~symbolTable();
	
};








