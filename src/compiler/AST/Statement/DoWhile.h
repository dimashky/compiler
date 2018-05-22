#pragma once
#include "Statement.h"

class DoWhile :public Statement
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

