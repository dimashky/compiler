#include "UnaryExpression.h"
#include "Identifier.h"
#include "AutoConst.h"

UnaryExpression::UnaryExpression(Operator op, Node *expression, Node* parent):Expression(parent)
{
	this->op = op; 
	this->expression = expression;
}
string UnaryExpression::getType()
{
	return "uexpression";
}
int UnaryExpression::print(int nodeCnt)
{
	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#74bffc'},", nodeCnt, OperatorName[op].c_str());

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", nodeCnt, nodeCnt + 1);

	nodeCnt = expression->print(nodeCnt + 1);
	
	return nodeCnt;
}

bool UnaryExpression::typeChecking() {
	if (this->expression->typeChecking()) {
		// TODO  : modify this after handeling cast expression from yacc  
		if (op == post_plusplus || op == pre_plusplus || op == post_minusminus || op == pre_minusminus) {
			if (this->expression->getType() == "assignment" || this->expression->getType() == "identifier")
				this->nodeType = this->expression->nodeType->operation(this->op);
			else
			{
				this->nodeType = new TypeError("invalid Unary Expression with operator " + OperatorName[op]);
				return false;
			}
		}
		else {
			this->nodeType = this->expression->nodeType->operation(this->op);
		}
		return true;
	}
	return false;
}

UnaryExpression::~UnaryExpression()
{
}
