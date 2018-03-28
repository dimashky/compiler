#include "Block.h"
Block::Block()
{
}
void Block::add(Statement* statement)
{
	this->statements.push_back(statement);
}
Block::~Block()
{
}
