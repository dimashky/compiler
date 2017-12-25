#include "class_tree.h"
#include "symbolTable.h"
#include "Class.h"
#include "../Error Handler/error_handler.h"

extern errorHandler error_handler;


node::node(string name, node* parent, void* stPTR)
{
	this->parent = parent;
	this->name = name;
	this->stPTR = stPTR;
	this->visited = 0;
}

node::~node(){}

node* class_tree::get_root()
{
	return root;
}

bool class_tree::is_parent(node* &child, node* &parent)
{
	if (child == parent)
		return true;
	if (child == nullptr)
		return false;
	return is_parent(child->parent, parent);
}

node* class_tree::find_in_graph(node* &curr, string &class_name, stack<node*>&path)
{
	if (curr == nullptr)
		return nullptr;
	map<string, node*>::iterator it = curr->childs.find(class_name);
	
	if (it != curr->childs.end())
		return it->second;
	path.push(curr);
	return find_in_graph(curr->parent, class_name,path);
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

void class_tree::end_node()
{
	if (current->parent != NULL)
		current = current->parent;
	return;
}

void class_tree::down_specific_child(string name)
{
	current = current->childs[name];
}



pair<void*, bool> class_tree::find(node* curr, queue<string> list, node* current_class)
{

	if (list.size() == 0 || curr == nullptr)
		return make_pair(nullptr, false);
	

	stack<node*>path;

	path.push(current_class);
	
	node* find_top = find_in_graph(curr, list.front(), path);
	
	bool maybe_circular_base_dep = false;

	if (find_top == current_class)
		maybe_circular_base_dep = true;

	if (find_top != nullptr)
	{
		bool can_access = true, branch = false;

		path.pop();
		list.pop();

		while (!list.empty())
		{
			map<string, node*>::iterator it = find_top->childs.find(list.front());
			if (it != find_top->childs.end())
			{
				if ((((symbolTable*)it->second->stPTR)->get_owner())->getType() == "class")
					if (!((Class*)((symbolTable*)it->second->stPTR)->get_owner())->get_is_public())
						can_access = false;

				if ((((symbolTable*)it->second->stPTR)->get_owner())->getType() == "interface")
					if (!((Interface*)((symbolTable*)it->second->stPTR)->get_owner())->get_is_public())
						can_access = false;

				find_top = it->second, list.pop();

				if (!branch)
				
					if (!path.empty())
					{
						if (path.top() != find_top)
							branch = can_access = true;
						path.pop();//for equal or not equal state
					}
					else 
						branch = can_access = true;
					
				else if (!can_access)
					return make_pair(nullptr, true);

			}
			else return make_pair(nullptr, false);
		}
		if (!maybe_circular_base_dep)
			return make_pair(find_top->stPTR, true);
		
		if (((symbolTable*)find_top->stPTR)->get_owner()->getType() == "class")
			return make_pair(nullptr, true);
		return make_pair(find_top->stPTR, true);
	}
	return make_pair(nullptr, false);
}



pair<void*, bool> class_tree::find(node* curr, queue<string> list)
{
	if (list.size() == 0 || curr == nullptr)
		return make_pair(nullptr, false);


	stack<node*>path;

	
	node* find_top = find_in_graph(curr, list.front(), path);

	if (path.size() == 0)
		path.push(curr);

	if (find_top != nullptr)
	{
		bool can_access = true, branch = false;

		path.pop();
		list.pop();
		while (!list.empty())
		{
			map<string, node*>::iterator it = find_top->childs.find(list.front());
			if (it != find_top->childs.end())
			{
				if ((((symbolTable*)it->second->stPTR)->get_owner())->getType() == "class")
					if (!((Class*)((symbolTable*)it->second->stPTR)->get_owner())->get_is_public())
						can_access = false;

				if ((((symbolTable*)it->second->stPTR)->get_owner())->getType() == "interface")
					if (!((Interface*)((symbolTable*)it->second->stPTR)->get_owner())->get_is_public())
						can_access = false;

				find_top = it->second, list.pop();

				if (!branch)

					if (!path.empty())
					{
						if (path.top() != find_top)
							branch = can_access = true;
						path.pop();//for equal or not equal state
					}
					else
						branch = can_access = true;

				else if (!can_access)
					return make_pair(nullptr, true);

			}
			else return make_pair(nullptr, false);
		}
		return make_pair(find_top->stPTR, true);
	}
	return make_pair(nullptr, false);
}

void class_tree::add_base(string name, node* child_ptr, node* parent_ptr)
{
	parent_ptr->bases.push_back(make_pair(name, child_ptr));
}
int class_tree::print_defination_tree(node *curr, int id, vector<string>* nodes, vector<string>* edges)
{
	if (curr == nullptr) 
		return id;

	int next_id = id;
	for (map<string, node*>::iterator it = curr->childs.begin(); it != curr->childs.end(); it++)
	{
		nodes->push_back(string("{ id:" + to_string(next_id+1) + ", font: { multi: 'md', color:'white' }, label:'*"+ ((symbolTable*)it->second->stPTR)->get_owner()->getName() +"*\\n`class`', shape: 'box', color:'#016FB9'},"));
		edges->push_back(string("{from:"+to_string(id)+",to:"+to_string(next_id+1)+", dashes:true},"));
		
		next_id = print_defination_tree(it->second, next_id + 1, nodes, edges);
	}
}

void class_tree::print_inhertince_tree(node *curr)
{
	if (curr == nullptr) 
		return;
	
	for (map<string, node*>::iterator it = curr->childs.begin(); it != curr->childs.end(); it++)
	{
		cout << ((symbolTable*)it->second->stPTR)->get_owner()->getName() << endl;
//		print_defination_tree(it->second);

	}
}


void class_tree::check_cycle(node* curr, node* parent, vector<node*> &cycle_path)
{
	if (curr->visited == 2)
		return;

	else if (curr->visited == 1)
	{
		for (int i = 0; i < cycle_path.size(); i++)
		{
			int next = (i + 1) % cycle_path.size();
			int last = (((i - 1) % cycle_path.size()) + cycle_path.size()) % cycle_path.size();
			if (((symbolTable*)cycle_path[i]->stPTR)->get_owner()->getType() == "class")
			{
				string m = "symmbol parser error, '" + cycle_path[i]->name + "' class is in inheritence cycle.";
				error_handler.add(error(((symbolTable*)cycle_path[i]->stPTR)->get_owner()->getLineNo(), -1, m.c_str()));
				((Class*)((symbolTable*)cycle_path[i]->stPTR)->get_owner())->set_extended_class(make_pair("", nullptr));
			}
			else
			{
				string m = "symmbol parser error, '" + cycle_path[i]->name + "' interface is in inheritence cycle.";
				error_handler.add(error(((symbolTable*)cycle_path[i]->stPTR)->get_owner()->getLineNo(), -1, m.c_str()));
			}
		}

		return;
	}

	cycle_path.push_back(curr);

	curr->visited = 1;

	for (int i = 0; i < curr->bases.size(); i++)
		check_cycle(curr->bases[i].second, curr, cycle_path);

	curr->visited = 2;

	cycle_path.pop_back();

	return;
}


class_tree::~class_tree()
{

}
