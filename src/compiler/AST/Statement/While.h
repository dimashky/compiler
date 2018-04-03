#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class While :public Statement
{
	Expression *condition;
	Statement *statement;
public:
	While(Expression *condition, Statement *statement, Node *parent);
	~While();
	string getType() {
		return "while";
	}
};

