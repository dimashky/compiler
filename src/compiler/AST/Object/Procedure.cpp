#include"Procedure.h"

Procedure::Procedure(Symbol* symbol, Node* parent):Object(symbol, parent)
{
	this->block = nullptr;
}

void Procedure::add(Object* object)
{
	locals.push_back(object);
	return;
}

void Procedure::print(int level)
{
	if (this->symbol != nullptr)
		cout << this->symbol->getName() << endl << endl;
	else
		cout << "Global namespace\n";

	for (int i = 0; i < locals.size(); i++) {
		locals[i]->print(level + 1);
	}
	if (block)
		block->print(level + 1);
}

Block* Procedure::getBlock()
{
	return this->block;
}

void Procedure::setBlock(Block* block)
{
	this->block = block;
}

string Procedure::getType()
{
	return "procedure";
}

Procedure::~Procedure()
{

}