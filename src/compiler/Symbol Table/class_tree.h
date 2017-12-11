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
	void* find(node* &curr, string &class_name);

	node* find_in_graph(node* &curr, string &class_name);

public:
	class_tree();

	node* add_node(string name, void* stPTR);

	void down_specific_child(string name);


	pair<void*, bool> find(node* &curr, queue<string> list);

	void end_node();

	~class_tree();
};


