#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class If :public Statement
{
	Node *codnition;
	Node *ifStatement, *elseStatement;
public:
	If(Node *codnition, Node *parent);

	int print(int);

	string getType();

	void setIfStatement(Node* statement);

	void setElseStatement(Node* statement);
	bool typeChecking() { return false; }
	~If();

	
};

