#pragma once
#include<iostream>
#include<string>
#include<map>
#include<stack>
#include "Symbol.h"
#include "Attribute.h"
#include"Class.h"
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


	void addScope(Symbol* symbol);
	void addScope();

public:
	static stack<symbolTable*> openBrackets;

	symbolTable(symbolTable* parent,Symbol* owner);
	void addNamespace(Symbol* symbol);
	void addClass(Symbol* symbol, queue<string>bases);
	void addInterface(Symbol* symbol, queue<string>bases);
	bool closeScope();

	void addChild(symbolTable* st);
	~symbolTable();
	
};




