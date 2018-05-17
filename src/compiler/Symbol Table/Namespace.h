#pragma once
#include<iostream>
#include<string>
#include "Symbol.h"
using namespace::std;

class Namespace : public Symbol
{
private:
	node* type_graph_position;
public:
	Namespace(string name, int line_no, int col_no);

	void setTypePositionGraph(node* type_graph_position) {
		this->type_graph_position = type_graph_position;
		return;
	}
	
	node* getTypePositionGraph() {
		return this->type_graph_position;
	}

	~Namespace();
	string getType();
};

