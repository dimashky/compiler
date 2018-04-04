#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class If :public Statement
{
	Expression *codnition;
	Node *ifStatement, *elseStatement;
public:
	If(Expression *codnition, Node *parent);

	string getType();

	void setIfStatement(Node* statement);

	void print(int lev);

	void setElseStatement(Node* statement);

	~If();

	
};

