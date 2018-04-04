#include "If.h"

If::If(Expression *codnition , Node *parent) :Statement(parent)
{
	this->codnition = codnition; 
	this->ifStatement = nullptr;
	this->elseStatement = nullptr;
}

string If::getType() {
	return "if";
}

void If::setIfStatement(Node* statement) {
	this->ifStatement = statement;
};

int If::print(int nodeCnt) {

	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'IF', shape: 'box', color:'#74bffc'},", currentId);

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = codnition->print(nodeCnt + 1);

	if (ifStatement) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = ifStatement->print(nodeCnt + 1);
	}

	if (elseStatement) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = elseStatement->print(nodeCnt + 1);
	}
	
	return nodeCnt;
}

void If::setElseStatement(Node* statement) {
	this->elseStatement = statement;
};

If::~If()
{
}
