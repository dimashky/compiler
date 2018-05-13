#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
#include "../../Symbol Table/Symbol.h"
#include "../Object/Variable.h"
class Foreach :public Statement
{

	Variable *symbolLeft;
	Node *statement, *symbolRight;

public:

	Foreach(Symbol *symbolLeft, Node *symbolRight, Node *parent);
	
	int print(int);

	string getType();

	void setStatement(Node* statement) {
		this->statement = statement;
	}

	~Foreach();
};

