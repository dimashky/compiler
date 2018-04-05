#include "For.h"

For::For(Node *parent) :Statement(parent) { 
	this->condition = nullptr;
	this->statement = nullptr;
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

For::~For()
{
}
