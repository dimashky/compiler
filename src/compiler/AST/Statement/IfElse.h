#pragma once
#include "Statement.h"
class IfElse :public Statement
{
	Statement *ifPart;
	Statement *elsePart;
public:
	IfElse(Statement* ifPart, Statement* elsePart, Node *parent);
	~IfElse();
};

