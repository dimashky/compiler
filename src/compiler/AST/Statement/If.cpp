#include "If.h"

If::If(Node *codnition , Node *parent) :Statement(parent)
{
	this->codnition = codnition; 
	this->ifStatement = nullptr;
	this->elseStatement = nullptr;
}

bool If::typeChecking()
{
	this->ifStatement->typeChecking();
	this->codnition->typeChecking();
	if (this->codnition->nodeType->getTypeId() != TYPE_BOOL) {
		new TypeError("IF condition must be boolean type");
	}
	if (elseStatement) {
		this->elseStatement->typeChecking();
	}

	return true;
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

void If::generateCode() {
	this->codnition->generateCode();
	AsmGenerator::pop("t0");
	int exitLabelNumber = ++AsmGenerator::labelCounter;
	
	if (!this->elseStatement) {
		AsmGenerator::addInstruction("beq $t0, $0, label" + to_string(exitLabelNumber));
		this->ifStatement->generateCode();
		AsmGenerator::addLabel("label" + to_string(exitLabelNumber));
		return;
	}

	int elseLabelNumber = ++AsmGenerator::labelCounter;
	AsmGenerator::addInstruction("beq $t0, $0, label" + to_string(elseLabelNumber));
	this->ifStatement->generateCode();
	AsmGenerator::addInstruction("j label" + to_string(exitLabelNumber));
	AsmGenerator::addLabel("label" + to_string(elseLabelNumber));
	this->elseStatement->generateCode();
	AsmGenerator::addLabel("label" + to_string(exitLabelNumber));
};
