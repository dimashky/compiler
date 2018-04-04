#include "Node.h"

Node* Node::current = nullptr;

Node::Node(Node* parent)
{
	this->parent = parent;
}

void Node::setCurrent(Node* current) {
	Node::current = current;
}

void Node::Up() {
	if (Node::current != nullptr)
		Node::current = Node::current->parent;
}

Node::~Node()
{
}
