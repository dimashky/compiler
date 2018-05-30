#pragma once
#include "Loop.h"

class DoWhile :public Loop
{

private:

	Node *condition, *statement;

public:

	DoWhile(Node *condition, Node *statement, Node *parent);
	
	string getType();

	void setStatement(Node* statement);

	void setCondition(Node* condition);

	int print(int);

	bool typeChecking();

	~DoWhile();
};

