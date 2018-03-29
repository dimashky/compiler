#pragma once
#include "Object.h" 
#include "../Statement/Block.h"
#include "../../Symbol Table/Symbol.h"

class Procedure :public Object
{
	vector<Object*> locals;
	Block block;

public:
	Procedure(Symbol* symbol);
	void add(Object* object) {
		locals.push_back(object);
		return;
	}
	~Procedure();
};

