#pragma once
#include "Expression.h"
#include "../Object/Object.h"
#include "../../Symbol Table/Symbol.h"

using namespace::std;

class Identifier : public Expression
{
	Symbol *symbol;

public:

	Identifier(Symbol *symbol);

	int print(int);

	string getType();

	Symbol* getSymbol();
	
	void setSymbol(Symbol *symbol);

	~Identifier();
};

