#include "BinaryExpression.h"

#include "AutoConst.h"

BinaryExpression::BinaryExpression(Node *left, Operator op1, Node *right,Node* parent):Expression(parent)
{
	this->left = left; 
	this->right = right; 
	op = op1;
}


string BinaryExpression::getType() {
	return "bexpression";
}

int BinaryExpression::print(int nodeCnt) {

	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'%d', shape: 'box', color:'#fce2be'},", currentId, op);

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = left->print(nodeCnt + 1);
	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = right->print(nodeCnt + 1);

	return nodeCnt;
}

BinaryExpression::~BinaryExpression()
{
}
