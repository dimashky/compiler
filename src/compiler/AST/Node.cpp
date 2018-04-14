#include "Node.h"
#include "../Symbol Table/symbolTable.h"
#include "../Type Checker/TypeError.h"
Node* Node::current = nullptr;
FILE* Node::nodesFile = nullptr;
FILE* Node::edgesFile = nullptr;


Node::Node(Node* parent)
{
	this->parent = parent;
	if (symbolTable::openBrackets.empty())
		this->symboltable = nullptr;
	else
		this->symboltable = symbolTable::openBrackets.top();
}

void Node::setCurrent(Node* current) {
	Node::current = current;
}

void Node::openFiles() {
	// open files for drawing tree
	edgesFile = fopen("visually output/js/AST/edges.js", "w");
	nodesFile = fopen("visually output/js/AST/nodes.js", "w");
	if (edgesFile && nodesFile) {
		fprintf(nodesFile, "var nodes = [");
		fprintf(edgesFile, "var edges = [");
	}
}

void Node::closeFiles() {
	if (edgesFile && nodesFile) {
		fprintf(nodesFile, "];");
		fprintf(edgesFile, "];");
		fclose(nodesFile);
		fclose(edgesFile);
	}
}


void Node::Up() {
	if (Node::current != nullptr)
		Node::current = Node::current->parent;
}

Node::~Node()
{
}
