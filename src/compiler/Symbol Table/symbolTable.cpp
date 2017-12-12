#include "symbolTable.h"
#include "Class.h"
#include "class_tree.h"

void symbolTable::add_scope()
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		return;
	else parent = openBrackets.top();

	newst = new symbolTable(parent, NULL);
	parent->addChild(newst);
	openBrackets.push(newst);

}

void symbolTable::add_scope(Symbol* symbol)
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		parent = this;
	else parent = openBrackets.top();

	newst = new symbolTable(parent, symbol);
	openBrackets.push(newst);
	symbolTable* err = NULL;

	parent->symbolMap.insert(make_pair(symbol, make_pair(newst, err)));

	return;
}

stack<symbolTable*> symbolTable::openBrackets = stack<symbolTable*>();

queue< pair<queue<string>, pair<node*, Symbol* > > > symbolTable::later_defination = queue< pair<queue<string>, pair<node*, Symbol* > > >();

class_tree* symbolTable::type_defination_tree = new class_tree();

vector<node*> symbolTable::parents = vector<node*>();

symbolTable::symbolTable(symbolTable* parent,Symbol* owner)
{
	this->parent = parent;
	this->owner = owner;
}

void symbolTable::addNamespace(Symbol* symbol)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	if (it != parent->symbolMap.end())
	{
		openBrackets.push(it->second.first);
		type_defination_tree->down_specific_child(symbol->getName());
	}
	else
	{
		add_scope(symbol);
		type_defination_tree->add_node(symbol->getName(), openBrackets.top());
	}
	return;
}

void symbolTable::addClass(Symbol* symbol, queue<string>&bases,queue<string>&modifiers)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	if (parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		cout << "error : there is an error in line " << symbol->getLineNo() << " member names cannot be the same as their enclosing type." << endl;

	if (parent->owner != NULL && parent->owner->getType() == "namespace")
		((Class*)symbol)->set_namespace_owner();

	((Class*)symbol)->add_attributes(modifiers);

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	node* current = nullptr;
	bool valid_class = false;

	if (it != parent->symbolMap.end())
	{

		if (it->first->getType() == "class")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			//optimize delete data when duplicate is found(we didn't make this optization trick)
			if (it->second.second != NULL)
				delete it->second.second;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Class*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			
			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Interface*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);
		}
		else
		{
			cout << "error : there is an error in line " << it->first->getLineNo() << ", there is defination with same name '" << it->first->getName() << "'" << endl;

			delete it->first;
			delete it->second.first;
			delete it->second.second;
			symbolMap.erase(it);

			add_scope(symbol);

			((Class*)symbol)->set_type_graph_position(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));

			current = ((Class*)symbol)->get_type_graph_position()->parent;
		}
	}
	else
	{
		add_scope(symbol);
		
		((Class*)symbol)->set_type_graph_position(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));
		
		current = ((Class*)symbol)->get_type_graph_position()->parent;

		valid_class = true;
	}

	int cnt = 0;

	while (!bases.empty())
	{
		cnt++;
		queue<string>list;
		string curr_part = "", str_list = bases.front();
		

		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*, bool> find_res = type_defination_tree->find(current, list);

		symbolTable* find_base = (symbolTable*)find_res.first;

		if (cnt != 1) {
			if (find_base != nullptr) {
				
				if (find_base->owner->getType() == "class")
					cout << "error : there is an error in line " << symbol->getLineNo() << ", no more than one extended class and it should be the first one after Colon." << endl;
				
				else if (find_base->owner->getType() == "interface")
					((Class*)symbol)->add_base(bases.front(), find_base);
				else cout << "error : there is an error in line " << symbol->getLineNo() << ", '" << bases.front() << "' is a namespace." << endl;

			}
			else if(find_res.second)
				cout << "error : there is an error in line " << symbol->getLineNo() << ", inhertince from non declared or inaccessible type '" << bases.front() << "'." << endl;

			else later_defination.push(make_pair(list, make_pair(current, symbol)));
		}

		else {

			if (find_base != nullptr)
			{

				if (((Class*)find_base->owner)->is_final())
					cout << "error : there is an error in line " << symbol->getLineNo() << ", cannot derive from sealed type '" << find_base->owner->getName() << "'.\n";

				else
				{
					((Class*)symbol)->add_base(bases.front(), find_base);
					if (valid_class)
					{
						parents.push_back(((Class*)find_base->owner)->get_type_graph_position());
						type_defination_tree->set_base_class(((Class*)find_base->owner)->getName(), ((Class*)find_base->owner)->get_type_graph_position(), ((Class*)symbol)->get_type_graph_position());
					}
				}
			}

			else if (find_res.second)
			{
				cout << "error : there is an error in line " << symbol->getLineNo() << ", inhertince from non declared or inaccessible type '" << bases.front() << "'." << endl;
				((Class*)symbol)->add_base("", nullptr);
			}
			else 
			{
				((Class*)symbol)->add_base(symbol->getName(), nullptr);

				later_defination.push(make_pair(list, make_pair(current, symbol)));
			}
		}

		bases.pop();
	}

	return;
}

void symbolTable::addInterface(Symbol* symbol, queue<string>bases, queue<string>&modifiers)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	if (parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		cout << "error : there is an error in line " << symbol->getLineNo() << " member names cannot be the same as their enclosing type." << endl;

	if (parent->owner != NULL && parent->owner->getType() == "namespace")
		((Interface*)symbol)->set_namespace_owner();

	((Interface*)symbol)->add_attributes(modifiers);

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	node* current = nullptr;

	if (it != parent->symbolMap.end())
	{

		if (it->first->getType() == "class")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			//optimize delete data when duplicate is found(we didn't make this optization trick)
			if (it->second.second != NULL)
				delete it->second.second;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Class*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;

			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Interface*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);
		}
		else
		{
			cout << "error : there is an error in line " << it->first->getLineNo() << ", there is defination with same name '" << it->first->getName() << "'" << endl;

			delete it->first;
			delete it->second.first;
			delete it->second.second;
			symbolMap.erase(it);

			add_scope(symbol);

			((Interface*)symbol)->set_type_graph_position(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));

			current = ((Interface*)symbol)->get_type_graph_position()->parent;
		}
	}
	else
	{
		add_scope(symbol);

		((Interface*)symbol)->set_type_graph_position(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));

		current = ((Interface*)symbol)->get_type_graph_position()->parent;

	}


	while (!bases.empty())
	{
		queue<string>list;
		string curr_part = "", str_list = bases.front();


		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*, bool> find_res = type_defination_tree->find(current, list);

		symbolTable* find_base = (symbolTable*)find_res.first;

		if (find_base != nullptr) {

			if (find_base->owner->getType() == "class")
				cout << "error : there is an error in line " << symbol->getLineNo() << ", '" << bases.front() << "' is class and interfaces cant extend classes." << endl;

			else if (find_base->owner->getType() == "interface")
				((Interface*)symbol)->add_base(bases.front(), find_base);

			else cout << "error : there is an error in line " << symbol->getLineNo() << ", '" << bases.front() << "' is a namespace." << endl;

		}

		else if (find_res.second)
			cout << "error : there is an error in line " << symbol->getLineNo() << ", Implemented from non declared or inaccessible interface '" << bases.front() << "'." << endl;

		else later_defination.push(make_pair(list, make_pair(current, symbol)));

		bases.pop();
	}

	return;
}

void symbolTable::addChild(symbolTable* st)
{
	this->childs.push_back(st);
	return;
}

bool symbolTable::closeScope()
{
	
	if (!openBrackets.empty())
	{
		if (openBrackets.top()->owner->getType() == "class" || openBrackets.top()->owner->getType() == "interface" || openBrackets.top()->owner->getType() == "namespace")
			type_defination_tree->end_node();
		openBrackets.pop();
		return true;
	}
	return false;
}

Symbol* symbolTable::get_owner()
{
	return owner;
}

string symbolTable::get_owner_name()
{
	return owner->getName();
}

symbolTable::~symbolTable()
{

}

