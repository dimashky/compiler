#pragma once
#include "Expression.h"
class BinaryExpression : public Expression
{
	Operator op;
	Expression *left, *right;
public:
	BinaryExpression(Expression *left, Operator op, Expression *right, Node* parent);
	~BinaryExpression();
	virtual string getType() {
		return "bexpression";
	}

	void print(int lev) {
		cout << "lev " << lev << endl;
		cout << op << endl;
		left->print(lev + 1);
		right->print(lev +1 );
	}
};

