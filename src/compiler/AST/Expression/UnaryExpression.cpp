#include "UnaryExpression.h"
#include "Identifier.h"


UnaryExpression::UnaryExpression(Operator op, Node *expression, Node* parent):Expression(parent)
{
	this->op = op; 
	this->expression = expression;
}
string UnaryExpression::getType()
{
	return "uexpression";
}
int UnaryExpression::print(int nodeCnt)
{
	fprintf(nodesFile, "{ id:%d, label:'%d', shape: 'box', color:'#74bffc'},", nodeCnt, op);

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", nodeCnt, nodeCnt + 1);

	nodeCnt = expression->print(nodeCnt + 1);
	
	return nodeCnt;
}


UnaryExpression::~UnaryExpression()
{
}
