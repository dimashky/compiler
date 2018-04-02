#pragma once
#include "../Node.h"
#include "../../Symbol Table/Symbol.h"

using namespace std;


class Object : public Node
{
protected:

public:
	Symbol* symbol;

	Object(Symbol *symbol, Node* parent);
	virtual void print(int lev) = 0;

	~Object();
};

