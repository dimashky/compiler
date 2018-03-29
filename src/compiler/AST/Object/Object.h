#pragma once
#include "../Node.h"
#include "../../Symbol Table/Symbol.h"

using namespace std;


class Object : public Node
{
	Symbol* symbol;
protected:
public:
	Object(Symbol *symbol);
	~Object();
};

