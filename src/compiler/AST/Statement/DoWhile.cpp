#include "DoWhile.h"

DoWhile::DoWhile(Node *condition, Node *statement,Node *parent) :Statement(parent)
{
	this->condition = condition; 
	this->statement = statement; 
}

int DoWhile::print(int nodeCnt){
	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'DoWhile', shape: 'box', color:'#fc4e6b'},", currentId);

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = condition->print(nodeCnt + 1);

	if (statement) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = statement->print(nodeCnt + 1);
	}

	return nodeCnt;
}

string DoWhile::getType() {
	return "dowhile";
}

void DoWhile::setStatement(Node* statement) {
	this->statement = statement;
}

void DoWhile::setCondition(Node* condition) {
	this->condition = condition;
}

DoWhile::~DoWhile()
{
}
