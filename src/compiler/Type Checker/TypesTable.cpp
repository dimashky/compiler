#include "all.h"

TypesTable::TypesTable() {

}

TypeExpression* TypesTable::getType(string type) {
	auto result = this->table.find(type);
	if (result != this->table.end()) {
		return result->second;
	}
	return nullptr;
}

bool TypesTable::setType(string type, TypeExpression* typeExpression) {
	auto result = this->table.find(type);
	if (result != this->table.end()) {
		return false;
	}
	this->table[type] = typeExpression;
	return true;
}
