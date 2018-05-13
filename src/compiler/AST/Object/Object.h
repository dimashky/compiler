#pragma once
#include "../Node.h"
#include "../../Symbol Table/Symbol.h"

using namespace std;


class Object : public Node
{
protected:
	Symbol* symbol;
public:

	Object(Symbol *symbol, Node* parent);
	virtual int print(int) = 0;
	virtual string getType() = 0;

	Symbol* getSymbol();
	void setSymbol(Symbol *symbol);

	~Object();
};

