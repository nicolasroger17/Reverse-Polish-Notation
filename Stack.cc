#include "Stack.h"

Stack::Stack(){
	// initialize to -1 because it's empty
	top = -1;
	array = new Expression*[CAPACITY];
}

Stack::~Stack(){
	// delete objects and then the array
	for (int i = 0; i < CAPACITY; i++)
		delete array[i];
	delete[] array;
}

void Stack::push(Expression *exp){
	// if not full increase current top and add Expression
	if (!isFull()){
		top++;
		array[top] = exp;
	}
}

Expression* Stack::pop(){
	// if not empty pop an element and decrease current top
	if (!isEmpty()){
		Expression * last = array[top];
		array[top] = 0;
		top--;
		return last;
	}	
}

bool Stack::isFull(){
	return top == this->CAPACITY - 1;
}

bool Stack::isEmpty(){
	return top < 0;
}
