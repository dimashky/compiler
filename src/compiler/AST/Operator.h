#pragma once
#ifndef OPERATOR_H_
#define OPERATOR_H_
#include <string>

enum Operator {
	Plus = 0, Minus, tilde, post_plusplus, pre_plusplus, pre_minusminus, post_minusminus, True, False,
	star, slash, percent, And, Or, power, ltlt, gtgt, question_mark, oror, andand, Greater, smaller, geq, leq, noteq, eqeq,
	exclamation_point, Equal, pluseq, minuseq, stareq, diveq, modeq, xoreq, andeq, oreq, gtgteq, ltlteq, Is, As
};

extern const std::string OperatorName[];


#endif