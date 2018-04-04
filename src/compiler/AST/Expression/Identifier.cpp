#include "Identifier.h"


Identifier::Identifier(Symbol *symbol)
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
void Identifier::print(int level)
{
	cout << symbol->getName() << endl;
}


Identifier::~Identifier()
{
}
