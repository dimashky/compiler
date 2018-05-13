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

	fprintf(nodesFile, "{ id:%d, label:'%d', shape: 'box', color:'#74bffc'},", currentId, op);

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = left->print(nodeCnt + 1);
	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = right->print(nodeCnt + 1);

	return nodeCnt;
}
Assignment::~Assignment()
{
}
