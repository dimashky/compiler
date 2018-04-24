#pragma once
#include "../Node.h"
#include "../Operator.h"

class Expression : public Node
{

public:

	Expression(Node* parent);

	virtual int print(int) = 0;

	virtual string getType();

	virtual bool typeChecking() = 0;

	~Expression();
};

