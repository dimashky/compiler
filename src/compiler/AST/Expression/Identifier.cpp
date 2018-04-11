#include "Identifier.h"
#include "../../Symbol Table/symbolTable.h"
#include "AutoConst.h"

Identifier::Identifier(Symbol *symbol, bool is_array) : Expression(Node::current)
{
	this->symbol = symbol;
	this->is_array = is_array;
}
string Identifier::getType()
{
	return "identifier";
}
Symbol* Identifier::getSymbol()
{
	return symbol;
}
void Identifier::setSymbol(Symbol *symbol)
{
	this->symbol = symbol;
}
int Identifier::print(int nodeCnt)
{
	cout << "==========================" << endl;

	symbol = symbolTable::findIdentifier(symbol, (symbolTable*)symboltable);

	cout << symbol->getName() << " " << symbol->getLineNo() << " " << symbol->getColNo() << endl;

	for (int i = 0;i < dimensions.size();i++)
		cout << *((int*)((AutoConst*)dimensions[i])->getValue()) << " ";
	cout << endl;
	cout << "==========================" << endl;
	
	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#fc0800'},", nodeCnt, this->symbol->getName().c_str());
	
	return nodeCnt;
}



void Identifier::setArrayDimensions(queue<Node*>dimensions) {
	while (!dimensions.empty())
		this->dimensions.push_back(dimensions.front()), dimensions.pop();
	return;
}

Identifier::~Identifier()
{
}
