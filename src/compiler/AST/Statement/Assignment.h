#pragma once
#include "Statement.h"
#include "../Object/Object.h"
#include "../Expression/Expression.h"
class Assignment :public Statement
{
	Object *left;
	Expression *right;
public:
	Assignment(Object *left, Expression *right, Node* parent);
	~Assignment();
};

