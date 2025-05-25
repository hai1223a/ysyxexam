# capstone library name (without prefix 'lib' and suffix '.so')
LIBNAME = capstone

test1: test1.o
	${CXX} $< -O3 -Wall -ldl -Lcapstone/repo -lcapstone -o $@

%.o: %.cpp
	${CXX} -c $< -o $@