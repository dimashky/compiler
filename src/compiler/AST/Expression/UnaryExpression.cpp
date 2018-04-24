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
	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#74bffc'},", nodeCnt, OperatorName[op].c_str());

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", nodeCnt, nodeCnt + 1);

	nodeCnt = expression->print(nodeCnt + 1);
	
	return nodeCnt;
}

bool UnaryExpression::typeChecking() {
	if (this->expression->typeChecking()) {
		this->nodeType = this->expression->nodeType->operation(this->op);
	}
	return true;
}

UnaryExpression::~UnaryExpression()
{
}
