#pragma once
#include "Expression.h"
#include "../Object/Object.h"
#include "../../Symbol Table/Symbol.h"

using namespace::std;

class Identifier : public Expression
{
public:
	Symbol *symbol;

	Identifier(Symbol *symbol);
	 string getType() {
		return "identifier";
	}

	 void print(int lev) {
		 cout << "lev " << lev << endl;
		 cout << symbol->getName() << endl;
	 }
	~Identifier();
};

