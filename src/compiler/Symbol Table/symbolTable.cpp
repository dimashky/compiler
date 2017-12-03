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
bool keke(Symbol* const &s1, Symbol* const &s2) { return  s1->getName() > s2->getName(); }

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
					cout << "error : there is an error in line " << symbol->getLineNo() << ", extended class should be no more than one and the first one after Colon." << endl;
				else ((Class*)symbol)->add_base(symbol->getName(), symbol);
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

	if (parent->symbolMap.find(symbol) != parent->symbolMap.end())
		cout << "error : there is an error in line " << symbol->getLineNo() << ", there is anoter class with Name '" << symbol->getName() << "'" << endl;
		
	else 
		addScope(symbol);

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
void symbolTable::closeBracket()
{
	if(!openBrackets.empty())
		openBrackets.pop();
	return;

}

symbolTable::~symbolTable()
{

}
