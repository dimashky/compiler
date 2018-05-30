#include "While.h"

While::While(Node *condition, Node *statement,Node *parent) :Loop(parent)
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
	startLabel = ++AsmGenerator::labelCounter;
	exitLabel = ++AsmGenerator::labelCounter;
	AsmGenerator::addLabel("label" + to_string(startLabel));

	this->condition->generateCode();
	AsmGenerator::pop("t0");
	// if condition is false goto exit label
	AsmGenerator::addInstruction("beq $t0, $0, label" + to_string(exitLabel));
	
	this->statement->generateCode();
	// go to while condition for test it
	AsmGenerator::addInstruction("j label" + to_string(startLabel));

	AsmGenerator::addLabel("label" + to_string(exitLabel));
};


bool While::typeChecking() {

	condition->typeChecking();
	if (condition->nodeType->getTypeId() != TYPE_BOOL) {
		new TypeError("While condition must be boolean type");
	}
	statement->typeChecking();

	return true;
}

While::~While()
{
}
