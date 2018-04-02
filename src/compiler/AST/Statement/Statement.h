#pragma once
#include "../Node.h"
class Statement : public Node
{
public:
	Statement(Node* parent);
	~Statement();
};

