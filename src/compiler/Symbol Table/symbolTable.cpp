#include "symbolTable.h"

stack<symbolTable*> symbolTable::openBrackets = stack<symbolTable*>();

symbolTable::symbolTable(symbolTable* parent,Symbol* owner)
{
	this->parent = parent;
	this->owner = owner;
}

void symbolTable::addChild(symbolTable* st)
{
	this->childs.push_back(st);
	return;
}

void symbolTable::addNamespace(Symbol* symbol)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);
	//complete pls
}


void symbolTable::addClass(Symbol* symbol, queue<string>bases)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	if (parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		cout << "error : there is an error in line " << symbol->getLineNo() << " member names cannot be the same as their enclosing type." << endl;

	int cnt = 0;


	while (!bases.empty())
	{
		cnt++;
		map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(new Symbol(bases.front(), 0, 0));

		if (cnt != 1) {
			if (it != parent->symbolMap.end()) {
				if (it->first->getType() == "class")
					cout << "error : there is an error in line " << symbol->getLineNo() << ", no more than one extended class and it should be the first one after Colon." << endl;
				else if (it->first->getType() == "interface") ((Class*)symbol)->add_base(bases.front(), it->first);
				else ((Class*)symbol)->add_base(bases.front(), NULL);
			}
			else ((Class*)symbol)->add_base(bases.front(), NULL);
		}
		else {
			if (it != parent->symbolMap.end())
			{
				if (((Class*)it->first)->is_final())
					cout << "error : there is an error in line " << symbol->getLineNo() << ", cannot derive from sealed type '" << it->first->getName() << "'\n";
				else ((Class*)symbol)->add_base(bases.front(), it->first);
			}
			else ((Class*)symbol)->add_base(bases.front(), NULL);
		}

		bases.pop();
	}

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	if (it != parent->symbolMap.end())
	{

		if (it->first->getType() == "class")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;

			if (it->second.second != NULL)
				delete it->second.second;

			it->second.second = new symbolTable(parent, symbol);

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			if (it->second.second != NULL)
				delete it->second.second;

			it->second.second = new symbolTable(parent, symbol);

			openBrackets.push(it->second.second);
		}
		else
		{
			cout << "error : there is an error in line " << it->first->getLineNo() << ", there is defination with same name '" << it->first->getName() << "'" << endl;

			delete it->first;
			delete it->second.first;
			delete it->second.second;
			symbolMap.erase(it);

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

	if (parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		cout << "error : there is an error in line " << symbol->getLineNo() << " member names cannot be the same as their enclosing type." << endl;

	while (!bases.empty())
	{
		cnt++;
		map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(new Symbol(bases.front(), 3, 11));

		if (it != parent->symbolMap.end()) {
			if (it->first->getType() == "class")
				cout << "error : there is an error in line " << symbol->getLineNo() << ", Interface can't implement classes." << endl;
			else if(it->first->getType() == "interface") ((Interface*)symbol)->add_base(bases.front(), symbol);
			else ((Interface*)symbol)->add_base(bases.front(), NULL);
		}
		else ((Interface*)symbol)->add_base(bases.front(), NULL);

		bases.pop();
	}


	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);
	

	if (it != parent->symbolMap.end())
	{
		
		if (it->first->getType() == "interface")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;

			if (it->second.second != NULL)
				delete it->second.second;

			it->second.second = new symbolTable(parent, symbol);

			openBrackets.push(it->second.second);
		}
		else if (it->first->getType() == "class")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;

			if (it->second.second != NULL)
				delete it->second.second;

			it->second.second = new symbolTable(parent, symbol);

			openBrackets.push(it->second.second);

		}
		else
		{
			cout << "error : there is an error in line " << it->first->getLineNo() << ", there is defination with same name '" << it->first->getName() << "'" << endl;

			delete it->first;
			delete it->second.first;
			delete it->second.second;
			symbolMap.erase(it);

			addScope(symbol);
		}
	}
	else
	{
		addScope(symbol);
	}
	return;
}

void symbolTable::addScope()
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		return;
	else parent = openBrackets.top();

	newst = new symbolTable(parent,NULL);
	parent->addChild(newst);
	openBrackets.push(newst);


}

void symbolTable::addScope(Symbol* symbol)
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		parent = this;
	else parent = openBrackets.top();

	newst = new symbolTable(parent,symbol);
	openBrackets.push(newst);
	symbolTable* err = NULL;

	parent->symbolMap.insert(make_pair(symbol, make_pair(newst, err)));
	
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
