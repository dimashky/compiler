#include "symbolTable.h"

stack<symbolTable*> symbolTable::openBrackets = stack<symbolTable*>();

symbolTable::symbolTable(symbolTable* parent)
{
	this->parent = parent;
}

void symbolTable::addChild(symbolTable* st)
{
	this->childs.push_back(st);
	return;
}

void symbolTable::addScope(Symbol* symbol)
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		parent = this;
	else parent = openBrackets.top();

	newst = new symbolTable(parent);
	openBrackets.push(newst);

	this->symbolMap.insert(make_pair(symbol, newst));

}

void symbolTable::addScope()
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		return;
	else parent = openBrackets.top();

	newst = new symbolTable(parent);
	parent->addChild(newst);
	openBrackets.push(newst);
	

}

void symbolTable::addSymbol(Symbol* symbol)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;
	else parent = openBrackets.top();

	if (symbol->getType() != "local_var" && symbol->getType() != "data_member")
	{
		if (this->symbolMap.find(symbol) != this->symbolMap.end()) {

			cout << "error : fuck you there is an error in line " << symbol->getLineNo() << ", there is anoter class with Name '" << symbol->getName() << "'" << endl;
		
		}
		else {
			//cout << endl << "ok accepted class with name '" << symbol->getName() << "' in line " << symbol->getLineNo() << endl;
			addScope(symbol);
		}
	}
	else parent->symbolMap[symbol] = NULL;
	
	return;
}
bool symbolTable::closeScope()
{
	if (!openBrackets.empty())
	{
		openBrackets.pop();
		return true;
	}
	return false;
}

symbolTable::~symbolTable()
{

}
