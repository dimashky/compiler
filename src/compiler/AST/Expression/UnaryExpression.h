#pragma once
#include "Expression.h"
class UnaryExpression :
	public Expression
{
private:
	Operator op;
	Expression *expression;
public:
	UnaryExpression(Operator op, Expression *expression, Node* parent);
	virtual string getType() {
		return "Uexp";
	}


	void print(int lev) {
		cout << "lev " << lev << endl;
		cout << op << endl;
		expression->print(lev + 1);
	}
	~UnaryExpression();
};

