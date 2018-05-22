#include "Foreach.h"

Foreach::Foreach(Symbol *symbolLeft, Node *symbolRight, Node *parent) :Statement(parent) {
	this->statement = nullptr;
	this->symbolLeft = new Variable(symbolLeft, nullptr, this);
	this->symbolRight = symbolRight;
}

bool Foreach::typeChecking() {

	// TODO : after handeling array in yacc handle left symbol with right one !!
	symbolLeft->typeChecking();

	symbolRight->typeChecking();

	statement->typeChecking();

	return true;
}

int Foreach::print(int nodeCnt){
	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'Foreach', shape: 'box', color:'#fc4e6b'},", currentId);
	
	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = symbolLeft->print(nodeCnt + 1);
	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = symbolRight->print(nodeCnt + 1);

	if (statement) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = statement->print(nodeCnt + 1);
	}

	return nodeCnt;
}

void Foreach::setStatement(Node* statement) {
	this->statement = statement;
}


string Foreach::getType() {
	return "foreach";
}

Foreach::~Foreach()
{
}
