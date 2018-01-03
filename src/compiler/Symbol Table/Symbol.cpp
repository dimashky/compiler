#include "Symbol.h"



Symbol::Symbol(string name, int line_no, int col_no)
{
	this->name = name;
	this->line_no = line_no;
	this->col_no = col_no;
}


Symbol::~Symbol()
{

}

string Symbol::getType()
{
	return "symbol";
}

string Symbol::getName()
{
	return name;
}

int Symbol::getLineNo()
{
	return line_no;
}

int Symbol::getColNo()
{
	return col_no;
}

bool Symbol::compare(Symbol* comp)
{
	return this->name > comp->name;
}