#pragma once
#include "Statement.h"
#include "../Expression/Identifier.h"
#include "../Expression/Expression.h"
#include "../../Symbol Table/Method.h"
#include "../Object/Procedure.h"
class Assignment :public Statement
{
private:
	Identifier *left;
	Operator op;
	Node *right;
public:
	Assignment(Identifier *left, Operator op, Node *right, Node* parent);

	string getType();

	int print(int);

	bool typeChecking();

	void generateCode();

	~Assignment();
};

