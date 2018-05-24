#include "Assignment.h"
#include "../Expression/AutoConst.h"

Assignment::Assignment(Identifier *left, Operator op, Node *right, Node *parent) :Statement(parent)
{
	this->left = left; 
	this->right = right;
	this->op = op;
}

string Assignment::getType() {
	return "assignment";
}

int Assignment::print(int nodeCnt) {

	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#74bffc'},", currentId, OperatorName[op].c_str());

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = left->print(nodeCnt + 1);
	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = right->print(nodeCnt + 1);

	return nodeCnt;
}

bool Assignment::typeChecking() {
	if (left) {

		Identifier::leftAssignment = true;
		Identifier::isAssigned = true;
		left->typeChecking();

		if (left->getType() == "identifier") {
			//i dont know why this if is here
			if (((Identifier*)left)->getPreDot() != nullptr && !((Identifier*)left)->isAssigned) {
				new TypeError("Warning for using Dot operator in unassigned variable", ((Identifier*)left)->getPostDot()->getLineNo());
			}
			if (((Identifier*)left)->getIsConst()) {
				this->left->nodeType = new TypeError("cannot assign to const variable", ((Identifier*)left)->getPostDot()->getLineNo());
			}
			if (((Identifier*)left)->getIsReadonly()) {
				Node* current = this->parent;
				while (current->getType() != "procedure") {
					current = current->getParent();
				}
				if (!((Method*)((Procedure*)current)->getSymbol())->get_is_constructer()) {
					this->left->nodeType = new TypeError("cannot assign to readonly field outside constructer", ((Identifier*)left)->getPostDot()->getLineNo());
				}
			}
		}

		Identifier::leftAssignment = false;

	}
	if (right) {
		right->typeChecking();
	}
	if (left && right) {
		this->nodeType = left->nodeType->operation(Operator::Equal, right->nodeType);
		if (this->nodeType->getTypeId() != TYPE_ERROR)
			return true;
	}
	if (left->getType() == "identifier") {
		this->nodeType = new TypeError("invalid assignment operation", ((Identifier*)left)->getPostDot()->getLineNo());
	}
	else {
		this->nodeType = new TypeError("assignment left side must be identifier", ((AutoConst*)left)->getLineNo());
	}
	return true;
}

Assignment::~Assignment()
{
}
