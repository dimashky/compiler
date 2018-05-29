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


void Assignment::generateCode() {

	right->generateCode();
	if (right->getType() == "call") {
		AsmGenerator::lw("t0", "sp", 0);
		AsmGenerator::push("t0");
	}

	// temp dirty code for static
	if (left->getPostDot()->getType() == "field" && ((Field*)left->getPostDot())->getIsStatic()) {
		AsmGenerator::pop("t0");
		AsmGenerator::addInstruction("la $a0, " + left->getPostDot()->getFullPath());
		AsmGenerator::addInstruction("move $a1, $t0");
		AsmGenerator::addInstruction("sw $a1, 0($a0)");
		return;
	}

	if (left->getPreDot()) {
		left->getPreDot()->generateCode();
		if (left->getPreDot()->getType() == "call") {
			AsmGenerator::lw("t1", "sp", 0);
		}
		else {
			AsmGenerator::pop("t1");
		}
	}
	else {
		if (left->getPostDot()->getType() == "field") {
			AsmGenerator::lw("t1", "fp", -4);
		}
		else {
			AsmGenerator::addInstruction("move $t1, $fp");
		}
	}

	if (left->dimensions.size() == 0) {
		AsmGenerator::pop("t0");	// right value
		AsmGenerator::sw("t0", "t1", -1 * left->getPostDot()->offset);
		return;
	}

	/* Array Handling */
	AsmGenerator::push("t1");

	left->dimensions[0]->generateCode();
	AsmGenerator::pop("t0"); // index value
		
	AsmGenerator::pop("t1"); // prev t1 
		
	AsmGenerator::addInstruction("subi $t1, $t1, " + to_string( left->getPostDot()->offset));
		
	AsmGenerator::lw("t1", "t1", 0);
		
	AsmGenerator::addInstruction("addi $t4, $0, 4");
	AsmGenerator::addInstruction("mul $t0, $t0, $t4");
		
	AsmGenerator::addInstruction("add $t1, $t1, $t0");
		
	AsmGenerator::pop("t0"); // right value 
	AsmGenerator::sw("t0", "t1", 0);
}

Assignment::~Assignment()
{
}
