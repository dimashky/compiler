#pragma once
#include "Statement.h"

class DoWhile :public Statement
{

private:

	Node *condition, *statement;

public:

	DoWhile(Node *condition, Node *statement, Node *parent);
	
	int print(int);

	string getType();

	void setStatement(Node* statement);

	void setCondition(Node* condition);
	bool typeChecking() { 
		
		condition->typeChecking();

		statement->typeChecking();
		
		return true;
	}

	void generateCode() {

	}

	~DoWhile();
};

