#include "Call.h"
Call::Call()
{
}
Call::Call(Object *proc)
{
	this->proc = proc;
}
Call::~Call()
{
}
