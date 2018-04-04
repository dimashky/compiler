#pragma once
#include "Object.h" 
#include "../Statement/Block.h"
#include "../../Symbol Table/Symbol.h"
#include "Variable.h"
class Procedure :public Object
{
	Block* block;
	vector<Object*> locals;

public:

	Procedure(Symbol* symbol,Node*parent);
	void add(Object* object);

	void setBlock(Block* block);
	Block* getBlock();

	string getType();

	void print(int lev);

	~Procedure();
};

