#include "Block.h"
Block::Block(Node *parent) :Statement(parent)
{
}

void Block::add(Node* statement)
{
	this->statements.push_back(statement);
	return;
}

string Block::getType() {
	return "block";
}

void Block::print(int lev) {

	cout << "block" << endl;

	for (int i = 0;i < statements.size();i++)
		statements[i]->print(lev + 1);
}

Block::~Block()
{
}
