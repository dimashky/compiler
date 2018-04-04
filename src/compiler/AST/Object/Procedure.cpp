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

int Procedure::print(int nodeCnt)
{
	int currentId = nodeCnt;
	if (this->symbol != nullptr)
		fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#74bffc'},", currentId, this->symbol->getName().c_str());
	else
		fprintf(nodesFile, "{ id:%d, label:'Global Namespace', shape: 'box', color:'#74bffc'},", nodeCnt);

	for (int i = 0; i < locals.size(); i++) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = locals[i]->print(nodeCnt + 1);
	}
	if (block) {
		fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
		nodeCnt = block->print(nodeCnt + 1);
	}

	return nodeCnt;
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