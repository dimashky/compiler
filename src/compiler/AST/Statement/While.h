#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
class While :public Statement
{

private:

	Node *condition, *statement;

public:

	While(Node *condition, Node *statement, Node *parent);
	
	int print(int);

	string getType();

	void setStatement(Node* statement);
	bool typeChecking() {

		condition->typeChecking();
		statement->typeChecking();

		return true;
	}
	~While();
};

