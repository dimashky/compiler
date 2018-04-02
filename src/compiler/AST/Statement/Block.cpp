#include "Block.h"
Block::Block(Node *parent) :Statement(parent)
{
}
void Block::add(Statement* statement)
{
	this->statements.push_back(statement);
	return;
}
Block::~Block()
{
}
