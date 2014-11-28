#include "Stack.h"
#include "Expression.h"
#include "Lone_Integer.h"
#include "Unary_Exp.h"
#include "Binary_Exp.h"

using namespace std;

int main(){
	// stack to store Expressions
	Stack * stack = new Stack();
	// int to pass the input to Lone_Integer
	int expInt = 0;
	// variable to store input
	string expStr = "";

	// loops until end of file/input
	while (cin >> expStr){
		// create an istringstrea to convert
		// string to int
		std::istringstream iss(expStr);
		// if convertion possible, create a Lone_Integer
		if (iss >> expInt){
			// if already too much input, exit
			if (stack->isFull()){
				delete stack;
				cerr << "Stack Overflow" << endl;
				return 1;
			}
			stack->push(new Lone_Integer(expInt));
		}
		else{
			// if only 1 char long, it's a binary expression
			if (expStr.length() > 1)
				stack->push(new Unary_Exp(stack->pop(), expStr));
			// else is a unary expression
			else{
				Expression * r = stack->pop();
				Expression * l = stack->pop();
				stack->push(new Binary_Exp(l, r, expStr));
				r = 0;
				l = 0;
			}
		}
	}
	if (!stack->isEmpty()){
		Expression * p = stack->pop();
		cout << p->prettyprint() << endl;
		cout << "= " << p->evaluate() << endl;
		delete p;
	}
	delete stack;
	return 0;
}
