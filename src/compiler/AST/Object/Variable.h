#pragma once
#include "Object.h"
#include "../../Symbol Table/Symbol.h"
#include "../Expression/Expression.h"
class Variable :public Object
{
	Node* equal;
public:
	Variable(Symbol* symbol, Node *equal, Node* parent);

	int print(int);

	string getType();
	bool typeChecking();
	void generateCode();

	~Variable();
};

