#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "symbolTable.h"
#include "LocalVariable.h"
using namespace::std;
class Method : public Symbol
{
private:
	Attribute* attribute;
	string return_type;
	Symbol* return_type_ref;
	bool isFinal;
	vector<LocalVariable*> types_ids_parameter;
public:
	Method(queue<string>&modifiers, string return_type, string name, int line_no, int col_no);
	void add_attributes(queue<string>&attributes);
	string get_return_type();
	string getType();

	void add_parametars(queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > parameters)
	{
		while (!parameters.empty())
			types_ids_parameter.push_back(new LocalVariable(parameters.front().first.first.first, parameters.front().first.first.second, true, parameters.front().first.second.first, parameters.front().first.second.second)), parameters.pop();
	}

	vector<LocalVariable*>& get_parameters();
	
	int get_parametars_count()
	{
		return types_ids_parameter.size();
	}

	bool compare(Symbol* comp)
	{
		
		if (getName() == comp->getName() && comp->getType() == "method")
		{
			if (get_parametars_count() != ((Method*)comp)->get_parametars_count())
				return get_parametars_count() > ((Method*)comp)->get_parametars_count();

			vector<LocalVariable*> &p1 = get_parameters();
			vector<LocalVariable*> &p2 = ((Method*)comp)->get_parameters();
			for (int i = 0;i < p1.size();i++)
				if (p1[i]->get_type_name() != p2[i]->get_type_name())
					return p1[i]->get_type_name() > p2[i]->get_type_name();
				
			return false;
		}
		return getName() > comp->getName();
	}

	void set_return_type(Symbol* ref)
	{
		return_type_ref = ref;
		return;
	}
	bool is_final();
	~Method();

};

