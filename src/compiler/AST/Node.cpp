#include "Node.h"

Node* Node::current = nullptr;

Node::Node(Node* parent)
{
	this->parent = parent;
}


Node::~Node()
{
}
