#include "Variable.h"

Variable::Variable(Symbol* symbol, Expression *equal, Node* parent) :Object(symbol, parent)
{
	this->equal = equal;
	if(equal)
	equal->print(111);
}

void Variable::print(int level)
{
	if (this->symbol != nullptr)
		cout << this->symbol->getName() << endl << endl;
}

string Variable::getType()
{
	return "variable";
}

Variable::~Variable()
{

}