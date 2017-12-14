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
	vector<pair<string, node*> > bases;
	int visited;
	node(string name, node* parent, void* stPTR);
	~node();
};

class class_tree
{
private:
	node *root, *current;
	node* find_in_graph(node* &curr, string &class_name);
	void* find(node* &curr, string &class_name);
public:
	class_tree();
	node* add_node(string name, void* stPTR);
	void end_node();
	void down_specific_child(string name);
	pair<void*, bool> find(node* &curr, queue<string> list);
	void add_base(string name, node* child_ptr, node* parent_ptr);
	~class_tree();
};


