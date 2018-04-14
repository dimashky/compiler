#pragma once
#include "../Node.h"
class Statement : public Node
{

public:

	Statement(Node* parent);

	virtual int print(int) = 0;

	virtual string getType() = 0;
	
	virtual bool typeChecking() = 0;

	~Statement();
};

