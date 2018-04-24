#include "BinaryExpression.h"
#include "../../Type Checker/TypeError.h"
#include "AutoConst.h"

BinaryExpression::BinaryExpression(Node *left, Operator op, Node *right,Node* parent):Expression(parent)
{
	this->left = left; 
	this->right = right; 
	this->op = op;
}

string BinaryExpression::getType() {
	return "bexpression";
}

int BinaryExpression::print(int nodeCnt) {

	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#fce2be'},", currentId, OperatorName[op].c_str());

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = left->print(nodeCnt + 1);
	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = right->print(nodeCnt + 1);

	return nodeCnt;
}

BinaryExpression::~BinaryExpression()
{
}

bool BinaryExpression::typeChecking() {
	bool check = true;
	this->left->typeChecking();
	this->right->typeChecking();

	if (left && right) {
		this->nodeType = this->left->nodeType->operation(op, this->right->nodeType);
	}
	return check;
}