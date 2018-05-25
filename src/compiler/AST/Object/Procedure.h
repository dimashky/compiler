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

	Block* getBlock();

	bool getHasReturn();

	string getType();

	void setHasReturn(bool hasReturnStatement);

	void setBlock(Block* block);

	void add(Object* object);

	int print(int);

	bool typeChecking();

	void generateCode();

	Node* getBaseCall() {
		return baseCall;
	}

	~Procedure();
};

