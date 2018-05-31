#include "For.h"
#include "../../Symbol Table/Method.h"
#include "../Object/Procedure.h"

For::For(Node *parent) :Loop(parent) { 
	this->condition = nullptr;
	this->statement = nullptr;
}

bool For::typeChecking() {

	auto cpy = this->initializers;

	while (!cpy.empty()) {
		cpy.front()->typeChecking();
		cpy.pop();
	}

	cpy = iterators;

	while (!cpy.empty()) {
		cpy.front()->typeChecking();
		cpy.pop();
	}

	if (condition) {
		condition->typeChecking();

		if (condition->nodeType->getTypeId() != TYPE_BOOL) {
			new TypeError("For condition must be boolean type");
		}
	}

	statement->typeChecking();

	return true;
}

int For::print(int nodeCnt){
	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'For', shape: 'box', color:'#fc4e6b'},", currentId);
	
	if (condition) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = condition->print(nodeCnt + 1);
	}
	
	queue<Node*>cpy = this->initializers;
	
	for (int i = 0;i < cpy.size();i++) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = cpy.front()->print(nodeCnt + 1);
		cpy.pop();
	}
	
	cpy = this->iterators;
	
	for (int i = 0;i < cpy.size();i++) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = cpy.front()->print(nodeCnt + 1);
		cpy.pop();
	}

	if (statement) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = statement->print(nodeCnt + 1);
	}

	return nodeCnt;
}

string For::getType() {
	return "for";
}



void For::setCondition(Node* condition) {
	this->condition = condition;
}

void For::setInitializers(queue<Node*>initializers) {
	this->initializers = initializers;
	for (int i = 0; i < initializers.size(); i++) {
		Node* init = initializers.front();
		initializers.pop();
		if (init->getType() == "variable") {
			((Variable*)statement)->getSymbol()->offset = ((Method*)((Procedure*)(((Block*)parent)->parentMethod))->getSymbol())->stackFrameSize;
			((Method*)((Procedure*)(((Block*)parent)->parentMethod))->getSymbol())->stackFrameSize += 4;
		}
	}
}

void For::addInitializer(Node* initializer) {
	this->initializers.push(initializer);
}

void For::setStatement(Node* statement) {
	this->statement = statement;
}

void For::setIterators(queue<Node*>iterators) {
	this->iterators = iterators;
}

void For::generateCode() {
	// init vars
	queue<Node*> tmp = this->initializers;
	startLabel = ++AsmGenerator::labelCounter;
	exitLabel = ++AsmGenerator::labelCounter;

	// init iterators
	for (int i = 0; i < tmp.size(); ++i) {
		tmp.front()->generateCode();
		tmp.pop();
	}

	AsmGenerator::addLabel("label"+to_string(startLabel));
	
	if (condition) {
		this->condition->generateCode();
		if (condition->getType() == "call") {
			AsmGenerator::lw("t0", "sp", 0);
		}
		else {
			AsmGenerator::pop("t0");
		}
		AsmGenerator::addInstruction("beq $t0, $0, label" + to_string(exitLabel));
	}


	// generate the block
	this->statement->generateCode();

	// iteration 
	tmp = this->iterators;

	for (int i = 0; i < tmp.size(); ++i) {
		tmp.front()->generateCode();
		tmp.pop();
	}

	AsmGenerator::addInstruction("j label" + to_string(startLabel));
	AsmGenerator::addLabel("label" + to_string(exitLabel));
}

For::~For()
{
}
