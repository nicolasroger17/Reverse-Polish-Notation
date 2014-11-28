#ifndef __LONE_H__
#define __LONE_H__

#include "Expression.h"

class Lone_Integer : public Expression{
	// store an int
	int expression;
public:
	Lone_Integer(int exp);
	// virtual methods overloaded
	virtual std::string prettyprint();
	virtual int evaluate();
	// virtual destructor
	virtual ~Lone_Integer(){};
};

#endif
