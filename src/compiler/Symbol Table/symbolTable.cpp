#include "symbolTable.h"
#include "Class.h"
#include "class_tree.h"
#include"LocalVariable.h"
#include"Field.h"
#include"Method.h"
#include "../Error Handler/error_handler.h"
extern errorHandler error_handler;

int symbolTable::is_main = 0;
vector<node*> symbolTable::parents = vector<node*>();
vector<pair<node*, pair<pair<int, int>, pair<int, int> > > > symbolTable::using_namespaces = vector<pair<node*, pair<pair<int, int>, pair<int, int> > > >();
class_tree* symbolTable::type_defination_tree = new class_tree();
stack<symbolTable*> symbolTable::openBrackets = stack<symbolTable*>();
queue<pair<Symbol*, symbolTable*>> symbolTable::later_defination_override = queue<pair<Symbol*, symbolTable*>>();
queue< pair<queue<string>, pair<node*, Symbol* > > > symbolTable::later_defination = queue< pair<queue<string>, pair<node*, Symbol* > > >();
queue< pair<queue<string>, pair<node*, Symbol* > > > symbolTable::later_defination_var = queue< pair<queue<string>, pair<node*, Symbol* > > >();

symbolTable::symbolTable(symbolTable* parent, Symbol* owner)
{
	this->parent = parent;
	this->owner = owner;
}

map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>& symbolTable::get_symbolMap()
{
	return symbolMap;
}

symbolTable* symbolTable::get_parent()
{
	return parent;
}


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

void symbolTable::add_symbol_without_open_brackets(Symbol* symbol)
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		parent = this;
	else parent = openBrackets.top();

	newst = new symbolTable(parent, symbol);
	symbolTable* err = NULL;
	parent->symbolMap.insert(make_pair(symbol, make_pair(newst, err)));

	return;
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
		if (it->first->getType() == "namespace")
		{
			openBrackets.push(it->second.first);
			type_defination_tree->down_specific_child(symbol->getName());
		}
		else 
		{
			string parent_name;
			if (parent->owner == nullptr)
				parent_name = "<global-namespace>";
			else parent_name = parent->owner->getName();
			error_handler.add(error(it->first->getLineNo(), -1, "error, The namespace '" + parent_name + "' already contains a definition for '" + symbol->getName() + "'."));
			it->second.second = it->second.first;
			it->second.first = new symbolTable(parent, symbol);
			openBrackets.push(it->second.first);
			type_defination_tree->down_specific_child(symbol->getName());
		}
	}
	else
	{
		add_scope(symbol);
		type_defination_tree->add_node(symbol->getName(), openBrackets.top());
	}
	return;
}


void symbolTable::addField(Symbol* symbol, bool known_type)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	if (!known_type)
	{
		queue<string>list;
	
		string curr_part = "", str_list = ((Field*)symbol)->get_type_name();

		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*, bool> ref = type_defination_tree->find(((Class*)parent->owner)->get_type_graph_position(), list);
		
		if (ref.first != nullptr)
			((Field*)symbol)->set_type(((symbolTable*)ref.first)->owner);
		
		else if (ref.second)
			error_handler.add(error(symbol->getLineNo(), -1, "error, the type name '" + ((Field*)symbol)->get_type_name() + "' couldn't be found."));
		
		else
			later_defination_var.push(make_pair(list, make_pair(((Class*)parent->owner)->get_type_graph_position(), symbol)));
	}

	if (parent->owner != NULL && parent->owner->getName() == symbol->getName())
	{
		error_handler.add(error(symbol->getLineNo(), -1, "error,  member names cannot be the same as their enclosing type."));
		return;
	}

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	if (it != parent->symbolMap.end())
		error_handler.add(error(symbol->getLineNo(), -1, "error, The type '" + parent->owner->getName() + "' already contains a definition for '" + symbol->getName() + "'."));
	
	else
		add_symbol_without_open_brackets(symbol);

	return;
}

void symbolTable::addLocalVariable(Symbol* symbol, bool known_type)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	if (!known_type)
	{
		queue<string>list;
		string curr_part = "", str_list = ((LocalVariable*)symbol)->get_type_name();


		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		symbolTable* parent_class = parent;

		while (parent_class->owner == nullptr || parent_class->owner != nullptr && parent_class->owner->getType() != "class")
			parent_class = parent_class->parent;

		pair<void*, bool> ref = type_defination_tree->find(((Class*)parent_class->owner)->get_type_graph_position(), list);

		if (ref.first != nullptr)
			((LocalVariable*)symbol)->set_type(((symbolTable*)ref.first)->owner);
		else if (ref.second)
			error_handler.add(error(symbol->getLineNo(), -1, "error, the type name '" + ((LocalVariable*)symbol)->get_type_name() + "' couldn't be found."));
		else
			later_defination_var.push(make_pair(list, make_pair(((Class*)parent_class->owner)->get_type_graph_position(), symbol)));
	}

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it2 = parent->symbolMap.find(symbol);
	
	if (it2 != parent->symbolMap.end())
		error_handler.add(error(symbol->getLineNo(), -1, "error, The local variable name '" + symbol->getName() + "' is duplicate."));
	
	else
		add_symbol_without_open_brackets(symbol);

	return;
}

void symbolTable::check_method(symbolTable* curr, map<string, bool>check_map)
{
	for (map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 > ::iterator it = curr->symbolMap.begin(); it != curr->symbolMap.end();)
		if (check_map.find(it->first->getName()) != check_map.end())
		{
			error_handler.add(error(it->first->getLineNo(), -1, "error, The local variable name '" + it->first->getName() + "' is duplicate."));

			if (it == curr->symbolMap.begin())
			{
				curr->symbolMap.erase(it);
				it = curr->symbolMap.begin();
			}
			else
			{
				map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 > ::iterator it2 = it;
				it++;
				curr->symbolMap.erase(it2);
			}
		}
		else
			check_map[it->first->getName()] = true, it++;

	for (int i = 0; i < curr->childs.size(); i++)
		check_method(curr->childs[i], check_map);

	return;
}

void symbolTable::addMethod(Symbol* symbol, queue<string>&modifiers, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > parameters, bool known_type, bool is_body)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();
	
	((Method*)symbol)->add_parametars(parameters);
	
	((Method*)symbol)->add_attributes(modifiers, parent->owner->getType(), is_body);

	if (((Method*)symbol)->get_return_type() == "" && parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() != symbol->getName())
		error_handler.add(error(symbol->getLineNo(), -1, "error, Method must have a return type or member names must be the same a class name."));

	if (((Method*)symbol)->get_return_type() != "" && parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		error_handler.add(error(symbol->getLineNo(), -1, "error, member names cannot be the same as their enclosing type."));

	if (((Method*)symbol)->get_return_type() != "" && parent->owner != NULL && parent->owner->getType() == "class" && ((Method*)symbol)->get_is_abstract() && !((Class*)parent->owner)->get_is_abstract())
		error_handler.add(error(symbol->getLineNo(), -1, "error, '" + ((Method*)symbol)->getName() + "' is abstract but it is contained in non-abstract class '" + ((Class*)parent->owner)->getName() + "'."));

	if (symbol->getName() == "Main" && ((Method*)symbol)->get_is_static() && parent->owner->getType() == "class")
	{
		if (symbolTable::is_main != 0)
			error_handler.add(error(symbol->getLineNo(), -1, "error, a program has more Main method ."));

		symbolTable::is_main++;
	}

	/// error for override method 
	if (((Method*)symbol)->get_return_type() != "" && parent->owner != NULL && parent->owner->getType() == "class" && ((Method*)symbol)->get_is_override()) // if override
	{
		symbolTable* tempEx = ((Class *)parent->owner)->get_extended_class().second;

		while (tempEx != nullptr)
		{
			map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator itex = tempEx->symbolMap.find(symbol);
			
			if (itex != tempEx->symbolMap.end() && !((Method*)itex->first)->get_is_private()) // if is method
			{  

				if (((Method*)symbol)->get_return_type() == ((Method*)itex->first)->get_return_type())
					; // if same return type
				else
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->owner->getName() + "." + ((Method*)symbol)->getName() + "()': return type must be '" + ((Method*)itex->first)->get_return_type() + "' to match overridden member '" + itex->second.first->parent->get_owner_name() + "." + ((Method*)symbol)->getName() + "()'."));

				if (((Method*)itex->first)->get_is_virtual() || ((Method*)itex->first)->get_is_abstract() || ((Method*)itex->first)->get_is_override())
					;// is virtual or abstract or override
				else
					error_handler.add(error(symbol->getLineNo(), -1, "error, cannot override inherited member '" + itex->second.first->parent->get_owner_name() + "." + ((Method*)symbol)->getName() + "()' because it is not marked virtual, abstract, or override"));

				if (((Method*)itex->first)->get_is_public() == ((Method*)symbol)->get_is_public() && ((Method*)itex->first)->get_is_protected() == ((Method*)symbol)->get_is_protected() && ((Method*)itex->first)->get_is_internal() == ((Method*)symbol)->get_is_internal())
					; //  is same modifiers
				else
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->owner->getName() + "." + ((Method*)symbol)->getName() + "()': cannot change access modifiers when overriding "));

				if (((Method*)itex->first)->is_final())
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->owner->getName() + "." + ((Method*)symbol)->getName() + "()': cannot override inherited member '" + itex->second.first->parent->get_owner_name() + "." + ((Method*)symbol)->getName() + "()' because it is sealed"));
				break;
			}
			else
				tempEx = ((Class *)tempEx->owner)->get_extended_class().second;
		}

		if (tempEx == nullptr)
			later_defination_override.push(make_pair(symbol, parent));

	}


	if (!known_type)
	{
		queue<string>list;
		string curr_part = "", str_list = ((Field*)symbol)->get_type_name();


		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*, bool> ref = type_defination_tree->find(((Class*)parent->owner)->get_type_graph_position(), list);

		if (ref.first != nullptr)
			((Method*)symbol)->set_return_type(((symbolTable*)ref.first)->owner);

		else if (ref.second)
			error_handler.add(error(symbol->getLineNo(), -1, "error,  the type name '" + ((Method*)symbol)->get_return_type() + "' couldn't be found"));

		else
			later_defination_var.push(make_pair(list, make_pair(((Class*)parent->owner)->get_type_graph_position(), symbol)));
	}

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);


	if (it != parent->symbolMap.end())
	{
		if (it->first->getType() != "method")
			error_handler.add(error(symbol->getLineNo(), -1, " The type '" + parent->owner->getName() + "' already contains a definition for '" + symbol->getName() + "'."));

		else
			error_handler.add(error(symbol->getLineNo(), -1, "error, The type '" + parent->owner->getName() + "' already defines a member called  '" + symbol->getName() + "' with same parametars."));

		it->second.second = new symbolTable(parent, symbol);

		openBrackets.push(it->second.second);
	}
	else
	{
		if (((Method*)symbol)->get_return_type() == "" && parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
			((Class*)parent->owner)->set_have_constructor();
		add_scope(symbol);
	}
	symbolTable *top = openBrackets.top();
	vector<LocalVariable*>  &par = ((Method*)symbol)->get_parameters();
	for (int i = 0;i < par.size();i++)
	{
		if (!parameters.front().second)
		{
			queue<string>list;
			string curr_part = "", str_list = par[i]->get_type_name();


			for (int i = 0;i < str_list.length();i++)
			{
				if (str_list[i] == '.')
					list.push(curr_part), curr_part = "";
				else curr_part += str_list[i];
			}

			list.push(curr_part);

			pair<void*, bool> ref = type_defination_tree->find(((Class*)parent->owner)->get_type_graph_position(), list);

			if (ref.first != nullptr)
				par[i]->set_type(((symbolTable*)ref.first)->owner);
			
			else if (ref.second)
				error_handler.add(error(par[i]->getLineNo(), -1, "error, the type name '" + par[i]->get_type_name() + "' couldn't be found."));

			else
				later_defination_var.push(make_pair(list, make_pair(((Class*)parent->owner)->get_type_graph_position(), par[i])));
		}

		map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it2 = top->symbolMap.find(par[i]);
		
		if (it2 != top->symbolMap.end())
			error_handler.add(error(par[i]->getLineNo(), -1, "error, The parametar name '" + par[i]->getName() + "' is duplicate."));

		else
			add_symbol_without_open_brackets(par[i]);

		parameters.pop();
	}

	return;
}

void symbolTable::addClass(Symbol* symbol, queue<string>&bases, queue<string>&modifiers)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	if (parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		error_handler.add(error(symbol->getLineNo(), -1, "error, member names cannot be the same as their enclosing type."));

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
			error_handler.add(error(symbol->getLineNo(), -1, "error, there is defination with same name '" + symbol->getName() + "'"));

			//optimize delete data when duplicate is found(we didn't make this optization trick)
			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Class*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			error_handler.add(error(symbol->getLineNo(), -1, "error, there is defination with same name '" + symbol->getName() + "'."));

			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Interface*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);
		}
		else
		{

			while (it != parent->symbolMap.end())
			{
				error_handler.add(error(it->first->getLineNo(), -1, "error, The type '" + parent->owner->getName() + "' already contains a definition for '" + symbol->getName() + "'."));

				//delete it->first;
				//delete it->second.first;
				//delete it->second.second;

				parent->symbolMap.erase(it);
				it = parent->symbolMap.find(symbol);
			}

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

		for (int i = 0; i < str_list.length(); i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*, bool> find_res = type_defination_tree->find(current, list, ((Class*)symbol)->get_type_graph_position());

		symbolTable* find_base = (symbolTable*)find_res.first;


		if (cnt != 1) {
			if (find_base != nullptr) {

				if (find_base->owner->getType() == "class")
					error_handler.add(error(symbol->getLineNo(), -1, "error, no more than one extended class and it should be the first one after Colon."));

				else if (find_base->owner->getType() == "interface")
					((Class*)symbol)->add_base(bases.front(), find_base);
				else
					error_handler.add(error(symbol->getLineNo(), -1, "error, The local variable name '" + bases.front() + "' is a namespace."));

			}
			else if (find_res.second)
				error_handler.add(error(symbol->getLineNo(), -1, "error, inhertince from non declared or inaccessible type '" + bases.front() + "'."));

			else later_defination.push(make_pair(list, make_pair(current, symbol)));
		}

		else {

			if (find_base != nullptr)
			{
				if (find_base->owner->getType() == "class")
				{
					if (((Class*)find_base->owner)->is_final())
						error_handler.add(error(symbol->getLineNo(), -1, "error, cannot derive from sealed type '" + find_base->owner->getName() + "'."));

					else
					{
						((Class*)symbol)->set_extended_class(make_pair(bases.front(), find_base));
						if (valid_class)
						{
							parents.push_back(((Class*)find_base->owner)->get_type_graph_position());
							type_defination_tree->add_base(((Class*)find_base->owner)->getName(), ((Class*)find_base->owner)->get_type_graph_position(), ((Class*)symbol)->get_type_graph_position());
						}
					}
				}
				else if (find_base->owner->getType() == "namespace")
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + find_base->owner->getName() + "' is a namespace."));

				else if (find_base->owner->getType() == "interface")
					((Class*)symbol)->add_base(bases.front(), find_base);


				else
					error_handler.add(error(symbol->getLineNo(), -1, "error, inhertince from non declared , inaccessible type or it's form circular base class depedency '" + bases.front() + "'."));

			}

			else if (find_res.second)
			{
				error_handler.add(error(symbol->getLineNo(), -1, "error,  inhertince from non declared , inaccessible type or it's form circular base class depedency '" + bases.front() + "'."));
			}
			else
			{
				((Class*)symbol)->set_extended_class(make_pair(symbol->getName(), nullptr));

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
		error_handler.add(error(symbol->getLineNo(), -1, "error,  member names cannot be the same as their enclosing type."));

	if (parent->owner != NULL && parent->owner->getType() == "namespace")
		((Interface*)symbol)->set_namespace_owner();


	((Interface*)symbol)->add_attributes(modifiers);

	
	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	node* current = nullptr;

	bool valid_interface = false;


	if (it != parent->symbolMap.end())
	{
		if (it->first->getType() == "class")
		{
			error_handler.add(error(symbol->getLineNo(), -1, "error, there is defination with same name '" + symbol->getName() + "'"));

			//optimize delete data when duplicate is found(we didn't make this optization trick)
			if (it->second.second != NULL)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Class*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			error_handler.add(error(symbol->getLineNo(), -1, "error, there is defination with same name '" + symbol->getName() + "'"));

			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Interface*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);
		}
		else
		{
			while (it != parent->symbolMap.end())
			{
				error_handler.add(error(it->first->getLineNo(), -1, "error, The type '" + parent->owner->getName() + "' already contains a definition for '" + symbol->getName() + "'."));

	/*			delete it->first;
				delete it->second.first;
				delete it->second.second;
*/
				parent->symbolMap.erase(it);
				it = parent->symbolMap.find(symbol);
			}

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

		valid_interface = true;

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

		pair<void*, bool> find_res = type_defination_tree->find(current, list, ((Interface*)symbol)->get_type_graph_position());

		symbolTable* find_base = (symbolTable*)find_res.first;

		if (find_base != nullptr) {

			if (find_base->owner->getType() == "class")
				error_handler.add(error(symbol->getLineNo(), -1, "error,  '" + bases.front() + "' is class and interfaces cant extend classes."));

			else if (find_base->owner->getType() == "interface")
			{
				((Interface*)symbol)->add_base(bases.front(), find_base);
				if (valid_interface)
				{
					parents.push_back(((Class*)find_base->owner)->get_type_graph_position());
					type_defination_tree->add_base(((Class*)find_base->owner)->getName(), ((Interface*)find_base->owner)->get_type_graph_position(), ((Interface*)symbol)->get_type_graph_position());
				}
			}
			else
				error_handler.add(error(symbol->getLineNo(), -1, "error, '" + bases.front() + "' is a namespace."));

		}

		else if (find_res.second)
			error_handler.add(error(symbol->getLineNo(), -1, "error,  Implemented from non declared or inaccessible interface '" + bases.front() + "'."));

		else
			later_defination.push(make_pair(list, make_pair(current, symbol)));

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
		if (openBrackets.top()->owner != nullptr && (openBrackets.top()->owner->getType() == "class" || openBrackets.top()->owner->getType() == "interface" || openBrackets.top()->owner->getType() == "namespace"))
		{
			if (openBrackets.top()->owner->getType() == "class" && !((Class*)openBrackets.top()->owner)->get_have_constructor())
			{
				addMethod(new Method(queue<string>(), "", openBrackets.top()->owner->getName(), openBrackets.top()->owner->getLineNo(), 0), queue<string>(), queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(), true ,false );
				openBrackets.pop();
			}
			type_defination_tree->end_node();
		}
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

bool symbolTable::initPrintFiles()
{
	nodeFile = fopen("./visually output/js/SymbolTable/nodes.js", "w");
	edgeFile = fopen("./visually output/js/SymbolTable/edges.js", "w");
	if (nodeFile && edgeFile) {
		fprintf(nodeFile, "var nodes = [");
		fprintf(edgeFile, "var edges = [");
		return true;
	}
	else {
		return false;
	}
}

void symbolTable::closePrintFiles()
{
	fprintf(nodeFile, "];");
	fprintf(edgeFile, "];");
	fclose(nodeFile);
	fclose(edgeFile);
}
int symbolTable::print(int nodeID)
{
	if (owner != NULL) {
		if (owner->getType() == "class")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`class`', shape: 'box', color:'#016FB9'},", nodeID, owner->getName().c_str());
		else if (owner->getType() == "interface")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n_interface_', shape: 'box', color:'#015B98'},", nodeID, owner->getName().c_str());
		else if (owner->getType() == "namespace")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`namespace`', shape: 'box', color:'#9A031E'},", nodeID, owner->getName().c_str());
		else if (owner->getType() == "field")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`%s fields`', shape: 'box', color:'#4CB944'},", nodeID, ((Field*)owner)->getName().c_str(), ((Field*)owner)->get_type_name().c_str());
		else if (owner->getType() == "localvariable")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`%s LocalVar`', shape: 'box', color:'#FFC07F'},", nodeID, ((LocalVariable*)owner)->getName().c_str(), ((LocalVariable*)owner)->get_type_name().c_str());
		else if (owner->getType() == "method")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`Method`', shape: 'box', color:'#EF476F'},", nodeID, ((Method*)owner)->getName().c_str());
	}
	// scope
	if (owner == NULL && parent != NULL) {
		// skip empty scopes
		if (childs.size() != 0 || symbolMap.size() != 0)
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'black' }, label: '`scope`', shape: 'box', color:'#fff'},", nodeID);
	}
	// global namespace
	if (parent == NULL)
		fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*Global Namespace*\\n`namespace`', shape: 'box', color:'#182825'},", nodeID);

	int nextID = nodeID;

	for (auto item : symbolMap)
	{
		fprintf(edgeFile, "{from:%d,to:%d, dashes:true},", nodeID, nextID + 1);
		nextID = item.second.first->print(nextID + 1);
	}
	for (auto item : childs)
	{
		fprintf(edgeFile, "{from:%d,to:%d, dashes:true},", nodeID, nextID + 1);
		nextID = item->print(nextID + 1);
	}
	return nextID;
}

FILE* symbolTable::nodeFile;
FILE* symbolTable::edgeFile;