#pragma once
#include "Object.h" 
#include "../Statement/Block.h"
#include "../../Symbol Table/Symbol.h"
#include "Variable.h"
class Procedure :public Object
{

private:

	Block* block;

	vector<Object*> locals;

public:

	Procedure(Symbol* symbol,Node*parent);

	void add(Object* object);

	int print(int);

	Block* getBlock();

	string getType();

	void setBlock(Block* block);

	bool typeChecking();

	~Procedure();
};

