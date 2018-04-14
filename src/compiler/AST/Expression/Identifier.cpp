#include "Identifier.h"
#include "../../Symbol Table/symbolTable.h"
#include "AutoConst.h"

Identifier::Identifier(Node* preDot, Symbol* postDot, bool is_array) : Expression(Node::current)
{
	this->preDot = preDot;
	this->postDot = postDot;
	this->is_array = is_array;
}
string Identifier::getType()
{
	return "identifier";
}


int Identifier::print(int nodeCnt)
{
	
	return nodeCnt;
}



void Identifier::setArrayDimensions(queue<Node*>dimensions) {
	
	this->is_array = true;

	while (!dimensions.empty())
		this->dimensions.push_back(dimensions.front()), dimensions.pop();
	return;
}

Identifier::~Identifier()
{
}
