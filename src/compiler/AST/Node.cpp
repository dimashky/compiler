#include "Node.h"
#include "../Symbol Table/symbolTable.h"
#include "Object\Procedure.h"
#include "../Type Checker/TypeError.h"
#include "../Error Handler/error_handler.h"
extern errorHandler error_handler;

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

	if (Node::current->getType() == "procedure") {
		if (((Procedure*)Node::current)->getSymbol()->getType() == "method") {
			if (!((Procedure*)Node::current)->getHasReturn()) {
				error_handler.add(error(((Procedure*)Node::current)->getSymbol()->getLineNo(), ((Procedure*)Node::current)->getSymbol()->getColNo(), "there is no return statement in function " + ((Procedure*)Node::current)->getSymbol()->getName()));
			}
		}
	}

	if (Node::current != nullptr)
		Node::current = Node::current->parent;
}

Node::~Node()
{
}
