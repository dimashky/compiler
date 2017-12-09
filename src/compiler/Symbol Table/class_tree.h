#pragma once
#include <bits\stdc++.h>
using namespace::std;

class node
{
public:
	node* parent;
	string name;
	void* stPTR;
	map<string, node*> childs;
	node(string name, node* parent, void* stPTR);
	~node() {}
};



class class_tree
{
private:
	node *root, *current;

public:
	class_tree();

	void add_node(string name, void* stPTR);

	void down_specific_child(string name);

	void end_node();

	~class_tree();
};


