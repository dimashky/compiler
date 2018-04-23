#include "all.h"
#include <map>

TypesTable::TypesTable() {

}

map<string, TypeExpression*> TypesTable::table = map<string, TypeExpression*>();

TypeExpression* TypesTable::findOrCreate(string type) {
	auto result = TypesTable::table.find(type);
	if (result != TypesTable::table.end()) {
		return result->second;
	}
	else {
		return TypesTable::table[type] = new TypeClass(type);
	}
}

void TypesTable::init() {
	TypesTable::table["INT"] = TypeInteger::getInstance();
	TypesTable::table["STRING"] = TypeString::getInstance();
	TypesTable::table["CHAR"] = TypeString::getInstance();
	TypesTable::table["FLOAT"] = TypeFloat::getInstance();
	TypesTable::table["BOOL"] = TypeBoolean::getInstance();
	TypesTable::table["VOID"] = TypeVoid::getInstance();
	TypesTable::table["Object"] = new TypeClass("Object");
}

TypeExpression* TypesTable::getType(string type) {
	auto result = TypesTable::table.find(type);
	if (result != TypesTable::table.end()) {
		return result->second;
	}
	return nullptr;
}

bool TypesTable::setType(string type, TypeExpression* typeExpression) {
	auto result = TypesTable::table.find(type);
	if (result != TypesTable::table.end()) {
		return false;
	}
	TypesTable::table[type] = typeExpression;
	return true;
}
