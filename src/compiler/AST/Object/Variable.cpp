#include "Variable.h"

Variable::Variable(Symbol* symbol, Expression *equal, Node* parent) :Object(symbol, parent)
{
	this->equal = equal;
	if(equal)
	equal->print(111);
}

int Variable::print(int nodeCnt)
{
	if (this->symbol != nullptr)
		fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#76fc67'},", nodeCnt, this->symbol->getName().c_str());
	return nodeCnt;
}

string Variable::getType()
{
	return "variable";
}

Variable::~Variable()
{

}