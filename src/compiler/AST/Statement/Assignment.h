#pragma once
#include "Statement.h"
#include "../Expression/Identifier.h"
#include "../Expression/Expression.h"
class Assignment :public Statement
{
	Identifier *left;
	Node *right;
	Operator op;
public:
	Assignment(Identifier *left, Operator op, Node *right, Node* parent);
	~Assignment();
	string getType() {
		return "assignment";
	}

	void print(int lev) {
		cout << "lev " << lev << endl;
		cout << op << endl;
		left->print(lev + 1);
		right->print(lev + 1);
	}

};

