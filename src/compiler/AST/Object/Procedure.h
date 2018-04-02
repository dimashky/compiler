#pragma once
#include "Object.h" 
#include "../Statement/Block.h"
#include "../../Symbol Table/Symbol.h"
#include "Variable.h"
class Procedure :public Object
{
	Block* block;

public:
	vector<Object*> locals;

	Procedure(Symbol* symbol,Node*parent);
	void add(Object* object) {
		locals.push_back(object);
		return;
	}
	void print(int lev)
	{
		cout << "lev Pr " << lev << endl;

		if(this->symbol != nullptr)
		cout << this->symbol->getName() << endl << endl;

		for (int i = 0; i < locals.size(); i++) {
				locals[i]->print(lev + 1);
		}
	}
	void setBlock(Block* block) {
		this->block = block;
	}
	~Procedure();
};

