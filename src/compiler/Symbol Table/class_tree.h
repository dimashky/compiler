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
	bool is_parent(node* &child, node* &parent);
	node* find_in_graph(node* &curr, string &class_name, stack<node*>&path);

public:
	class_tree();
	node* add_node(string name, void* stPTR);
	void end_node();
	void add_base(string name, node* child_ptr, node* parent_ptr);
	void down_specific_child(string name);


	pair<void*, bool> find(node* curr, queue<string> list, node* current_class);
	pair<void*, bool> find(node* curr, queue<string> list);

	void check_cycle(node* curr, node* parent, vector<node*> &cycle_path);


	node* get_root();	
	
	void print_defination_tree(node *curr);
	void print_inhertince_tree(node *curr);

	~class_tree();
};


