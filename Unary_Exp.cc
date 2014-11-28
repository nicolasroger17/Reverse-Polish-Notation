#include "Unary_Exp.h"
#include <cmath>

Unary_Exp::Unary_Exp(Expression * exp, std::string& op):expression(exp), op(op){}

std::string Unary_Exp::prettyprint(){
	// return the expression prettyprinted with proper output
	if (op == "ABS")
		return "|" + expression->prettyprint() + "|";
	else if (op == "NEG")
		return "-" + expression->prettyprint();
}

int Unary_Exp::evaluate(){
	// return the good calculation
	if (op == "ABS")
		return std::abs(expression->evaluate());
	else if (op == "NEG")
		return (-expression->evaluate());
}

Unary_Exp::~Unary_Exp(){
	delete expression;
}
