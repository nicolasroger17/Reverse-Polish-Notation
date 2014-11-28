#ifndef __UNARY_H__
#define __UNARY_H_

#include "Expression.h"

class Unary_Exp : public Expression{
public:
	// Binary expression needs one Expression and one operator
	Expression * expression;
	std::string op;

public:
	Unary_Exp(Expression * exp, std::string& op);
	// virtual methods overloaded
	virtual std::string prettyprint();
	virtual int evaluate();
	// virtual destructor
	virtual ~Unary_Exp();
};

#endif
