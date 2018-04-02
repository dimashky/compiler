#include "IfElse.h"

IfElse::IfElse(Statement* ifPart, Statement* elsePart,Node *parent) :Statement(parent)
{
	this->ifPart = ifPart;
	this->ifPart = ifPart;
}
IfElse::~IfElse()
{
}
