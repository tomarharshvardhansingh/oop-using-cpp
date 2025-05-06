#include<iostream>
#define SQ(x) ((x) * (x))

int main(){
	int n = 5;
	std::cout<<SQ(n);
	return 0;
}

//In general, 
//macros are faster than inline functions because macros are simple text substitutions and do not involve any function call overhead. 
//However, inline functions provide type safety and better debugging support.