#include "Binary_Exp.h"

Binary_Exp::Binary_Exp(Expression * exp1, Expression * exp2, std::string& op):leftExp(exp1), rightExp(exp2), op(op){}

std::string Binary_Exp::prettyprint(){
	// return the expression prettyprinted with brackets
	return "(" + leftExp->prettyprint() + " " + op + " " + rightExp->prettyprint() + ")";
}

int Binary_Exp::evaluate(){
	// make the good calculation
	if (op == "+")
		return (leftExp->evaluate() + rightExp->evaluate());
	else if (op == "-")
		return (leftExp->evaluate() - rightExp->evaluate());
	else if (op == "/")
		return (leftExp->evaluate() / rightExp->evaluate());
	else if (op == "*")
		return (leftExp->evaluate() * rightExp->evaluate());
	// avoid warnings
	return 0;
}

Binary_Exp::~Binary_Exp(){
	delete leftExp;
	delete rightExp;
}
