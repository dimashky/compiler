#include "Block.h"
#include "../../Symbol Table/Method.h"
#include "../Object/Procedure.h"
Block::Block(Node *parent) :Statement(parent)
{
	if (parent->getType() == "procedure") {
		this->parentMethod = (Procedure*)parent;
	}
	else {
		Node* current = parent;
		while (current->getType() != "procedure") {
			current = current->getParent();
		}
		this->parentMethod = (Procedure*)current;
	}
}

void Block::add(Node* statement)
{
	this->statements.push_back(statement);
	if (statement->getType() == "variable") {
		((Variable*)statement)->getSymbol()->offset = ((Method*)((Procedure*)parentMethod)->getSymbol())->stackFrameSize;
		((Method*)((Procedure*)parentMethod)->getSymbol())->stackFrameSize += 4;
	}
 	return;
}

string Block::getType() {
	return "block";
}

int Block::print(int nodeCnt) {
	
	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'BLOCK', shape: 'box', color:'#76fc67'},", nodeCnt);
	
	for (int i = 0;i < statements.size();i++) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = statements[i]->print(nodeCnt + 1);
	}
	return nodeCnt;
}

bool Block::typeChecking() {
	bool res = true;
	for (auto statement : statements) {
		res |= statement->typeChecking();
	}

	return res;
}

void Block::generateCode() {
	for (auto statement : statements) {
		statement->generateCode();
	}
}

Block::~Block()
{
}
