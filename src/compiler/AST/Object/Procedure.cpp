#include"Procedure.h"
Procedure::Procedure()
{

}
Procedure::Procedure(string name, Procedure* program)
{
	Object::Object(UNDEF, name );
	this->program = program;
}
Procedure::~Procedure()
{

}