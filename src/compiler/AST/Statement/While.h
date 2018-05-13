#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
#include "../../Type Checker/all.h"

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
		if (condition->nodeType->getTypeId() != TYPE_BOOL) {
			new TypeError("While condition must be boolean type");
		}
		statement->typeChecking();

		return true;
	}
	~While();
};

