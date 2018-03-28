#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class While :public Statement
{
	Expression *condition;
	Statement *statement;
public:
	While();
	While(Expression *condition, Statement *statement);
	~While();
};

