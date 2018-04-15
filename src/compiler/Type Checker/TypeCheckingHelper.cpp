#include "all.h"
#include <string>

std::string TypeCheckingHelper::getTypeName(int typeId){
	switch (typeId)
	{
	case TYPE_ERROR:
		return "ERROR_TYPE";
	case TYPE_BOOL:
		return "BOOL";
	case TYPE_INTEGER:
		return "INT";
	case TYPE_CHAR:
		return "CHAR";
	case TYPE_FLOAT:
		return "FLOAT";
	case TYPE_FUNCTION:
		return "FUNCION";
	case TYPE_CLASS:
		return "CLASS";
	case TYPE_STRING:
		return "STRING";
	default:
		break;
	}
}