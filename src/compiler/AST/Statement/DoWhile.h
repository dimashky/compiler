#pragma once
#include "Statement.h"

class DoWhile :public Statement
{

	Node *condition, *statement;

public:

	DoWhile(Node *condition, Node *statement, Node *parent);
	
	int print(int);

	string getType();

	void setStatement(Node* statement) {
		this->statement = statement;
	}

	void setCondition(Node* condition) {
		this->condition = condition;
	}


	~DoWhile();
};

