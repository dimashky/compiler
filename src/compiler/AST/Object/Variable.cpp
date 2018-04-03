#include "Variable.h"

Variable::Variable(Symbol* symbol, Expression *equal, Node* parent) :Object(symbol, parent)
{
	this->equal = equal;
	if(equal)
	equal->print(111);
}
Variable::~Variable()
{

}