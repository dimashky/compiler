#include"Procedure.h"

Procedure::Procedure(Symbol* symbol, Node* parent):Object(symbol, parent)
{
	this->block = nullptr;
}
Procedure::~Procedure()
{

}