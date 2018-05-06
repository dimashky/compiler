#include<iostream>
#include<vector>
#include "symbol_parser.h"
#include "../Error Handler/error_handler.h"
#include "../AST/Object/Procedure.h"
#include "../AST/Object/Variable.h"
#include "../AST/Statement/While.h"
#include "../AST/Statement/DoWhile.h"
#include "../AST/Statement/For.h"

extern errorHandler error_handler;
extern Procedure* AST;
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
	Node::Up();
	symboltable->closeScope();
}

void symbolParser::add_object()
{

	Symbol* symbol = new Class("Object", 0, 0);

	symboltable->addClass(symbol, queue<string>(), queue<string>());
	
	symbolTable::object_ref = symbolTable::openBrackets.top();
	queue<string>mod;

	mod.push("PUBLIC");
	mod.push("VIRTUAL");

	
	Procedure* ns = new Procedure(symbol, Node::current);

	((Procedure*)Node::current)->add(ns);

	Node::setCurrent(ns);
	
	
	Method* method = new Method(mod, "string", "ToString", 0, 0);

	symboltable->addMethod(method, mod, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(), queue<int>(),queue<Node*>() ,1, 1);

	ns = new Procedure(method, Node::current);

	ns->setHasReturn(1);

	((Procedure*)Node::current)->add(ns);

	Node::setCurrent(ns);

	endScope();
	endScope();
}

Symbol* symbolParser::addNamespace(string name, int line_no, int col_no)
{
	if (symbolTable::object_ref == nullptr)
		add_object();

	Symbol* newNamespace = new Namespace(name, line_no, col_no);
	symboltable->addNamespace(newNamespace);


	Procedure* ns = new Procedure(newNamespace, Node::current);

	((Procedure*)Node::current)->add(ns);

	Node::setCurrent(ns);

	return newNamespace;
}

Symbol* symbolParser::addClass(queue<string>&modifiers, string className, queue<string> &bases, int line_no, int col_no)
{
	if (symbolTable::object_ref == nullptr)
		add_object();

	Symbol* newClass = new Class(className, line_no, col_no);
	symboltable->addClass(newClass, bases, modifiers);

	Procedure* ns = new Procedure(newClass, Node::current);

	((Procedure*)Node::current)->add(ns);

	Node::setCurrent(ns);

	return newClass;
}

Symbol* symbolParser::addInterface(queue<string>modifiers, string interfaceName, queue<string> bases, int line_no, int col_no)
{
	Symbol* newInterface = new Interface(interfaceName, line_no, col_no);
	symboltable->addInterface(newInterface, bases, modifiers);



	Procedure* ns = new Procedure(newInterface, Node::current);

	((Procedure*)Node::current)->add(ns);

	Node::setCurrent(ns);


	return newInterface;
}

vector<Symbol*> symbolParser::addField(int dimension, queue<string>modifiers, string typeIdentifier, queue<string>identifiers,queue<Node*>init, int line_no, int col_no, bool known_type)
{
	vector<Symbol*> arr;

	while (!identifiers.empty())
	{
		Symbol* newField = new Field(modifiers, typeIdentifier, identifiers.front(), dimension, line_no, col_no);
		
		symboltable->addField(newField, known_type);

		Variable* field = new Variable(newField,init.front(), Node::current);

		((Procedure*)Node::current)->add(field);

		arr.push_back(newField);
		
		identifiers.pop();

		init.pop();
	}

	return arr;

}

vector<Symbol*> symbolParser::addFieldConst(int dimension, queue<string>modifiers,string  modifier_const,string typeIdentifier, queue<string>identifiers, queue<Node*>init, int line_no, int col_no, bool known_type)
{
	vector<Symbol*> arr;

	modifiers.push(modifier_const);

	while (!identifiers.empty())
	{
		Symbol* newField = new Field(modifiers, typeIdentifier, identifiers.front(), dimension, line_no, col_no, true);
		
		symboltable->addField(newField, known_type);
		
		Variable* field = new Variable(newField, init.front(), Node::current);

		((Procedure*)Node::current)->add(field);

		arr.push_back(newField);

		init.pop();

		identifiers.pop();
	}
	return arr;
}

Symbol* symbolParser::addMethod(queue<string>modifiers, string typeIdentifier, string identifier, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > types_ids_parameters, queue<int>params_dimension, queue<Node*>var_init, int line_no, int col_no, bool known_type, bool is_body, Node* callBase)
{
	/*
	* Note : 
		parameters added to AST from addParameters method in LocalVariable Class !!
	*/
	Symbol* newMethod = new Method(modifiers, typeIdentifier, identifier, line_no, col_no);

	Procedure* ns = new Procedure(newMethod, Node::current, callBase);

	//if we add constructer to static class i will not add it to AST Full Tree but i will add it as separate tree to check errors on it but it will not be available in AST tree
	if (((Method*)newMethod)->get_is_constructer() && ((Class*)symbolTable::openBrackets.top()->get_owner())->get_is_static()) {
		error_handler.add(error(newMethod->getLineNo(), newMethod->getColNo(), "static classes cannot have constructers on it"));
	}
	else {
		((Procedure*)Node::current)->add(ns);
	}
	Node::setCurrent(ns);

	symboltable->addMethod(newMethod, modifiers, types_ids_parameters, params_dimension,var_init, known_type, is_body);
	//parametars added to AST

	((Method*)newMethod)->returnAddressOffset = ((Method*)newMethod)->stackFrameSize;
	((Method*)newMethod)->stackFrameSize += 8;

	return newMethod;
}

//notify this in AST
void symbolParser::add_scope()
{
	
	Block* b = new Block(Node::current);

	
	if (Node::current->getType() == "block")
		((Block*)Node::current)->add(b);
	else if (Node::current->getType() == "if")
		((If*)Node::current)->setIfStatement(b);
	else if(Node::current->getType() == "while")
		((While*)Node::current)->setStatement(b);
	else if (Node::current->getType() == "dowhile")
		((DoWhile*)Node::current)->setStatement(b);
	else if (Node::current->getType() == "for")
		((For*)Node::current)->setStatement(b);
	else if (Node::current->getType() == "foreach") {
		((Foreach*)Node::current)->setStatement(b);
	}
	else if (Node::current->getType() == "procedure") {
		((Procedure*)Node::current)->setBlock(b);
	}


	Node::setCurrent(b);

	
	symboltable->add_scope();
}

vector<Symbol*> symbolParser::addLocalVariable(int dimension, string typeIdentifier, queue<string>identifiers, queue<Node*>exps, bool known_type, bool constant, int line_no, int col_no)
{
	vector<Symbol*> arr;

	while (!identifiers.empty())
	{
		Symbol* newLocalVariable = new LocalVariable(typeIdentifier, identifiers.front(), dimension, false, constant, line_no, col_no);
		symboltable->addLocalVariable(newLocalVariable, known_type);
		
		Variable* field = new Variable(newLocalVariable, exps.front(), Node::current);

		if (Node::current->getType() == "procedure")
			((Procedure*)Node::current)->add(field);
		else if(Node::current->getType() == "for") 
			((For*)Node::current)->addInitializer(field);
		else {
			((Block*)Node::current)->add(field);
		}
		
		identifiers.pop();
		exps.pop();

		arr.push_back(newLocalVariable);
	}
	return arr;
}

void symbolParser::add_using(string s, int line_no, int col_no)
{
	given_usings.push_back(make_pair(s, make_pair(line_no, col_no)));
}

void symbolParser::check_later_defination()
{
	int mycnt1 = -1;
	while (!symbolTable::later_defination.empty())
	{
		mycnt1++;
		if (symbolTable::later_defination.front().second.second->getType() == "class")
		{
			symbolTable* search = (symbolTable*)symbolTable::type_defination_tree->find(symbolTable::later_defination.front().second.first, symbolTable::later_defination.front().first, ((Class*)symbolTable::later_defination.front().second.second)->get_type_graph_position()).first;

			int cnt = 0;

			if (search == nullptr)
				for (int nsp = 0;nsp < symbolTable::using_namespaces.size();nsp++)
				{
					if (symbolTable::using_namespaces[nsp].second.first.first <= mycnt1 && symbolTable::using_namespaces[nsp].second.first.second > mycnt1)
					{
						symbolTable* curr_type = (symbolTable*)symbolTable::type_defination_tree->find(symbolTable::using_namespaces[nsp].first, symbolTable::later_defination.front().first).first;
						if (curr_type != nullptr)
							cnt++, search = curr_type;
					}
				}
			if (cnt > 1)
			{
				string parent_name;
				while (!symbolTable::later_defination.front().first.empty())
				{
					parent_name += symbolTable::later_defination.front().first.front();
					symbolTable::later_defination.front().first.pop();
					if (!symbolTable::later_defination.front().first.empty())
						parent_name += '.';
				}
				((Class*)symbolTable::later_defination.front().second.second)->set_extended_class(make_pair("Object", symbolTable::object_ref));

				error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, "'" + parent_name + "' is ambiguous reference."));
			}

			else if (search != nullptr)
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
							((Class*)symbolTable::later_defination.front().second.second)->set_extended_class(make_pair("Object", symbolTable::object_ref));
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
								// class is extend from abstruct class
								if (!(((Class*)symbolTable::later_defination.front().second.second)->get_is_abstract()) && (((Class*)search->get_owner())->get_is_abstract()))
									symbolTable::extended_abstract_classes.push(make_pair(symbolTable::later_defination.front().second.second, search));
							}
						}
					}
				}

				else if (search->get_owner()->getType() == "interface")
				{
					((Class*)symbolTable::later_defination.front().second.second)->set_extended_class(make_pair("Object", symbolTable::object_ref));
					((Interface*)symbolTable::later_defination.front().second.second)->add_base(search->get_owner()->getName(), search);
				}
				else if (search->get_owner()->getType() == "namespace") 
				{
					((Class*)symbolTable::later_defination.front().second.second)->set_extended_class(make_pair("Object", symbolTable::object_ref));
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
			
			int cnt = 0;

			if (search == nullptr)
				for (int nsp = 0;nsp < symbolTable::using_namespaces.size();nsp++)
					if (symbolTable::using_namespaces[nsp].second.first.first <= mycnt1 && symbolTable::using_namespaces[nsp].second.first.second > mycnt1)
					{
						symbolTable* curr_type = (symbolTable*)symbolTable::type_defination_tree->find(symbolTable::using_namespaces[nsp].first, symbolTable::later_defination.front().first).first;
						if (curr_type != nullptr)
							cnt++, search = curr_type;
					}

			if (cnt > 1)
			{
				string parent_name;
				while (!symbolTable::later_defination.front().first.empty())
				{
					parent_name += symbolTable::later_defination.front().first.front();
					symbolTable::later_defination.front().first.pop();
					if (!symbolTable::later_defination.front().first.empty())
						parent_name += '.';
				}
				error_handler.add(error(symbolTable::later_defination.front().second.second->getLineNo(), -1, "'" + parent_name + "' is ambiguous reference."));
			}

			else if (search != nullptr)
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
	int cnt = -1;
	while (!symbolTable::later_defination_var.empty())
	{
		cnt++;
		pair<queue<string>, pair<node*, Symbol* > > p = symbolTable::later_defination_var.front();
		
		pair<void*, bool> ref = symbolTable::type_defination_tree->find(p.second.first, p.first);
		
		if (ref.first != nullptr)
		{
			if (p.second.second->getType() == "field")
				((Field*)p.second.second)->set_type(((symbolTable*)ref.first)->get_owner());
			
			else if (p.second.second->getType() == "localvariable")
				((LocalVariable*)p.second.second)->set_type(((symbolTable*)ref.first)->get_owner());
			
			else if (p.second.second->getType() == "method")
				((Method*)p.second.second)->set_return_type(((symbolTable*)ref.first)->get_owner());

		}
		else
		{
			bool find_type = false;

			for (int nsp = 0;nsp < symbolTable::using_namespaces.size();nsp++)
			if(symbolTable::using_namespaces[nsp].second.second.first <= cnt && symbolTable::using_namespaces[nsp].second.second.second > cnt)
			{
				ref = symbolTable::type_defination_tree->find(symbolTable::using_namespaces[nsp].first, p.first);
				if (ref.first != nullptr)
				{
					if (p.second.second->getType() == "field")
						((Field*)p.second.second)->set_type(((symbolTable*)ref.first)->get_owner());

					else if (p.second.second->getType() == "localvariable")
						((LocalVariable*)p.second.second)->set_type(((symbolTable*)ref.first)->get_owner());

					else if (p.second.second->getType() == "method")
						((Method*)p.second.second)->set_return_type(((symbolTable*)ref.first)->get_owner());

					find_type = true;
					break;
				}
			}
			if (!find_type)
			{
				if (p.second.second->getType() == "field")
					error_handler.add(error(p.second.second->getLineNo(), -1, "error, the type name '" + ((Field*)p.second.second)->get_type_name() + "' couldn't be found."));

				else if (p.second.second->getType() == "localvariable")
					error_handler.add(error(p.second.second->getLineNo(), -1, "error, the type name '" + ((LocalVariable*)p.second.second)->get_type_name() + "' couldn't be found."));

				else if (p.second.second->getType() == "method")
					error_handler.add(error(p.second.second->getLineNo(), -1, "error, the return type name '" + ((Method*)p.second.second)->get_return_type() + "' couldn't be found."));
			}
		}
		symbolTable::later_defination_var.pop();
	}
}

void symbolParser::check_function()
{
	symbolTable* curr = symbolTable::openBrackets.top();
	while (curr == nullptr)
		curr = curr->get_parent();
	
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
			bool correctOverride = true;
			if (itex != tempEx->get_symbolMap().end() && !((Method*)itex->first)->get_is_private()) { // if is method 

				if (((Method*)symbol)->get_return_type() == ((Method*)itex->first)->get_return_type())
					; // if same return type
				else {
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->get_owner()->getName() + "." + ((Method*)symbol)->getName() + "()': return type must be '" + ((Method*)itex->first)->get_return_type() + "' to match overridden member '" + itex->second.first->get_parent()->get_owner_name() + "." + ((Method*)symbol)->getName() + "()'."));
					correctOverride = false;
				}
				if (((Method*)itex->first)->get_is_virtual() || ((Method*)itex->first)->get_is_abstract() || ((Method*)itex->first)->get_is_override())
				;// is virtual or abstract or override
				else {
					error_handler.add(error(symbol->getLineNo(), -1, "error, cannot override inherited member '" + itex->second.first->get_parent()->get_owner_name() + "." + ((Method*)symbol)->getName() + "()' because it is not marked virtual, abstract, or override"));
					correctOverride = false;
				}
				if (((Method*)itex->first)->get_is_public() == ((Method*)symbol)->get_is_public() && ((Method*)itex->first)->get_is_protected() == ((Method*)symbol)->get_is_protected() && ((Method*)itex->first)->get_is_internal() == ((Method*)symbol)->get_is_internal())
					;//  is same modifiers
				else{
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->get_owner()->getName() + "." + ((Method*)symbol)->getName() + "()': cannot change access modifiers when overriding "));
					correctOverride = false;

				}
				if (!(((Method*)itex->first)->is_final()))
					; // is not final 
				else 
					error_handler.add(error(symbol->getLineNo(), -1, "error, '" + parent->get_owner()->getName() + "." + ((Method*)symbol)->getName() + "()': cannot override inherited member '" + itex->second.first->get_parent()->get_owner_name() + "." + ((Method*)symbol)->getName() + "()' because it is sealed"));

				if (correctOverride && ((Method*)itex->first)->get_is_abstract() && ((Method*)itex->first)->get_is_must_ovrride())
					((Method*)itex->first)->set_must_ovrride(false);
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

void symbolParser::send_using_to_st()
{
	int min1, min2, max1, max2;

	if (symbolTable::using_namespaces.size() != 0)
	{
		min1 = symbolTable::using_namespaces[symbolTable::using_namespaces.size() - 1].second.first.second;
		min2 = symbolTable::using_namespaces[symbolTable::using_namespaces.size() - 1].second.second.second;
	}
	else min1 = min2 = 0;
	
	max1 = symbolTable::later_defination.size();
	max2 = symbolTable::later_defination_var.size();

	for (int i = 0;i < given_usings.size();i++)
	{
		queue<string>list;

		string curr_part = "", str_list = given_usings[i].first;

		for (int i = 0;i < str_list.length();i++)
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];

			list.push(curr_part);

			node* nsp = symbolTable::type_defination_tree->check_using_namespace(list);

			if (nsp != nullptr)
				symbolTable::using_namespaces.push_back(make_pair(nsp, make_pair(make_pair(min1, max1), make_pair(min2, max2))));

			else
				error_handler.add(error(given_usings[i].second.first, given_usings[i].second.second, "using directory is unnecessery or couldn't be found."));
	}
}

void symbolParser::check_is_methods_not_override()
{
	while (!symbolTable::extended_abstract_classes.empty())
	{

		Symbol* symbol = symbolTable::extended_abstract_classes.front().first;

		symbolTable* parent = symbolTable::extended_abstract_classes.front().second;

		symbolTable* tempEx = parent; 
		//symbolTable* tempEx = ((Class *)parent->get_owner())->get_extended_class().second;

		while(tempEx != nullptr && (((Class*)tempEx->get_owner())->get_is_abstract()))
		{

			map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 >::iterator itex = tempEx->get_symbolMap().begin();
			for (itex = tempEx->get_symbolMap().begin(); itex != tempEx->get_symbolMap().end(); itex++)
			{
				if (itex->first->getType() == "method" && (((Method*)itex->first)->get_is_must_ovrride()))
				{
					error_handler.add(error(symbol->getLineNo(), -1, "error, '"+ symbol->getName() +"' does not implement inherited abstract member '" + tempEx->get_owner_name() + "." + itex->first->getName()+"'."));
				}
			}
			tempEx = ((Class *)tempEx->get_owner())->get_extended_class().second;

		}

		symbolTable::extended_abstract_classes.pop();
	}

}

void symbolParser::check()
{
	check_later_defination();

	for (int i = 0; i < symboltable->parents.size(); i++)
		symbolTable::type_defination_tree->check_cycle(symboltable->parents[i], symboltable->parents[i], vector<node*>());

	check_later_def_var();

	check_later_def_override();

	check_is_methods_not_override();
	
	if (symbolTable::is_main == 0)
		error_handler.add(error(0, -1, "error Program does not contain a static \"Main\" method suitable for an entry point."));
}
symbolTable* symbolParser::getSymbolTableRoot()
{
	return this->symboltable;
}



