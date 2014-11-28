#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__

#include <iostream>
#include <sstream>

class Expression{
public:
	Expression();
	// virtual destructor
	virtual ~Expression(){};
	virtual std::string prettyprint();
	virtual int evaluate();
};

#endif
