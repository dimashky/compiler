#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "Interface.h"
#include "symbolTable.h"
#include "Field.h"
using namespace::std;

class Class : public Symbol
{
private:
	vector<pair<string, symbolTable*> > baseClassImpInterfaces;

	Attribute* attribute;
	bool isFinal,is_public,is_private,is_protected,owner_is_namespace, is_abstract,have_constructor,is_static,is_internal;
	node* type_graph_position;
	bool refactored;
public:
	int bytes;

	Class(string name, int line_no, int col_no);
	string getType();

	void add_base(string name, symbolTable* ref);
	void add_attributes(queue<string>&attributes);

	void set_have_constructor();
	void set_namespace_owner();
	void set_type_graph_position(node* pos);
	void set_extended_class(pair<string, symbolTable*>val);

	bool is_final();
	bool get_is_abstract();
	bool get_is_public();
	bool get_have_constructor();
	bool get_is_static() {
		return is_static;
	}
	bool get_is_internal() {
		return is_internal;
	}
	string getFullPath();
	node* get_type_graph_position();
	pair<string, symbolTable*> get_extended_class();
	void refactor() {
		if (this->refactored) {
			return;
		}
		((Class*)baseClassImpInterfaces[0].second->get_owner())->refactor();
		this->bytes = ((Class*)baseClassImpInterfaces[0].second->get_owner())->bytes;
		for each (auto field in ((symbolTable*)this->type_graph_position->stPTR)->get_symbolMap())
		{
			if (field.first->getType() == "field") {
				((Field*)field.first)->offset = this->bytes;
				this->bytes += 4;
			}
		}
		this->refactored = true;
		return;
	}
	~Class();
};

