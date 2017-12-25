#include<iostream>
#include<vector>
#include "symbol_parser.h"
#include "../Error Handler/error_handler.h"
extern errorHandler error_handler;

using namespace std;
symbolParser::symbolParser()
{
	symboltable = new symbolTable(NULL, NULL);
}
void symbolParser::print(queue<string> &s1, char* s2)
{
	while (!s1.empty()) {
		cout << s1.front() << endl;
		s1.pop();
	}
	cout << s2 << endl;
}

void symbolParser::endScope()
{
	symboltable->closeScope();
}

void symbolParser::addNamespace(string name, int line_no, int col_no)
{
	Symbol* newNamespace = new Namespace(name, line_no, col_no);
	symboltable->addNamespace(newNamespace);
	return;
}

void symbolParser::addClass(queue<string>&modifiers, string className, queue<string> &bases, int line_no, int col_no)
{
	Symbol* newClass = new Class(className, line_no, col_no);
	symboltable->addClass(newClass, bases, modifiers);
	return;
}

void symbolParser::addInterface(queue<string>modifiers, string interfaceName, queue<string> bases, int line_no, int col_no)
{
	Symbol* newInterface = new Interface(interfaceName, line_no, col_no);
	symboltable->addInterface(newInterface, bases, modifiers);
	return;
}
void symbolParser::addField(queue<string>modifiers, string typeIdentifier, queue<string>identifiers, int line_no, int col_no, bool known_type)
{
	while (!identifiers.empty())
	{
		Symbol* newField = new Field(modifiers, typeIdentifier, identifiers.front(), line_no, col_no);
		symboltable->addField(newField, known_type);
		identifiers.pop();

	}
	return;

}


void symbolParser::addMethod(queue<string>modifiers, string typeIdentifier, string identifier, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > types_ids_parameters, int line_no, int col_no, bool known_type)
{
	Symbol* newMethod = new Method(modifiers, typeIdentifier, identifier, line_no, col_no);
	symboltable->addMethod(newMethod, modifiers, types_ids_parameters, known_type);
}


void symbolParser::add_scope()
{
	symboltable->add_scope();
}

void symbolParser::addLocalVariable(string typeIdentifier, queue<string>identifiers, bool known_type, bool constant, int line_no, int col_no)
{
	while (!identifiers.empty())
	{
		Symbol* newLocalVariable = new LocalVariable(typeIdentifier, identifiers.front(), false, constant, line_no, col_no);
		symboltable->addLocalVariable(newLocalVariable, known_type);
		identifiers.pop();
	}
	return;


}

void symbolParser::check_later_defination()
{
	while (!symbolTable::later_defination.empty())
	{
		if (symbolTable::later_defination.front().second.second->getType() == "class")
		{
			symbolTable* search = (symbolTable*)symbolTable::type_defination_tree->find(symbolTable::later_defination.front().second.first, symbolTable::later_defination.front().first, ((Class*)symbolTable::later_defination.front().second.second)->get_type_graph_position()).first;

			if (search != nullptr)
			{
				if (search->get_owner()->getType() == "class")
				{

					pair<string, symbolTable*> test = ((Class*)symbolTable::later_defination.front().second.second)->get_extended_class();

					if (test.second != nullptr || test.first == "")
						error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, "symbol parser error, no more than one extended class or it should be the first one after Colon."));
					else
					{
						if (((Class*)search->get_owner())->is_final())
						{
							string parent_name;
							while (!symbolTable::later_defination.front().first.empty())
							{
								parent_name += symbolTable::later_defination.front().first.front();
								symbolTable::later_defination.front().first.pop();
								if (!symbolTable::later_defination.front().first.empty())
									parent_name += '.';
							}
							string m = "symbol parser error, cannot derive from sealed type '" + parent_name + "'.";
							error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, m.c_str()));
						}

						else
						{

							((Class*)symbolTable::later_defination.front().second.second)->set_extended_class(make_pair(search->get_owner()->getName(), search));

							if (((Class*)symbolTable::later_defination.front().second.second)->get_type_graph_position() != nullptr)
							{
								symboltable->type_defination_tree->add_base(((Class*)search->get_owner())->getName(), (((Class*)search->get_owner()))->get_type_graph_position(), ((Class*)symbolTable::later_defination.front().second.second)->get_type_graph_position());
								symboltable->parents.push_back((((Class*)search->get_owner()))->get_type_graph_position());
							}
						}
					}
				}

				else if (search->get_owner()->getType() == "interface")
					((Interface*)symbolTable::later_defination.front().second.second)->add_base(search->get_owner()->getName(), search);

				else if (search->get_owner()->getType() == "namespace") {
					string m = "symmbol parser error, '" + search->get_owner()->getName() + "' is a namespace.";
					error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, m.c_str()));
				}
			}
			else
			{
				string parent_name;
				while (!symbolTable::later_defination.front().first.empty())
				{
					parent_name += symbolTable::later_defination.front().first.front();
					symbolTable::later_defination.front().first.pop();
					if (!symbolTable::later_defination.front().first.empty())
						parent_name += '.';
				}
				string m = " symmbol parser error, inhertince from non declared or inaccessible type '" + parent_name + "'.";
				error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, m.c_str()));
			}
		}

		else if (symbolTable::later_defination.front().second.second->getType() == "interface")
		{
			symbolTable* search = (symbolTable*)symbolTable::type_defination_tree->find(symbolTable::later_defination.front().second.first, symbolTable::later_defination.front().first, ((Interface*)symbolTable::later_defination.front().second.second)->get_type_graph_position()).first;

			if (search != nullptr)
			{

				if (search->get_owner()->getType() == "class")
				{
					string m = " symmbol parser error, '" + search->get_owner()->getName() + "' is class and interfaces cant extend classes.";
					error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, m.c_str()));
				}

				else if (search->get_owner()->getType() == "interface")
				{
					((Interface*)symbolTable::later_defination.front().second.second)->add_base(search->get_owner()->getName(), search);
					if (((Interface*)symbolTable::later_defination.front().second.second)->get_type_graph_position() != nullptr)
					{
						symboltable->type_defination_tree->add_base(((Class*)search->get_owner())->getName(), (((Class*)search->get_owner()))->get_type_graph_position(), ((Class*)symbolTable::later_defination.front().second.second)->get_type_graph_position());
						symboltable->parents.push_back((((Class*)search->get_owner()))->get_type_graph_position());
					}
				}
				else if (search->get_owner()->getType() == "namespace") {
					string m = "symmbol parser error, '" + search->get_owner()->getName() + "' is a namespace.";
					error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, m.c_str()));
				}
			}
			else
			{
				string parent_name;
				while (!symbolTable::later_defination.front().first.empty())
				{
					parent_name += symbolTable::later_defination.front().first.front();
					symbolTable::later_defination.front().first.pop();
					if (!symbolTable::later_defination.front().first.empty())
						parent_name += '.';
				}
				string m = "symmbol parser error, implemented from non declared or inaccessible interface '" + parent_name + "'.";
				error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, m.c_str()));
			}
		}
		symbolTable::later_defination.pop();
	}
}



void check_later_def_var()
{
	while (!symbolTable::later_defination_var.empty())
	{
		pair<queue<string>, pair<node*, Symbol* > > p = symbolTable::later_defination_var.front();
		pair<void*, bool> ref = symbolTable::type_defination_tree->find(p.second.first, p.first);
		if (ref.first != nullptr)
		{
			if (p.second.second->getType() == "field")
				((Field*)p.second.second)->set_type(((symbolTable*)ref.first)->get_owner());
			else if (p.second.second->getType() == "localvariable")
				((LocalVariable*)p.second.second)->set_type(((symbolTable*)ref.first)->get_owner());
		}
		else
		{
			if (p.second.second->getType() == "field") {
				string m = "error, the type name '" + ((Field*)p.second.second)->get_type_name() + "' couldn't be found.";
				error_handler.add(error(p.second.second->getLineNo(), -1, m.c_str()));
			}
			else if (p.second.second->getType() == "localvariable") {
				string m = "error, the type name '" + ((LocalVariable*)p.second.second)->get_type_name() + "' couldn't be found.";
				error_handler.add(error(p.second.second->getLineNo(), -1, m.c_str()));
			}
		}
		symbolTable::later_defination_var.pop();
	}
}

void symbolParser::check_function()
{
	symboltable->check_method(symbolTable::openBrackets.top(), map<string, bool>());
}


void check_later_def_override()
{
	while (!symbolTable::later_defination_override.empty()) 
	{

		Symbol* symbol = symbolTable::later_defination_override.front().first;

		symbolTable* parent = symbolTable::later_defination_override.front().second;
		
		
		symbolTable* tempEx = ((Class *)parent->get_owner())->get_extended_class().second;
		
		
		
		while (tempEx != nullptr)
		{
			
			map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 >::iterator itex = tempEx->get_symbolMap().find(symbol);


			
			
			if (itex != tempEx->get_symbolMap().end() && !((Method*)itex->first)->get_is_private()) { // if is method 

				if (((Method*)symbol)->get_return_type() == ((Method*)itex->first)->get_return_type()); // if same return type
				else
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->get_owner()->getName() + "." + ((Method*)symbol)->getName() + "()': return type must be '" + ((Method*)itex->first)->get_return_type() + "' to match overridden member '" + itex->second.first->get_parent()->get_owner_name() + "." + ((Method*)symbol)->getName() + "()'."));

				if (((Method*)itex->first)->get_is_virtual() || ((Method*)itex->first)->get_is_abstract() || ((Method*)itex->first)->get_is_override());// is virtual or abstract or override
				else
					error_handler.add(error(symbol->getLineNo(), -1, "error, cannot override inherited member '" + itex->second.first->get_parent()->get_owner_name() + "." + ((Method*)symbol)->getName() + "()' because it is not marked virtual, abstract, or override"));

				if (((Method*)itex->first)->get_is_public() == ((Method*)symbol)->get_is_public() && ((Method*)itex->first)->get_is_protected() == ((Method*)symbol)->get_is_protected() && ((Method*)itex->first)->get_is_internal() == ((Method*)symbol)->get_is_internal()); //  is same modifiers
				else
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->get_owner()->getName() + "." + ((Method*)symbol)->getName() + "()': cannot change access modifiers when overriding "));

				if (((Method*)itex->first)->is_final())
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->get_owner()->getName() + "." + ((Method*)symbol)->getName() + "()': cannot override inherited member '" + itex->second.first->get_parent()->get_owner_name() + "." + ((Method*)symbol)->getName() + "()' because it is sealed"));

				break;
			}
			else {
				tempEx = ((Class *)tempEx->get_owner())->get_extended_class().second;
			}
		}

		if (tempEx == nullptr) { // letar defination for override  
			error_handler.add(error(symbol->getLineNo(), -1, "error, no suitable method found to override."));
		}

		symbolTable::later_defination_override.pop();
	}
}

void symbolParser::check()
{
	check_later_defination();

	for (int i = 0; i < symboltable->parents.size(); i++)
		symbolTable::type_defination_tree->check_cycle(symboltable->parents[i], symboltable->parents[i], vector<node*>());

	check_later_def_var();

	check_later_def_override();
	
	if (symbolTable::is_main == 0)
		error_handler.add(error(0, -1, "error Program does not contain a static \"Main\" method suitable for an entry point."));
}
symbolTable* symbolParser::getSymbolTableRoot()
{
	return this->symboltable;
}



