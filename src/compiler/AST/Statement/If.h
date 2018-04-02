#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class If :public Statement
{
	Expression *codnition;
	Statement *statement;
public:
	If(Expression *codnition, Statement *statement, Node *parent);
	~If();
};

