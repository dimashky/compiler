#pragma once
#include "../Node.h"
class Statement : public Node
{
public:
	Statement(Node* parent);
	
	virtual string getType() = 0;
	
	virtual int print(int) = 0;
	
	~Statement();
};

