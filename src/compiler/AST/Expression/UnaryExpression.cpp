#include "UnaryExpression.h"
#include "Identifier.h"


UnaryExpression::UnaryExpression(Operator op, Expression *expression, Node* parent):Expression(parent)
{
	this->op = op; 
	this->expression = expression;
}
string UnaryExpression::getType()
{
	return "uexpression";
}
void UnaryExpression::print(int level)
{
	cout << op << endl;
	expression->print(level + 1);
}


UnaryExpression::~UnaryExpression()
{
}
