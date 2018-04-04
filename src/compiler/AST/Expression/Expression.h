#pragma once
#include "../Node.h"



enum Operator {
	Plus, Minus, tilde, post_plusplus,pre_plusplus, pre_minusminus, post_minusminus, True, False,
	star, slash, percent, And, Or , power, ltlt, gtgt, question_mark, oror, andand, Greater, smaller, geq, leq, noteq, eqeq,
	exclamation_point, Equal = 10001, pluseq, minuseq, stareq, diveq, modeq, xoreq, andeq, oreq, gtgteq, ltlteq,Is,As
};


class Expression : public Node
{
public:
	Expression() {}
	Expression(Node* parent);
	
	virtual int print(int) = 0;
	
	virtual string getType();

	~Expression();
};

