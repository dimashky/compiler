#pragma once
#include "../Node.h"
#include "../Operator.h"

class Expression : public Node
{

public:

	Expression(Node* parent);

	virtual string getType();

	virtual int print(int) = 0;

	virtual bool typeChecking() = 0;

	~Expression();
};

