#include "Class.h"
#include "../Error Handler/error_handler.h"
#include "Field.h"

extern errorHandler error_handler;

Class::Class(string name, int line_no, int col_no) : Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType(),line_no,col_no);
	isFinal = false;
	is_public = false;
	is_private = true;
	is_protected = false;
	is_abstract = false;
	owner_is_namespace = false;
	type_graph_position = nullptr;
	is_internal = false;
	baseClassImpInterfaces.push_back(make_pair("", nullptr));
	have_constructor = false;
	this->is_static = false;
	this->refactored = false;
	bytes = 0;
	if (getName() == "object") {
		this->refactored = true;
	}
}

void Class::refactor() {
	if (this->refactored) {
		if (this->getName() == "object" && this->dispatchRow.size() == 0) {
			for each (auto field in ((symbolTable*)this->type_graph_position->stPTR)->get_symbolMap()) {
				if (field.first->getType() == "method" && !((Method*)field.first)->get_is_constructer()) {
					((Method*)field.first)->offset = this->offset;
					dispatchRow.push_back((Method*)field.first);
					this->offset += 4;
				}
			}
		}
		return;
	}
	//parent refactor 
	((Class*)baseClassImpInterfaces[0].second->get_owner())->refactor();
	
	this->bytes = ((Class*)baseClassImpInterfaces[0].second->get_owner())->bytes;
	this->offset = ((Class*)baseClassImpInterfaces[0].second->get_owner())->offset;

	vector<Method*> *parentDispatchRow = &((Class*)baseClassImpInterfaces[0].second->get_owner())->dispatchRow;
	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 > symbolMap = ((symbolTable*)this->type_graph_position->stPTR)->get_symbolMap();
	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1 >::iterator it;

	for each (auto method in *parentDispatchRow) {
		if (!method->get_is_constructer()) {
			if (!method->get_is_private()) {
				if (method->get_is_virtual() || method->get_is_override()) {
					it = symbolMap.find(method);
					if (it != symbolMap.end() && ((Method*)it->first)->get_is_override()) {
						it->first->offset = method->offset;
						dispatchRow.push_back((Method*)it->first);
						continue;
					}
				}
			}
			this->dispatchRow.push_back(method);
		}
	}

	for each (auto member in symbolMap)
	{
		if (member.first->getType() == "field") {
			((Field*)member.first)->offset = this->bytes;
			this->bytes += 4;
		}
		else if (member.first->getType() == "method" && !((Method*)member.first)->get_is_constructer()) {
			Method* currMethod = (Method*)member.first;
			if (!currMethod->get_is_override()) {
				((Method*)member.first)->offset = this->offset;
				dispatchRow.push_back((Method*)member.first);
				this->offset += 4;
			}
		}
	}
	this->refactored = true;
	cout << getName() << endl;
	for each (Method* method in dispatchRow)
	{
		cout << method->getFullPath() << endl;
	}
	cout << "======================================" << endl;
	return;
}



void Class::add_attributes(queue<string>&attributes)
{
	while (!attributes.empty())
	{
		if (attributes.front() == "SEALED")
			isFinal = true;
		if (attributes.front() == "STATIC")
			is_static = true;
		if (attributes.front() == "ABSTRACT")
			is_abstract = true ;

		if (owner_is_namespace)
		{
			if (attributes.front() == "PROTECTED" || attributes.front() == "PRIVATE") {
				error_handler.add(error(getLineNo(), -1, "class error, elements defined in namespace cannot be private or protected."));
			}
			if (attributes.front() == "INTERNAL") {
				is_internal = true;
				is_public = is_protected = is_private = false;
			}
		}
		else
		{
			if (attributes.front() == "PUBLIC")
				is_public = true, is_protected = is_private = false;
			if (!is_public && attributes.front() == "PROTECTED")
				is_protected = true, is_private = false;
			if (!is_public && !is_protected && attributes.front() == "PRIVATE")
				is_private = true;
			if (attributes.front() == "INTERNAL") {
				is_internal = true;
				is_public = is_protected = is_private = false;
			}

		}

		attribute->add(attributes.front(), attributes.size());
		attributes.pop();
	}
	return;
}

void Class::add_base(string name, symbolTable* ref)
{
	for (int i = 0;i < baseClassImpInterfaces.size();i++)
		if (baseClassImpInterfaces[i].first == name)
		{
			string m = "class error, '"+ name +"' already listed in interface list.";
			error_handler.add(error(getLineNo(), -1, m.c_str()));
			return;
		}
	baseClassImpInterfaces.push_back(make_pair(name, ref));

	return;
}

void Class::set_namespace_owner()
{
	owner_is_namespace = true;
	is_public = true;
	is_protected = is_private = false;
}

void Class::set_have_constructor()
{
	have_constructor = true;
}

bool Class::get_have_constructor()
{
	return have_constructor;
}

void Class::set_type_graph_position(node* pos)
{
	type_graph_position = pos;
	return;
}

void Class::set_extended_class(pair<string, symbolTable*>val)
{
	baseClassImpInterfaces[0] = val;
	return;
}

string Class::getType()
{
	return "class";
}


bool Class::is_final()
{
	return isFinal;
}

bool Class::get_is_public()
{
	return is_public;
}


node* Class::get_type_graph_position()
{
	return type_graph_position;
}

pair<string, symbolTable*> Class::get_extended_class()
{
	return baseClassImpInterfaces[0];
}

bool Class::get_is_abstract()
{
	return is_abstract;
}

string Class::getFullPath() {
	return ((symbolTable*)this->type_graph_position->stPTR)->getFullPath();
}

Class::~Class()
{

}
