#ifndef __STACK_H__
#define __STACK_H__

#include "Expression.h"

class Stack{
private:
	// store the current top of the Stack
	int top;
	// maximum of Stack capacity
	static const unsigned int CAPACITY = 10;
	// array of pointer to objects on the heap
	Expression ** array;
public:
	Stack();
	~Stack();
	void push(Expression * exp);
	Expression* pop();
	bool isFull();
	bool isEmpty();
};

#endif