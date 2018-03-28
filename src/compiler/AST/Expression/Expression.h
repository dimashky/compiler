#pragma once
#include "../Node.h"



enum Operator {
	//Operators
	PLUS, MINUS, TILDE, PLUSPLUS, MINUSMINUS, TRUE, FALSE, STAR,
	SLASH, PERCENT, AND, OR, POWER, LTLT, GTGT,

	//cond Op
	QUESTION_MARK, OROR, ANDAND, GREATER, SMALLER, GEQ, LEQ, NOTEQ, EQEQ, EXCLAMATION_POINT,

	//assignment Op
	EQUAL, PLUSEQ, MINUSEQ, STAREQ, DIVEQ, MODEQ, XOREQ, ANDEQ, OREQ, GTGTEQ, LTLTEQ
};


class Expression : Node
{
public:
	Expression();
	~Expression();
};

