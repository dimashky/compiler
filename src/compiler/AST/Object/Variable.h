#pragma once
#include "Object.h"
#include "../../Symbol Table/Symbol.h"
class Variable :public Object
{
public:
	Variable(Symbol* symbol, Node* parent);
	void print(int lev)
	{
		cout << "lev Vr " << lev << endl;

		if (this->symbol != nullptr)
			cout << this->symbol->getName() << endl << endl;
	}
	~Variable();
};

