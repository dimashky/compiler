#include "Block.h"
Block::Block(Node *parent) :Statement(parent)
{
}

void Block::add(Node* statement)
{
	this->statements.push_back(statement);
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

Block::~Block()
{
}
