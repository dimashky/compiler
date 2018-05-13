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

	Node* baseCall;


	//this for methods only and it will be checked in Node up function
	bool hasReturnStatement;

public:

	Procedure(Symbol* symbol, Node*parent, Node* baseCall = nullptr);

	void add(Object* object);

	int print(int);

	Block* getBlock();

	bool getHasReturn() {
		return hasReturnStatement;
	}

	void setHasReturn(bool hasReturnStatement) {
		this->hasReturnStatement = hasReturnStatement;
		return;
	}

	string getType();

	void setBlock(Block* block);

	bool typeChecking();

	~Procedure();
};

