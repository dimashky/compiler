#pragma once
#include "Expression.h"
#include "../Object/Object.h"
#include "../../Symbol Table/Symbol.h"

using namespace::std;

class Identifier : public Expression
{
private:

	Symbol *symbol;
	
	bool is_array;

	vector<Node*>dimensions;

public:

	Identifier(Symbol *symbol, bool is_array = false);

	int print(int);

	string getType();

	Symbol* getSymbol();
	
	void setSymbol(Symbol *symbol);

	void setArrayDimensions(queue<Node*>dimensions);

	~Identifier();
};

