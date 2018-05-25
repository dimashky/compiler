#include "symbolTable.h"
#include "Class.h"
#include "class_tree.h"
#include"LocalVariable.h"
#include"Field.h"
#include"Method.h"
#include "../Error Handler/error_handler.h"
#include "../Symbol Table/Namespace.h"
#include "../AST/Object/Procedure.h"

extern errorHandler error_handler;

int symbolTable::is_main = 0;
symbolTable* symbolTable::object_ref = nullptr;
vector<node*> symbolTable::parents = vector<node*>();
vector<pair<node*, pair<pair<int, int>, pair<int, int> > > > symbolTable::using_namespaces = vector<pair<node*, pair<pair<int, int>, pair<int, int> > > >();
class_tree* symbolTable::type_defination_tree = new class_tree();
stack<symbolTable*> symbolTable::openBrackets = stack<symbolTable*>();
queue<pair<Symbol*, symbolTable*>> symbolTable::later_defination_override = queue<pair<Symbol*, symbolTable*>>();
queue<pair<symbolTable*, symbolTable*>> symbolTable::extended_abstract_classes = queue<pair<symbolTable*, symbolTable*>>();
queue< pair<queue<string>, pair<node*, Symbol* > > > symbolTable::later_defination = queue< pair<queue<string>, pair<node*, Symbol* > > >();
queue< pair<queue<string>, pair<node*, Symbol* > > > symbolTable::later_defination_var = queue< pair<queue<string>, pair<node*, Symbol* > > >();
vector<symbolTable*> symbolTable::deleted = vector<symbolTable*>();
queue<symbolTable*>  symbolTable::class_inhertance_abstract = queue<symbolTable* > ();
Symbol* symbolTable::mainRef = nullptr;

symbolTable::symbolTable(symbolTable* parent, Symbol* owner)
{
	this->parent = parent;
	this->owner = owner;
	if (this->parent != nullptr) {
		this->valid = this->parent->valid;
	}
	else this->valid = true;
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
			
			//add to deleted vector
			it->second.second->setAsInvalid();
			if (it->second.second->parent->valid)
				deleted.push_back(it->second.second);

			it->second.first = new symbolTable(parent, symbol);
			openBrackets.push(it->second.first);
			type_defination_tree->down_specific_child(symbol->getName());
		}
	}
	else
	{
		add_scope(symbol);
		((Namespace*)symbol)->setTypePositionGraph(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));
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

void symbolTable::addMethod(Symbol* symbol, queue<string>&modifiers, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > parameters, queue<int>params_dimension, queue<Node*>var_init, bool known_type, bool is_body)
{

	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();
	

	((Method*)symbol)->add_parametars(parameters, params_dimension,var_init);
	
	((Method*)symbol)->add_attributes(modifiers, parent->owner->getType(), is_body);

	// is correct abstract method
	if (!is_body && ((Method*)symbol)->get_is_abstract()  && !((Method*)symbol)->get_is_private() && parent->owner != NULL && parent->owner->getType() == "class" && ((Class*)parent->owner)->get_is_abstract())
		((Method*)symbol)->set_exist_ovrride(true);
    // name method same name class  
	if (((Method*)symbol)->get_return_type() == "" && parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() != symbol->getName())
		error_handler.add(error(symbol->getLineNo(), -1, "error, Method must have a return type or member names must be the same a class name."));

	//the same as their enclosing type
	if (((Method*)symbol)->get_return_type() != "" && parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		error_handler.add(error(symbol->getLineNo(), -1, "error, member names cannot be the same as their enclosing type."));

	// abstract method without abstract class 
	if (((Method*)symbol)->get_return_type() != "" && parent->owner != NULL && parent->owner->getType() == "class" && ((Method*)symbol)->get_is_abstract() && !((Class*)parent->owner)->get_is_abstract())
		error_handler.add(error(symbol->getLineNo(), -1, "error, '" + ((Method*)symbol)->getName() + "' is abstract but it is contained in non-abstract class '" + ((Class*)parent->owner)->getName() + "'."));

	// more Main method
	if (symbol->getName() == "Main" && ((Method*)symbol)->get_is_static() && parent->owner->getType() == "class")
	{
		if (symbolTable::is_main != 0)
			error_handler.add(error(symbol->getLineNo(), -1, "error, a program has more Main method ."));
		else {
			symbolTable::mainRef = symbol;
		}
		symbolTable::is_main++;
	}

	// error for override method 
	if (((Method*)symbol)->get_return_type() != "" && parent->owner != NULL && parent->owner->getType() == "class" && ((Method*)symbol)->get_is_override()) // if override
	{
		symbolTable* tempEx = ((Class *)parent->owner)->get_extended_class().second;
		
		while (tempEx != nullptr)
		{
			map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator itex = tempEx->symbolMap.find(symbol);
			
			if (itex != tempEx->symbolMap.end() && !((Method*)itex->first)->get_is_private()) // if is method
			{  
				bool correctOverride = true;
				if (((Method*)symbol)->get_return_type() == ((Method*)itex->first)->get_return_type())
					; // if same return type
				else {
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->owner->getName() + "." + ((Method*)symbol)->getName() + "()': return type must be '" + ((Method*)itex->first)->get_return_type() + "' to match overridden member '" + itex->second.first->parent->get_owner_name() + "." + ((Method*)symbol)->getName() + "()'."));
					correctOverride = false; 
				}
				if (((Method*)itex->first)->get_is_virtual() || ((Method*)itex->first)->get_is_abstract() || ((Method*)itex->first)->get_is_override())
					;// is virtual or abstract or override
				else {
					error_handler.add(error(symbol->getLineNo(), -1, "error, cannot override inherited member '" + itex->second.first->parent->get_owner_name() + "." + ((Method*)symbol)->getName() + "()' because it is not marked virtual, abstract, or override"));
					correctOverride = false;
				}
				if (((Method*)itex->first)->get_is_public() == ((Method*)symbol)->get_is_public() && ((Method*)itex->first)->get_is_protected() == ((Method*)symbol)->get_is_protected() && ((Method*)itex->first)->get_is_internal() == ((Method*)symbol)->get_is_internal())
					; //  is same modifiers
				else {
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->owner->getName() + "." + ((Method*)symbol)->getName() + "()': cannot change access modifiers when overriding "));
					correctOverride = false;
				}
				if (!(((Method*)itex->first)->is_final()))
					;
				else {
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->owner->getName() + "." + ((Method*)symbol)->getName() + "()': cannot override inherited member '" + itex->second.first->parent->get_owner_name() + "." + ((Method*)symbol)->getName() + "()' because it is sealed"));
					correctOverride = false;
				}
				if (correctOverride && ((Method*)itex->first)->get_is_abstract() && ((Method*)itex->first)->get_exist_ovrride())
				{
					((Method*)symbol)->set_must_ovrride(false);
				}
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
			((Method*)symbol)->set_return_type(((symbolTable*)ref.first)->get_owner());

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

			it->second.second->setAsInvalid();
			if (it->second.second->parent->valid)
				deleted.push_back(it->second.second);

			current = ((Class*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			error_handler.add(error(symbol->getLineNo(), -1, "error, there is defination with same name '" + symbol->getName() + "'."));

			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			it->second.second->setAsInvalid();
			if (it->second.second->parent->valid)
				deleted.push_back(it->second.second);

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
	if (bases.size() == 0 && symbol->getName() != "object")
		((Class*)symbol)->set_extended_class(make_pair("object", symbolTable::object_ref));

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

			else {
				later_defination.push(make_pair(list, make_pair(current, symbol)));
				class_inhertance_abstract.push(openBrackets.top());
			}
		}

		else {
			if (find_base != nullptr)
			{
				if (find_base->owner->getType() == "class")
				{
				
					if (((Class*)find_base->owner)->is_final())
					{
						((Class*)symbol)->set_extended_class(make_pair("object", symbolTable::object_ref));

						error_handler.add(error(symbol->getLineNo(), -1, "error, cannot derive from sealed type '" + find_base->owner->getName() + "'."));
					}
					else
					{
						((Class*)symbol)->set_extended_class(make_pair(bases.front(), find_base));
						if (valid_class)
						{
							parents.push_back(((Class*)find_base->owner)->get_type_graph_position());
							type_defination_tree->add_base(((Class*)find_base->owner)->getName(), ((Class*)find_base->owner)->get_type_graph_position(), ((Class*)symbol)->get_type_graph_position());
							

							// class is extend from abstruct class
							if (!(((Class*)symbol)->get_is_abstract()) && (((Class*)find_base->owner)->get_is_abstract()))
								extended_abstract_classes.push(make_pair(openBrackets.top(), find_base));
							
						}
						 
					}
				}
				else if (find_base->owner->getType() == "namespace")
				{
					((Class*)symbol)->set_extended_class(make_pair("object", symbolTable::object_ref));
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + find_base->owner->getName() + "' is a namespace."));
				}
				else if (find_base->owner->getType() == "interface")
				{
					((Class*)symbol)->set_extended_class(make_pair("object", symbolTable::object_ref));
					((Class*)symbol)->add_base(bases.front(), find_base);
				}

				else
				{
					((Class*)symbol)->set_extended_class(make_pair("object", symbolTable::object_ref));
					error_handler.add(error(symbol->getLineNo(), -1, "error, inhertince from non declared , inaccessible type or it's form circular base class depedency '" + bases.front() + "'."));
				}
			}

			else if (find_res.second)
			{
				((Class*)symbol)->set_extended_class(make_pair("object", symbolTable::object_ref));
				error_handler.add(error(symbol->getLineNo(), -1, "error,  inhertince from non declared , inaccessible type or it's form circular base class depedency '" + bases.front() + "'."));
			}
			else
			{
				((Class*)symbol)->set_extended_class(make_pair(symbol->getName(), nullptr));

				later_defination.push(make_pair(list, make_pair(current, symbol)));
				class_inhertance_abstract.push(openBrackets.top());

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
			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			it->second.second->setAsInvalid();
			if (it->second.second->parent->valid)
				deleted.push_back(it->second.second);

			current = ((Class*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			error_handler.add(error(symbol->getLineNo(), -1, "error, there is defination with same name '" + symbol->getName() + "'"));

			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);


			it->second.second->setAsInvalid();
			if (it->second.second->parent->valid)
				deleted.push_back(it->second.second);


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
		{
			later_defination.push(make_pair(list, make_pair(current, symbol)));
			class_inhertance_abstract.push(openBrackets.top());

		}
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
			if (openBrackets.top()->owner->getType() == "class" && !((Class*)openBrackets.top()->owner)->get_have_constructor() && !((Class*)openBrackets.top()->owner)->get_is_static())
			{
				Method* defaultConstructer = new Method(queue<string>(), "", openBrackets.top()->owner->getName(), openBrackets.top()->owner->getLineNo(), 0);
				addMethod(defaultConstructer, queue<string>(), queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(),queue<int>(),queue<Node*>(), true ,true  );
				defaultConstructer->setPublic();
			
				Procedure* ns = new Procedure(defaultConstructer, Node::current);
				ns->setSymbolTable(symbolTable::openBrackets.top());
				((Procedure*)Node::current)->add(ns);

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
	for (int i = 0;i < childs.size();i++)
		if (childs[i] != nullptr)
			delete childs[i];
	childs.clear();

	for (map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 >::iterator it = symbolMap.begin();it != symbolMap.end();it++)
	{
		if (it->second.first != nullptr)
			delete it->second.first;
		if (it->second.second != nullptr)
			delete it->second.second;
	}

	symbolMap.clear();
	if (owner != nullptr)
		delete owner;
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
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'%s\\n`class`', shape: 'box', color:'#016FB9'},", nodeID, owner->getName().c_str());
		else if (owner->getType() == "interface")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'%s\\n_interface_', shape: 'box', color:'#015B98'},", nodeID, owner->getName().c_str());
		else if (owner->getType() == "namespace")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'%s\\n`namespace`', shape: 'box', color:'#9A031E'},", nodeID, owner->getName().c_str());
		else if (owner->getType() == "field")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'%s\\n`%s fields`', shape: 'box', color:'#4CB944'},", nodeID, ((Field*)owner)->getName().c_str(), ((Field*)owner)->get_type_name().c_str());
		else if (owner->getType() == "localvariable")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'%s\\n`%s LocalVar`', shape: 'box', color:'#FFC07F'},", nodeID, ((LocalVariable*)owner)->getName().c_str(), ((LocalVariable*)owner)->get_type_name().c_str());
		else if (owner->getType() == "method")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'%s\\n`Method`', shape: 'box', color:'#EF476F'},", nodeID, ((Method*)owner)->getName().c_str());
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

void symbolTable::setAsInvalid() {
	valid = false;
}
//maybe 'this' pass to here and cause a bug Notify !!

Symbol* symbolTable::findIdentifier(Symbol* symbol, symbolTable* identifierScope, Symbol* lastSymbol) {

	bool sameClass = true;

	symbolTable* currentScope;

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 >::iterator it;

	//check if id equal 'this' or no !!

	if (symbol->getName() == "this" || symbol->getName() == "base") {

		if (lastSymbol != nullptr)
			return nullptr;

		currentScope = identifierScope;

		while (currentScope != nullptr) {

			if (currentScope->get_owner() != nullptr && currentScope->get_owner()->getType() == "class")
				break;



			currentScope = currentScope->get_parent();
		}

		// return same class
		if (symbol->getName() == "this")
		{
			if (symbol->getType() == "method") {
				symbol->setName(currentScope->get_owner_name());
				it = currentScope->symbolMap.find(symbol);
				if (it != currentScope->symbolMap.end()) {
					return it->first;
				}
				symbol->setColNo(-15);
				return symbol;
			}
			return currentScope->get_owner();
		}
		//return base class
		if (symbol->getType() == "method") {
			currentScope = ((Class*)currentScope->get_owner())->get_extended_class().second;
			symbol->setName(currentScope->get_owner_name());
			it = currentScope->symbolMap.find(symbol);
			if (it != currentScope->symbolMap.end()) {
				return it->first;
			}
			symbol->setColNo(-15);
			return symbol;
		}
		return ((Class*)currentScope->get_owner())->get_extended_class().second->get_owner();
	}

	if (lastSymbol) {

		if (lastSymbol->getType() == "class") {
			currentScope = (symbolTable*)((Class*)lastSymbol)->get_type_graph_position()->stPTR;
		}
		else if (lastSymbol->getType() == "namespace") {
			currentScope = (symbolTable*)((Namespace*)lastSymbol)->getTypePositionGraph()->stPTR;
		}
		
		while (identifierScope != nullptr) {

			if (identifierScope->get_owner() != nullptr && identifierScope->get_owner()->getType() == "class")
				break;

			identifierScope = identifierScope->get_parent();

		}


		if (currentScope != identifierScope) {
			sameClass = false;
		}
	}

	else 
		
		currentScope = identifierScope;


	if (currentScope->get_owner() == nullptr || currentScope->get_owner() != nullptr && currentScope->get_owner()->getType() != "class" && currentScope->get_owner()->getType() != "namespace") {
		

		//check if this id defined in same scope !!
		it = currentScope->symbolMap.find(symbol);
		
		if (it != currentScope->symbolMap.end()) {
			if (it->first->getLineNo() > symbol->getLineNo()) {
				symbol->setColNo(-15);
				return symbol;
			}
			return it->first;
		}

		//check if this id defined as local variable in parent scopes !!

		else {

			currentScope = currentScope->get_parent();

			while (currentScope != nullptr) {
				
				if (currentScope->get_owner() != nullptr && currentScope->get_owner()->getType() == "class")
				
					break;
				
				it = currentScope->symbolMap.find(symbol);

				if (it != currentScope->symbolMap.end()) {

					if (it->first->getLineNo() > symbol->getLineNo()) {
					
						symbol->setColNo(-15);
						
						return symbol;
					}

					return it->first;
				}

				currentScope = currentScope->get_parent();

			}
		}

	}
	
	//check if this id defined in same class !!

	it = currentScope->symbolMap.find(symbol);

	if (it != currentScope->symbolMap.end()) {
		bool isPrivate;
		if (it->first->getType() == "field") {
			isPrivate = ((Field*)it->first)->get_is_private();
		}
		else if (it->first->getType() == "method" && symbol->getType() == "method") {
			isPrivate = ((Method*)it->first)->get_is_private();
		}
		else {
			symbol->setColNo(-15);
			return symbol;
		}
		
		if (sameClass || !isPrivate)
			return it->first;

		symbol->setColNo(-15);

		return symbol;
	}
	else {

		if (symbol->getType() == "method") {

			Method::compare_status = false;

			it = currentScope->symbolMap.find(symbol);

			if (it != currentScope->symbolMap.end()) {

				Method::compare_status = true;

				return it->first;
			}

			Method::compare_status = true;
		}
		
		currentScope = ((Class*)currentScope->get_owner())->get_extended_class().second;
	}

	//check if this id defined in base class

	while (currentScope != nullptr) {

		it = currentScope->symbolMap.find(symbol);

		if (it != currentScope->symbolMap.end()) {

			if (it->first->getType() != "class" && (symbol->getType() != "method" || symbol->getType() == it->first->getType())) {

				if (it->first->getType() == "field" && !((Field*)it->first)->get_is_private() || it->first->getType() == "method" && !((Method*)it->first)->get_is_private()) {
				
					return it->first;
				
				}

			}	

			symbol->setColNo(-15);

			return symbol;
		}
		else if (symbol->getType() == "method") {

			Method::compare_status = false;

			it = currentScope->symbolMap.find(symbol);

			if (it != currentScope->symbolMap.end()) {

				Method::compare_status = true;

				return it->first;
			}

			Method::compare_status = true;

		}

		currentScope = ((Class*)currentScope->get_owner())->get_extended_class().second;
	}

	symbol->setColNo(-15);

	return symbol;
}

string symbolTable::getFullPath() {
	
	string parent, current;
	
	if (this->get_owner() != nullptr)
		current = this->get_owner()->getName();
	
	if (this->get_parent() != nullptr)
	{
		parent = this->get_parent()->getFullPath();
		if (parent != "")
			parent += '.';
	}
	return parent + current;
}

bool symbolTable::isParent(Symbol* child, Symbol* parent) {
	
	if (child == parent)
		return true;
	while (((Class*)child)->get_extended_class().second != nullptr) {
		child = ((Class*)child)->get_extended_class().second->get_owner();
		if (child == parent) {
			return true;
		}
	}
	return false;
}


bool symbolTable::checkMethodOverriding(Symbol* method, Symbol* currentClass) {
	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 >::iterator it;
	symbolTable* baseClass = ((Class*)currentClass)->get_extended_class().second;
	if (((Method*)method)->isNew()) {
		return false;
	}
	while (baseClass != nullptr) {
		it = baseClass->symbolMap.find(method);
		if (it != baseClass->symbolMap.end()) {
			if (it->first->getType() == "method" && ((Method*)it->first)->get_is_public() && (((Method*)it->first)->get_is_override() || ((Method*)it->first)->get_is_virtual() || ((Method*)it->first)->get_is_abstract())) {
				return true;
			}
		}
		baseClass = ((Class*)baseClass->get_owner())->get_extended_class().second;
	}
	return false;
}




Symbol* symbolTable::findOverrideFunction(Symbol* method, symbolTable* currentScope, int paramIndex, Symbol* lastSymbol) {
	if (paramIndex == ((Method*)method)->get_parametars_count()) {
		return symbolTable::findIdentifier(method, currentScope, lastSymbol);
	}
	LocalVariable* param = ((Method*)method)->getParameter(paramIndex);
	if (param->isComplex()) {
		Symbol* initType = param->getTypeRef(), *currentType = initType;

		while (currentType != nullptr) {
			param->set_type(currentType);
			Symbol* findMethod = findOverrideFunction(method, currentScope, paramIndex + 1, lastSymbol);
			if (findMethod->getColNo() != -15) {
				param->set_type(initType);
				return findMethod;
			}
			if (((Class*)param->getTypeRef())->get_extended_class().second != nullptr)
				currentType = ((Class*)param->getTypeRef())->get_extended_class().second->get_owner();
			else currentType = nullptr;
		}
		param->set_type(initType);
		method->setColNo(-15);
		return method;
	}
	else {
		if (param->get_type_name() == "FLOAT") {
			Symbol* findMethod = findOverrideFunction(method, currentScope, paramIndex + 1, lastSymbol);
			if (findMethod->getColNo() != -15) {
				return findMethod;
			}
			param->set_type_name("INT");
			findMethod = findOverrideFunction(method, currentScope, paramIndex + 1, lastSymbol);
			param->set_type_name("FLOAT");
			return findMethod;
		}
		return findOverrideFunction(method, currentScope, paramIndex + 1, lastSymbol);
	}

}