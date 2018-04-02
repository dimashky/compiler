#pragma once
#include "Statement.h"
#include "../Object/Object.h"
#include "../Expression/Expression.h"
class Assignment :public Statement
{
	Object *left;
	Node *right;
	Operator op;
public:
	Assignment(Object *left, Operator op, Node *right, Node* parent);
	~Assignment();
};

