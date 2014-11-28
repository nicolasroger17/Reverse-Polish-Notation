CXX = g++
CXXFLAGS = -Wall -MMD
EXEC = RPN
OBJECTS = RPN.o Stack.o Expression.o Unary_Exp.o Lone_Integer.o  Binary_Exp.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
