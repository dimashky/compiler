#include "all.h"
#include <map>
#include "../Symbol Table/symbolTable.h"
TypesTable::TypesTable() {

}

map<string, pair<TypeExpression*, Symbol*>> TypesTable::table = map<string, pair<TypeExpression*, Symbol*>>();

TypeExpression* TypesTable::findOrCreate(string type, Symbol* symbol) {
	auto result = TypesTable::table.find(type);
	if (result != TypesTable::table.end()) {
		return result->second.first;
	}
	else {
		return (TypesTable::table[type] = make_pair(new TypeClass(type), symbol)).first;
	}
}

void TypesTable::init() {
	TypesTable::table["INT"] = make_pair(TypeInteger::getInstance(), nullptr);
	TypesTable::table["STRING"] = make_pair(TypeString::getInstance(), nullptr);
	TypesTable::table["CHAR"] = make_pair(TypeString::getInstance(), nullptr);
	TypesTable::table["FLOAT"] = make_pair(TypeFloat::getInstance(), nullptr);
	TypesTable::table["BOOL"] = make_pair(TypeBoolean::getInstance(), nullptr);
	TypesTable::table["VOID"] = make_pair(TypeVoid::getInstance(), nullptr);
	TypesTable::table["Object"] = make_pair(new TypeClass("Object"), symbolTable::object_ref->get_owner());
}

pair<TypeExpression*,Symbol*> TypesTable::getType(string type) {
	auto result = TypesTable::table.find(type);
	if (result != TypesTable::table.end()) {
		return result->second;
	}
	return make_pair(nullptr, nullptr);
}

