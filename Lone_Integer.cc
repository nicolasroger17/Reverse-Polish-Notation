#include "Lone_Integer.h"
#include <sstream>

Lone_Integer::Lone_Integer(int exp):expression(exp){}

std::string Lone_Integer::prettyprint(){
	// convert int to string
	std::ostringstream converter;
	converter << expression;
	return converter.str();
}

int Lone_Integer::evaluate(){
	return expression;
}