#pragma once
#include<bits/stdc++.h>
#include "../Type Checker/TypeExpression.h"

using namespace std; 
class Node
{
protected:
	Node* parent;
	void* symboltable;

public:
	static FILE* edgesFile, *nodesFile;

	static void openFiles();
	static void closeFiles();
	
	void setSymbolTable(void* symbolTable) {
		this->symboltable = symbolTable;
		return;
	}

	static Node* current;

	Node(){}
		
	Node(Node* parent);
	
	static void setCurrent(Node* current);

	static void Up();

	
	virtual string getType() = 0;
	
	virtual int print(int) = 0;

	TypeExpression* nodeType;

	virtual bool typeChecking() = 0;

	Node* getParent() {
		return this->parent;
	}

	void setParent(Node* parent) {
		this->parent = parent;
	}

	void* getSymboltable() {
		return this->symboltable;
	}

	virtual void generateCode() {};

	~Node();
};

