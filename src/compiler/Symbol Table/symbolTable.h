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
	map<Symbol*, symbolTable*, compare_1 > symbolMap;
	vector<symbolTable*>childs;
	symbolTable *parent;

	void addScope(Symbol* symbol);

public:
	static stack<symbolTable*> openBrackets;
	symbolTable(symbolTable* parent);
	void addScope();
	void addClass(Symbol* symbol, queue<string>bases);
	void addChild(symbolTable* st);
	bool closeScope();
	void closeBracket();
	~symbolTable();
	
};




