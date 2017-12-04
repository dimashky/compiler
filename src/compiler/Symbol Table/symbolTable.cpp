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



void symbolTable::addClass(Symbol* symbol, queue<string>bases)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	int cnt = 0;


	while (!bases.empty())
	{
		cnt++;
		map<Symbol*, symbolTable*>::iterator it = parent->symbolMap.find(new Symbol(bases.front(), 3, 11));

		if (cnt != 1) {
			if (it != parent->symbolMap.end()) {
				if (it->first->getType() == "class")
					cout << "error : there is an error in line " << symbol->getLineNo() << ", no more than one extended class and it should be the first one after Colon." << endl;
				else if (it->first->getType() == "interface") ((Class*)symbol)->add_base(symbol->getName(), symbol);
				else ((Class*)symbol)->add_base(symbol->getName(), NULL);
			}
			else ((Class*)symbol)->add_base(symbol->getName(), NULL);
		}
		else {
			if (it != parent->symbolMap.end())
				((Class*)symbol)->add_base(symbol->getName(), symbol), cout << "i found my father thank you fucker..." << endl;

			else ((Class*)symbol)->add_base(symbol->getName(), NULL);
		}

		bases.pop();

	}

	map<Symbol*, symbolTable*>::iterator it = parent->symbolMap.find(symbol);

	if (it != parent->symbolMap.end())
	{
		/*
		i think in case that there is duplicate in classes name ... we should push to the stack the same symbol table that reference to
		the first declared class !!! (the first case)
		*/

		if (it->first->getType() == "class")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			openBrackets.push(it->second);
		}
		else if (it->first->getType() == "interface")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			addScope(symbol);
		}
		else
		{
			cout << "error : there is an error in line " << it->first->getLineNo() << ", there is defination with same name '" << it->first->getName() << "'" << endl;
			addScope(symbol);
		}
	}
	else
		addScope(symbol);

	return;
}

void symbolTable::addInterface(Symbol* symbol, queue<string>bases)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	int cnt = 0;


	while (!bases.empty())
	{
		cnt++;
		map<Symbol*, symbolTable*>::iterator it = parent->symbolMap.find(new Symbol(bases.front(), 3, 11));

		if (it != parent->symbolMap.end()) {
			if (it->first->getType() == "class")
				cout << "error : there is an error in line " << symbol->getLineNo() << ", Interface can't implement classes." << endl;
			else if(it->first->getType() == "interface") ((Interface*)symbol)->add_base(symbol->getName(), symbol);
			else ((Interface*)symbol)->add_base(symbol->getName(), NULL);
		}
		else ((Interface*)symbol)->add_base(symbol->getName(), NULL);

		bases.pop();

	}
	map<Symbol*, symbolTable*>::iterator it = parent->symbolMap.find(symbol);
	
	if (it != parent->symbolMap.end())
	{
		/*
			i think in case that there is duplicate in interfaces name ... we should push to the stack the same symbol table that reference to
			the first declared interface !!! (the first case)
		*/

		if (it->first->getType() == "interface")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			openBrackets.push(it->second);
		}
		else if (it->first->getType() == "class")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			addScope(symbol);
		}
		else
		{
			cout << "error : there is an error in line " << it->first->getLineNo() << ", there is defination with same name '" << it->first->getName() << "'" << endl;
			addScope(symbol);
		}
	}
	else
		addScope(symbol);

	return;
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

void symbolTable::addScope(Symbol* symbol)
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		parent = this;
	else parent = openBrackets.top();

	newst = new symbolTable(parent);
	openBrackets.push(newst);

	this->symbolMap.insert(make_pair(symbol, newst));
	
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
