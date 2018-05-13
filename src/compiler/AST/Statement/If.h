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

	string getType();

	void setIfStatement(Node* statement);

	int print(int);

	void setElseStatement(Node* statement);

	~If();

	
};

