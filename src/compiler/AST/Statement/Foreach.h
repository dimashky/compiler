#pragma once
#include "Statement.h"
#include"../Expression/Expression.h"
#include"../Statement/Statement.h"
#include "../../Symbol Table/Symbol.h"
#include "../Object/Variable.h"
class Foreach :public Statement
{

private:

	Variable *symbolLeft;

	Node *statement, *symbolRight;

public:

	Foreach(Symbol *symbolLeft, Node *symbolRight, Node *parent);
	
	int print(int);

	string getType();

	void setStatement(Node* statement);
	bool typeChecking() { return false; }
	~Foreach();
};

