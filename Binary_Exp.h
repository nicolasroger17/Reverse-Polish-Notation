#ifndef __BINARY_H__
#define __BINARY_H__

#include "Expression.h"

class Binary_Exp : public Expression{
private:
	// Binary expression needs two Expressions and one operator
	Expression * leftExp;
	Expression * rightExp;
	std::string op;

public:
	Binary_Exp(Expression * exp1, Expression * exp2, std::string& op);
	// virtual methods overloaded
	virtual std::string prettyprint();
	virtual int evaluate();
	// virtual destructor
	virtual ~Binary_Exp();
};

#endif
