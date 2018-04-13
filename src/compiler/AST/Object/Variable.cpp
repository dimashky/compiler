#include "Variable.h"

Variable::Variable(Symbol* symbol, Node *equal, Node* parent) :Object(symbol, parent)
{
	this->equal = equal;
	
}

int Variable::print(int nodeCnt)
{
	int currentId = nodeCnt;
	
	if (this->symbol != nullptr) {
		if (this->equal != nullptr) {
			fprintf(nodesFile, "{ id:%d, label:'%s =', shape: 'box', color:'#76fc67'},", nodeCnt, this->symbol->getName().c_str());
			fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
			nodeCnt = this->equal->print(nodeCnt + 1);
		}
		else {
			fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#76fc67'},", nodeCnt, this->symbol->getName().c_str());
		}
	}

	return nodeCnt;
}

string Variable::getType()
{
	return "variable";
}

Variable::~Variable()
{

}