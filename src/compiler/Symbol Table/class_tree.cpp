#include "class_tree.h"
#include "symbolTable.h"
#include "Class.h"

node::node(string name, node* parent, void* stPTR)
{
	this->parent = parent;
	this->name = name;
	this->stPTR = stPTR;
}

class_tree::class_tree()
{
	root = new node("Root", NULL, NULL);
	current = root;
}

node* class_tree::add_node(string name, void* stPTR)
{
	node *newNode = new node(name, current, stPTR);
	current->childs[name] = newNode;

	return (current = newNode);
}

void class_tree::down_specific_child(string name)
{
	current = current->childs[name];
}

void class_tree::end_node()
{
	if (current->parent != NULL)
		current = current->parent;
	return;
}


void* class_tree::find(node* &curr, string &class_name)
{
	if (curr == nullptr)
		return nullptr;
	map<string, node*>::iterator it = curr->childs.find(class_name);
	if (it != curr->childs.end())
		return it->second->stPTR;
	return find(curr->parent, class_name);
}

node* class_tree::find_in_graph(node* &curr, string &class_name)
{
	if (curr == nullptr)
		return nullptr;
	map<string, node*>::iterator it = curr->childs.find(class_name);
	if (it != curr->childs.end())
		return it->second;
	return find_in_graph(curr->parent, class_name);
}


pair<void*,bool> class_tree::find(node* &curr, queue<string> list)
{
	if (list.size() == 0 || curr == nullptr)
		return make_pair(nullptr,false);
	node* find_top = find_in_graph(curr, list.front());
	if (find_top != nullptr)
	{
		list.pop();
		while (!list.empty())
		{
			map<string, node*>::iterator it = find_top->childs.find(list.front());
			if (it != find_top->childs.end())
			{
				if (!((Class*)((symbolTable*)it->second->stPTR)->get_owner())->get_is_public())
					return make_pair(nullptr, true);
				find_top = it->second, list.pop();
			}
			else return make_pair(nullptr, false);
		}
		return make_pair(find_top->stPTR, true);
	}
	return make_pair(nullptr, false);
}


class_tree::~class_tree()
{

}
