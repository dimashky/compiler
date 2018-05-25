#include "Method.h"
#include "../Error Handler/error_handler.h"
#include "../AST/Object/Variable.h"
#include "../AST/Object/Procedure.h"
#include "../AST/Object/ArrayInitializer.h"
extern errorHandler error_handler;

bool Method::compare_status = true;

Method::Method(queue<string>&modifiers, string return_type, string name, int line_no, int col_no): Symbol(name, line_no, col_no)
{
	attribute = new Attribute(this->getType(),return_type,line_no,col_no);
	this->return_type = return_type;
	this->is_abstract = false;
	this->isFinal = false;
	this->is_static = false; 
	this->is_override = false;
	this->is_virtual = false; 
	this->is_public = false;
	this->is_private = true;
	this->is_protected = false;
	this->is_internal = false;
	this->is_extern = false;
	this->must_ovrride = false; 
	this->default_counter = 0;
	this->is_new = false;
	this->types_ids_parameter = types_ids_parameter; 
	this->return_type_ref = nullptr;
	this->is_constructer = return_type == "";

	this->exist_ovrride = false; 
	this->must_ovrride = true; 
	this->stackFrameSize = 8;
}

void Method::add_attributes(queue<string>&attributes , string name_parent,bool is_body)
{
	while (!attributes.empty())
	{

		if (name_parent == "interface")
		{
			if (attributes.front() != "NEW") {
				error_handler.add(error(this->getLineNo(),this->getColNo(), "attribute error, the modifier '" + attributes.front() + "' is not valid for this item"));
				attribute->add(attributes.front(), attributes.size());
				attributes.pop();
				continue; 
		   }
		}
		if (!is_new && attributes.front() == "NEW")
			is_new = true;
		if (!isFinal && attributes.front() == "SEALED")
			isFinal = true;
		if (!is_static && attributes.front() == "STATIC")
			is_static = true;
		if (!is_abstract && attributes.front() == "ABSTRACT")
			is_abstract = true;
		if (!is_override && attributes.front() == "OVERRIDE")
			is_override = true;
		if (!is_virtual && attributes.front() == "VIRTUAL")
			is_virtual = true ;
		if (!is_extern && attributes.front() == "EXTERN")
		     is_extern = true;
		if (!is_public && attributes.front() == "PUBLIC")
			is_public = true, is_protected = is_private = is_internal = false;
		if (!is_public && attributes.front() == "PROTECTED")
			is_protected = true, is_private = false;
		if (!is_public && !is_private && attributes.front() == "INTERNAL")
			is_internal = true, is_public = is_private = false;
		if (!is_public && !is_protected && attributes.front() == "PRIVATE")
			is_private = true;
	   

		attribute->add(attributes.front(),attributes.size());
		attributes.pop();
	}
	if ( is_body && (is_extern || is_abstract)) {
		error_handler.add(error(this->getLineNo(), this->getColNo(),this->getName()+ " must declare a body because it is not marked abstract, extern, or partial"));
	}
	return;
}

string Method::getType()
{
	return "method";
}

string Method::get_return_type()
{
	return return_type;
}

bool Method::is_final()
{
	return isFinal;
}

void Method::setParameters(vector <LocalVariable*> params) {
	this->types_ids_parameter = params;
	return;
}

vector<LocalVariable*>& Method::get_parameters()
{
	return types_ids_parameter; 
}



void Method::add_parametars(queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > parameters, queue<int>params_dimension, queue<Node*>var_init)
{
	while (!parameters.empty())
	{
		LocalVariable *newLocalVariable = new LocalVariable(parameters.front().first.first.first, parameters.front().first.first.second, params_dimension.front(), true, false, parameters.front().first.second.first, parameters.front().first.second.second);
		
		newLocalVariable->offset = this->stackFrameSize;
		this->stackFrameSize += 4;

		newLocalVariable->setInitializedStatus();
		
		Variable* field = new Variable(newLocalVariable, (Expression*)var_init.front(), Node::current);

		((Procedure*)Node::current)->add(field);
		
		types_ids_parameter.push_back(newLocalVariable);
		
		if (var_init.front() != nullptr)
			this->default_counter++;

		parameters.pop();

		params_dimension.pop();

		var_init.pop();
	}
}

int Method::get_parametars_count()
{
	return types_ids_parameter.size();
}

bool Method::compare(Symbol* comp)
{
	if (getName() == comp->getName() && comp->getType() == "method")
	{
		int params_cnt = get_parametars_count();
		int sec_params_cnt = ((Method*)comp)->get_parametars_count();
		
		if (params_cnt != sec_params_cnt && Method::compare_status) {
			return params_cnt > sec_params_cnt;
		}
		else if(! Method::compare_status){
			if (!(params_cnt - default_counter <= sec_params_cnt && sec_params_cnt <= params_cnt)) {
				return  params_cnt > sec_params_cnt;
			}
		}

		vector<LocalVariable*> &p1 = get_parameters();
		vector<LocalVariable*> &p2 = ((Method*)comp)->get_parameters();
		for (int i = 0;i < p2.size();i++)
		{
			if (p1[i]->get_type_name() != p2[i]->get_type_name())
				return p1[i]->get_type_name() > p2[i]->get_type_name();
			if (p1[i]->getDimension() != p2[i]->getDimension())
				return p1[i]->getDimension() > p2[i]->getDimension();
		}
		return false;
	}
	return getName() > comp->getName();
}

void Method::set_return_type(Symbol* ref)
{
	return_type_ref = ref;
	return;
}

bool Method::get_is_static() 
{
	return is_static;
}

bool Method::get_is_abstract() 
{
	return is_abstract;
}

bool Method::get_is_override()
{
	return is_override;
}

bool Method::get_is_virtual()
{
	return is_virtual;
}

bool Method::get_is_public()
{
	return is_public;
}

bool Method::get_is_private()
{
	return is_private;
}

bool Method::get_is_protected()
{
	return is_protected;
}

bool Method::get_is_internal()
{
	return is_internal;
}
bool Method::get_is_must_ovrride()
{
	return must_ovrride; 
}

void Method::set_must_ovrride(bool must_override)
{
	this->must_ovrride = must_override;
}

Method::~Method()
{
}
