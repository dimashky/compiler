#pragma once
#include "Object.h"
#include "../../Symbol Table/Symbol.h"
#include "../Expression/Expression.h"
class Variable :public Object
{
	Expression* equal;
public:
	Variable(Symbol* symbol,Expression *equal, Node* parent);
	void print(int lev)
	{
		cout << "lev Vr " << lev << endl;

		if (this->symbol != nullptr)
			cout << this->symbol->getName() << endl << endl;
	}
	string getType() {
		return "variable";
	}
	~Variable();
};

