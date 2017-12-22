#include "symbolTable.h"
#include "Class.h"
#include "class_tree.h"
#include"LocalVariable.h"
#include"Field.h"
#include"Method.h"



stack<symbolTable*> symbolTable::openBrackets = stack<symbolTable*>();

queue< pair<queue<string>, pair<node*, Symbol* > > > symbolTable::later_defination = queue< pair<queue<string>, pair<node*, Symbol* > > >();

queue< pair<queue<string>, pair<node*, Symbol* > > > symbolTable::later_defination_var = queue< pair<queue<string>, pair<node*, Symbol* > > >();

class_tree* symbolTable::type_defination_tree = new class_tree();

vector<node*> symbolTable::parents = vector<node*>();







void symbolTable::add_scope()
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		return;
	else parent = openBrackets.top();

	newst = new symbolTable(parent, NULL);
	parent->addChild(newst);
	openBrackets.push(newst);

}

void symbolTable::add_scope(Symbol* symbol)
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		parent = this;
	else parent = openBrackets.top();

	newst = new symbolTable(parent, symbol);
	openBrackets.push(newst);
	symbolTable* err = NULL;
	parent->symbolMap.insert(make_pair(symbol, make_pair(newst, err)));

	return;
}
void symbolTable::add_symbol_without_open_brackets(Symbol* symbol)
{
	symbolTable *parent = NULL, *newst = NULL;

	if (openBrackets.empty())
		parent = this;
	else parent = openBrackets.top();

	newst = new symbolTable(parent, symbol);
	symbolTable* err = NULL;
	parent->symbolMap.insert(make_pair(symbol, make_pair(newst, err)));

	return;
}




symbolTable::symbolTable(symbolTable* parent,Symbol* owner)
{
	this->parent = parent;
	this->owner = owner;
}

void symbolTable::addNamespace(Symbol* symbol)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	if (it != parent->symbolMap.end())
	{
		openBrackets.push(it->second.first);
		type_defination_tree->down_specific_child(symbol->getName());
	}
	else
	{
		add_scope(symbol);
		type_defination_tree->add_node(symbol->getName(), openBrackets.top());
	}
	return;
}

void symbolTable::addField(Symbol* symbol, bool known_type)
{
	symbolTable *parent = NULL;
	if (openBrackets.empty())		
		parent = this;
	else parent = openBrackets.top();

	if (!known_type)
	{
		queue<string>list;
		string curr_part = "", str_list = ((Field*)symbol)->get_type_name();


		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*,bool> ref = type_defination_tree->find(((Class*)parent->owner)->get_type_graph_position(), list);
		if (ref.first != nullptr)
			((Field*)symbol)->set_type(((symbolTable*)ref.first)->owner);
		else if (ref.second)
			cout << "error : there is an error in line " << symbol->getLineNo() << ", the type name '" << ((Field*)symbol)->get_type_name() << "' couldn't be found." << endl;
		else 
			later_defination_var.push(make_pair(list, make_pair(((Class*)parent->owner)->get_type_graph_position(), symbol)));
	}

	if (parent->owner != NULL && parent->owner->getName() == symbol->getName())
	{
		cout << "error : there is an error in line " << symbol->getLineNo() << " member names cannot be the same as their enclosing type." << endl;
		return;
	}
	 
	 map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);
	
	if (it != parent->symbolMap.end())
		cout << "error : there is an error in line " << symbol->getLineNo() << " The type '" << parent->owner->getName() << "' already contains a definition for '" << symbol->getName() << "'." << endl;
	
	else 
		add_symbol_without_open_brackets(symbol);
	 
	return;
}

void symbolTable::addLocalVariable(Symbol* symbol ,bool isParameter)
{
	/*symbolTable *parent = NULL;
	if (openBrackets.empty())		parent = this;

	else 
		parent = openBrackets.top();
	if (parent->owner->getType() == "method")
	{
		queue<Parameter> temp = (((Method*)parent->owner)->get_types_ids_parameter());
		while (!temp.empty() && !isParameter)
		{

			if (temp.front().name == symbol->getName())
			{
				
				cout << "error : there is an error in line " << symbol->getLineNo() <<" A local or parameter named '"<<symbol->getName()<<"' cannot be declared in this scope because that name is used in an enclosing local scope to define a local or parameter ."<< endl;

				break; 
			}
			temp.pop();
		}
	}
	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);
	if (it != parent->symbolMap.end())
	{
		if (it->first->getType() == "localvariable" && !((LocalVariable*)it->first)->is_parameter())
			cout << "error : there is an error in line " << symbol->getLineNo() << " A local variable named '"<< symbol->getName() << "' is already defined in this scope." << endl;
	

	}
	add_scope_without_openBrackets(symbol);
	*/
	return;
}

void symbolTable::addMethod(Symbol* symbol, queue<string>&modifiers, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > parameters, bool known_type)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();
	
	if (parent->owner != NULL && parent->owner->getType() =="class"&& parent->owner->getName() == symbol->getName())
		cout << "error : there is an error in line " << symbol->getLineNo() << " member names cannot be the same as their enclosing type." << endl;
	
	((Method*)symbol)->add_parametars(parameters);

	if (!known_type)
	{
		queue<string>list;
		string curr_part = "", str_list = ((Field*)symbol)->get_type_name();


		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*, bool> ref = type_defination_tree->find(((Class*)parent->owner)->get_type_graph_position(), list);
		if (ref.first != nullptr)
			((Field*)symbol)->set_type(((symbolTable*)ref.first)->owner);
		else if (ref.second)
			cout << "error : there is an error in line " << symbol->getLineNo() << ", the type name '" << ((Field*)symbol)->get_type_name() << "' couldn't be found." << endl;
		else
			later_defination_var.push(make_pair(list, make_pair(((Class*)parent->owner)->get_type_graph_position(), symbol)));
	}
	
	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);
	

	if (it != parent->symbolMap.end())
	{
		if (it->first->getType() != "method")
			cout << "error : there is an error in line " << symbol->getLineNo() << " The type '" << parent->owner->getName() << "' already contains a definition for '" << symbol->getName() << "'." << endl;
		else 
			cout << "error : there is an error in line " << symbol->getLineNo() << " The type '" << parent->owner->getName() << "' already defines a member called  '" << symbol->getName() << "' with same parametars." << endl;
		
		it->second.second = new symbolTable(parent, symbol);

		openBrackets.push(it->second.second);
	}
	else
		add_scope(symbol);
	
	symbolTable *top = openBrackets.top();
	vector<LocalVariable*>  &par  = ((Method*)symbol)->get_parameters();
	for (int i = 0;i < par.size();i++)
	{
		if (!parameters.front().second)
		{
			queue<string>list;
			string curr_part = "", str_list = par[i]->get_type_name();


			for (int i = 0;i < str_list.length();i++)
			{
				if (str_list[i] == '.')
					list.push(curr_part), curr_part = "";
				else curr_part += str_list[i];
			}

			list.push(curr_part);

			pair<void*, bool> ref = type_defination_tree->find(((Class*)parent->owner)->get_type_graph_position(), list);
			if (ref.first != nullptr)
				par[i]->set_type(((symbolTable*)ref.first)->owner);
			else if (ref.second)
				cout << "error : there is an error in line " << par[i]->getLineNo() << ", the type name '" << par[i]->get_type_name() << "' couldn't be found." << endl;
			else
				later_defination_var.push(make_pair(list, make_pair(((Class*)parent->owner)->get_type_graph_position(), par[i])));
		}

		map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it2 = top->symbolMap.find(par[i]);
		if (it2 != top->symbolMap.end())
			cout << "error : there is an error in line " << par[i]->getLineNo() << ", The parametar name '" << par[i]->getName() << "' is duplicate." << endl;
		else
			add_symbol_without_open_brackets(par[i]);

		parameters.pop();
	}
	


	return;
}

void symbolTable::addClass(Symbol* symbol, queue<string>&bases,queue<string>&modifiers)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	if (parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		cout << "error : there is an error in line " << symbol->getLineNo() << " member names cannot be the same as their enclosing type." << endl;

	if (parent->owner != NULL && parent->owner->getType() == "namespace")
		((Class*)symbol)->set_namespace_owner();

	((Class*)symbol)->add_attributes(modifiers);

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	node* current = nullptr;
	bool valid_class = false;

	if (it != parent->symbolMap.end())
	{
		if (it->first->getType() == "class")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			//optimize delete data when duplicate is found(we didn't make this optization trick)
			if (it->second.second != NULL)
				delete it->second.second;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Class*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			
			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Interface*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);
		}
		else
		{

			while (it != parent->symbolMap.end())
			{
				cout << "error : there is an error in line " << it->first->getLineNo() << " The type '" << parent->owner->getName() << "' already contains a definition for '" << symbol->getName() << "'." << endl;

				delete it->first;
				delete it->second.first;
				delete it->second.second;

				parent->symbolMap.erase(it);
				it = parent->symbolMap.find(symbol);
			}
			
			add_scope(symbol);

			((Class*)symbol)->set_type_graph_position(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));

			current = ((Class*)symbol)->get_type_graph_position()->parent;
		}
	}
	else
	{
		add_scope(symbol);
		
		((Class*)symbol)->set_type_graph_position(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));
		
		current = ((Class*)symbol)->get_type_graph_position()->parent;

		valid_class = true;
	}

	int cnt = 0;

	while (!bases.empty())
	{
		cnt++;
		queue<string>list;
		string curr_part = "", str_list = bases.front();
		

		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*, bool> find_res = type_defination_tree->find(current, list, ((Class*)symbol)->get_type_graph_position());

		symbolTable* find_base = (symbolTable*)find_res.first;
		

		if (cnt != 1) {
			if (find_base != nullptr) {
				
				if (find_base->owner->getType() == "class")
					cout << "error : there is an error in line " << symbol->getLineNo() << ", no more than one extended class and it should be the first one after Colon." << endl;
				
				else if (find_base->owner->getType() == "interface")
					((Class*)symbol)->add_base(bases.front(), find_base);
				else cout << "error : there is an error in line " << symbol->getLineNo() << ", '" << bases.front() << "' is a namespace." << endl;

			}
			else if(find_res.second)
				cout << "error : there is an error in line " << symbol->getLineNo() << ", inhertince from non declared or inaccessible type '" << bases.front() << "'." << endl;

			else later_defination.push(make_pair(list, make_pair(current, symbol)));
		}

		else {

			if (find_base != nullptr)
			{

				if (((Class*)find_base->owner)->is_final())
					cout << "error : there is an error in line " << symbol->getLineNo() << ", cannot derive from sealed type '" << find_base->owner->getName() << "'.\n";

				else
				{
					((Class*)symbol)->add_base(bases.front(), find_base);
					if (valid_class)
					{
						parents.push_back(((Class*)find_base->owner)->get_type_graph_position());
						type_defination_tree->add_base(((Class*)find_base->owner)->getName(), ((Class*)find_base->owner)->get_type_graph_position(), ((Class*)symbol)->get_type_graph_position());
					}
				}
			}

			else if (find_res.second)
			{
				cout << "error : there is an error in line " << symbol->getLineNo() << ", inhertince from non declared , inaccessible type or it's form circular base class depedency '" << bases.front() << "'." << endl;
				((Class*)symbol)->add_base("", nullptr);
			}
			else 
			{
				((Class*)symbol)->add_base(symbol->getName(), nullptr);

				later_defination.push(make_pair(list, make_pair(current, symbol)));
			}
		}

		bases.pop();
	}

	return;
}



void symbolTable::addInterface(Symbol* symbol, queue<string>bases, queue<string>&modifiers)
{
	symbolTable *parent = NULL;

	if (openBrackets.empty())
		parent = this;

	else parent = openBrackets.top();

	if (parent->owner != NULL && parent->owner->getType() == "class" && parent->owner->getName() == symbol->getName())
		cout << "error : there is an error in line " << symbol->getLineNo() << " member names cannot be the same as their enclosing type." << endl;

	if (parent->owner != NULL && parent->owner->getType() == "namespace")
		((Interface*)symbol)->set_namespace_owner();

	((Interface*)symbol)->add_attributes(modifiers);

	map<Symbol*, pair<symbolTable*, symbolTable* >, compare_1>::iterator it = parent->symbolMap.find(symbol);

	node* current = nullptr;

	bool valid_interface = false;

	if (it != parent->symbolMap.end())
	{

		if (it->first->getType() == "class")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;
			//optimize delete data when duplicate is found(we didn't make this optization trick)
			if (it->second.second != NULL)
				delete it->second.second;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Class*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);

		}
		else if (it->first->getType() == "interface")
		{
			cout << "error : there is an error in line " << symbol->getLineNo() << ", there is defination with same name '" << symbol->getName() << "'" << endl;

			if (it->second.second != nullptr)
				it->second.second = nullptr;

			it->second.second = new symbolTable(parent, symbol);

			current = ((Interface*)it->first)->get_type_graph_position();

			openBrackets.push(it->second.second);
		}
		else
		{
			while (it != parent->symbolMap.end())
			{
				cout << "error : there is an error in line " << it->first->getLineNo() << " The type '" << parent->owner->getName() << "' already contains a definition for '" << symbol->getName() << "'." << endl;

				delete it->first;
				delete it->second.first;
				delete it->second.second;

				parent->symbolMap.erase(it);
				it = parent->symbolMap.find(symbol);
			}

			add_scope(symbol);

			((Interface*)symbol)->set_type_graph_position(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));

			current = ((Interface*)symbol)->get_type_graph_position()->parent;
		}
	}
	else
	{
		add_scope(symbol);

		((Interface*)symbol)->set_type_graph_position(type_defination_tree->add_node(symbol->getName(), openBrackets.top()));

		current = ((Interface*)symbol)->get_type_graph_position()->parent;

		valid_interface = true;

	}


	while (!bases.empty())
	{
		queue<string>list;
		string curr_part = "", str_list = bases.front();


		for (int i = 0;i < str_list.length();i++)
		{
			if (str_list[i] == '.')
				list.push(curr_part), curr_part = "";
			else curr_part += str_list[i];
		}

		list.push(curr_part);

		pair<void*, bool> find_res = type_defination_tree->find(current, list, ((Interface*)symbol)->get_type_graph_position());

		symbolTable* find_base = (symbolTable*)find_res.first;

		if (find_base != nullptr) {

			if (find_base->owner->getType() == "class")
				cout << "error : there is an error in line " << symbol->getLineNo() << ", '" << bases.front() << "' is class and interfaces cant extend classes." << endl;

			else if (find_base->owner->getType() == "interface")
			{
				((Interface*)symbol)->add_base(bases.front(), find_base);
				if (valid_interface)
				{
					parents.push_back(((Class*)find_base->owner)->get_type_graph_position());
					type_defination_tree->add_base(((Class*)find_base->owner)->getName(), ((Interface*)find_base->owner)->get_type_graph_position(), ((Interface*)symbol)->get_type_graph_position());
				}
			}
			else cout << "error : there is an error in line " << symbol->getLineNo() << ", '" << bases.front() << "' is a namespace." << endl;

		}

		else if (find_res.second)
			cout << "error : there is an error in line " << symbol->getLineNo() << ", Implemented from non declared or inaccessible interface '" << bases.front() << "'." << endl;

		else 
			later_defination.push(make_pair(list, make_pair(current, symbol)));

		bases.pop();
	}

	return;
}

void symbolTable::addChild(symbolTable* st)
{
	this->childs.push_back(st);
	return;
}

bool symbolTable::closeScope()
{
	
	if (!openBrackets.empty())
	{
		if (openBrackets.top()->owner->getType() == "class" || openBrackets.top()->owner->getType() == "interface" || openBrackets.top()->owner->getType() == "namespace")
			type_defination_tree->end_node();
		openBrackets.pop();
		return true;
	}
	return false;
}

Symbol* symbolTable::get_owner()
{
	return owner;
}

string symbolTable::get_owner_name()
{
	return owner->getName();
}

symbolTable::~symbolTable()
{

}

bool symbolTable::initPrintFiles()
{
	nodeFile = fopen("./visually output/js/SymbolTable/nodes.js","w");
	edgeFile = fopen("./visually output/js/SymbolTable/edges.js","w");
	if (nodeFile && edgeFile) {
		fprintf(nodeFile, "var nodes = [");
		fprintf(edgeFile, "var edges = [");
		return true;
	}
	else {
		return false;
	}
}

void symbolTable::closePrintFiles()
{
	fprintf(nodeFile, "];");
	fprintf(edgeFile, "];");
	fclose(nodeFile);
	fclose(edgeFile);
}
int symbolTable::print(int nodeID)
{
	if (owner != NULL) {
		if(owner->getType() == "class")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`class`', shape: 'box', color:'#016FB9'},", nodeID, owner->getName().c_str());
		else if(owner->getType() == "interface")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n_interface_', shape: 'box', color:'#015B98'},", nodeID, owner->getName().c_str());
		else if(owner->getType() == "namespace")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`namespace`', shape: 'box', color:'#9A031E'},", nodeID, owner->getName().c_str());
		else if(owner->getType() == "field")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`%s fields`', shape: 'box', color:'#4CB944'},", nodeID, ((Field*)owner)->getName().c_str(), ((Field*)owner)->get_type_name().c_str());
		else if (owner->getType() == "localvariable")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`%s LocalVar`', shape: 'box', color:'#FFC07F'},", nodeID, ((LocalVariable*)owner)->getName().c_str(), ((LocalVariable*)owner)->get_type_name().c_str());
		else if (owner->getType() == "method")
			fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*%s*\\n`Method`', shape: 'box', color:'#EF476F'},", nodeID, ((Method*)owner)->getName().c_str());
	}

	if(parent == NULL)
		fprintf(nodeFile, "{ id:%d, font: { multi: 'md', color:'white' }, label:'*Global Namespace*\\n`namespace`', shape: 'box', color:'#182825'},", nodeID);
	int nextID = nodeID;
	for (auto item : symbolMap)
	{
		fprintf(edgeFile, "{from:%d,to:%d, dashes:true},", nodeID, nextID + 1);
		nextID = item.second.first->print(nextID + 1);
	}
	return nextID;
}

FILE* symbolTable::nodeFile;
FILE* symbolTable::edgeFile;