#pragma once
#include "Object.h"
#include "../../Symbol Table/Symbol.h"
#include "../Expression/Expression.h"
class Variable :public Object
{
	Expression* equal;
public:
	Variable(Symbol* symbol,Expression *equal, Node* parent);

	string getType();

	int print(int);

	~Variable();
};

