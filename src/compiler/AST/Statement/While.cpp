#include "While.h"

While::While(Node *condition, Node *statement,Node *parent) :Statement(parent)
{
	this->condition = condition; 
	this->statement = statement; 
}

int While::print(int nodeCnt){
	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'While', shape: 'box', color:'#fc4e6b'},", currentId);

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = condition->print(nodeCnt + 1);

	if (statement) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = statement->print(nodeCnt + 1);
	}

	return nodeCnt;
}

string While::getType() {
	return "while";
}

void While::setStatement(Node* statement) {
	this->statement = statement;
}

void While::generateCode() {
	int whileLabelNumber = ++AsmGenerator::labelCounter;
	int exitLabelNumber = ++AsmGenerator::labelCounter;

	AsmGenerator::addLabel("label" + to_string(whileLabelNumber));

	this->condition->generateCode();
	AsmGenerator::pop("t0");
	// if condition is false goto exit label
	AsmGenerator::addInstruction("beq $t0, $0, label" + to_string(exitLabelNumber));
	
	this->statement->generateCode();
	// go to while condition for test it
	AsmGenerator::addInstruction("j label" + to_string(whileLabelNumber));

	AsmGenerator::addLabel("label" + to_string(exitLabelNumber));
};

While::~While()
{
}
