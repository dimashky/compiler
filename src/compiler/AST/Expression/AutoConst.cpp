#include "AutoConst.h"
#include "../../Type Checker/all.h"
AutoConst::AutoConst(string type, void* value, Node* parent):Expression(parent)
{
	this->type = type;
	this->value = value; 

	this->nodeType = TypesTable::getType(type).first;
}

string AutoConst::getType() 
{
	return this->type;
}

int AutoConst::print(int nodeCnt)
{
	if (type == "INT") {
		fprintf(nodesFile, "{ id:%d, label:'%d', shape: 'box', color:'#47fcfc'},", nodeCnt, *((int*)value));
	}
	else if (type == "STRING") {
		fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#47fcfc'},", nodeCnt, (*((string*)value)).c_str());
	}
	else if (type == "FLOAT") {
		fprintf(nodesFile, "{ id:%d, label:'%f', shape: 'box', color:'#47fcfc'},", nodeCnt, *((float*)value));
	}
	else if (type == "CHAR") {
		fprintf(nodesFile, "{ id:%d, label:\"%c\", shape: 'box', color:'#47fcfc'},", nodeCnt, *((char*)value));
	}
	else if (type == "BOOL") {
		fprintf(nodesFile, "{ id:%d, label:\"%c\", shape: 'box', color:'#47fcfc'},", nodeCnt, *((bool*)value));
	}
	return nodeCnt;

}

void AutoConst::setType(string type)
{
	this->type = type;
}

void* AutoConst::getValue()
{
	return value;
}

void AutoConst::setValue(void* value)
{
	this->value=value; 
}

void AutoConst::generateCode() {
	if (this->type == "INT") {
		AsmGenerator::li("t0", *((int*)this->value));
	}
	else if (this->type == "BOOL") {
		AsmGenerator::li("t0", *((bool*)this->value));
	}
	AsmGenerator::push("t0");
}

AutoConst::~AutoConst()
{
}
