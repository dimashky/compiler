#include "Expression.h"



Expression::Expression(Node* parent):Node(parent)
{
}
string Expression::getType()
{
	return "expression";
}


Expression::~Expression()
{
}
