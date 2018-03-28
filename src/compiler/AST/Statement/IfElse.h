#pragma once
#include "Statement.h"
class IfElse :public Statement
{
	Statement *ifPart;
	Statement *elsePart;
public:
	IfElse();
	IfElse(Statement* ifPart , Statement* elsePart);
	~IfElse();
};

