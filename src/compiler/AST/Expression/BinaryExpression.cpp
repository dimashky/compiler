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

bool BinaryExpression::typeChecking() {
	bool checkLeft = this->left->typeChecking();
	bool checkRight = this->right->typeChecking();
	if (this->op == Operator::Plus) {
		this->nodeType = this->left->nodeType->opPlus(this->right->nodeType->getTypeId());
		
	}
	else if (this->op == Operator::Minus) {
		this->nodeType = this->left->nodeType->opMinus(this->right->nodeType->getTypeId());
	}
	else if (this->op == Operator::star) {
		this->nodeType = this->left->nodeType->opMult(this->right->nodeType->getTypeId());
	}
	else if (this->op == Operator::slash) {
		this->nodeType = this->left->nodeType->opDiv(this->right->nodeType->getTypeId());
	}
	else if (this->op == Operator::percent) {
		this->nodeType = this->left->nodeType->opMod(this->right->nodeType->getTypeId());
	}
	else if (this->op == Operator::power) {
		this->nodeType = this->left->nodeType->opExp(this->right->nodeType->getTypeId());
	}
	else {
		this->nodeType = new TypeError("Given operator is Undefind");
		return false;
	}
	return true;
}