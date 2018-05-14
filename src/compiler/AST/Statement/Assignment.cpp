#include "Assignment.h"

Assignment::Assignment(Identifier *left, Operator op, Node *right, Node *parent) :Statement(parent)
{
	this->left = left; 
	this->right = right;
	this->op = op;
}

string Assignment::getType() {
	return "assignment";
}

int Assignment::print(int nodeCnt) {

	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#74bffc'},", currentId, OperatorName[op].c_str());

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = left->print(nodeCnt + 1);
	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = right->print(nodeCnt + 1);

	return nodeCnt;
}

void Assignment::generateCode() {
	right->generateCode();
	AsmGenerator::pop("t0");
	AsmGenerator::sw("t0", "fp", -1 * left->getPostDot()->offset);
//	AsmGenerator::printReg("t0");
}

Assignment::~Assignment()
{
}
