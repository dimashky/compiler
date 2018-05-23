#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
#include "../../Type Checker/all.h"
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
	
	bool typeChecking();

	void generateCode();

	~If();

	
};

