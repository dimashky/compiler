#include "Identifier.h"


Identifier::Identifier(Symbol *symbol) : Expression(Node::current)
{
	this->symbol = symbol;
}
string Identifier::getType()
{
	return "identifier";
}
Symbol* Identifier::getSymbol()
{
	return symbol;
}
void Identifier::setSymbol(Symbol *symbol)
{
	this->symbol = symbol;
}
int Identifier::print(int nodeCnt)
{
	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#fc0800'},", nodeCnt, this->symbol->getName().c_str());
	
	return nodeCnt;
}


Identifier::~Identifier()
{
}
