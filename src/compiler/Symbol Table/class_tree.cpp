#include "class_tree.h"
#include "symbolTable.h"

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

void class_tree::add_node(string name, void* stPTR)
{
	cout << "asdas " << ((symbolTable*)stPTR)->get_owner_name() << endl;
	node *newNode = new node(name, current, stPTR);
	current->childs[name] = newNode;
	cout << "down " << current->name << " to " << name << endl;

	current = newNode;

}

void class_tree::down_specific_child(string name)
{
	cout << "down " << current->name << " to " << name << endl;
	current = current->childs[name];
}

void class_tree::end_node()
{
	if (current->parent != NULL)
		cout << "up " << current->name << " to " << current->parent->name << endl, current = current->parent;
	return;
}


class_tree::~class_tree()
{
}
