#include <iostream>

inline int sum(int a , int b){
	return (a+b) ;
}

int main(){
	int a , b ;

	std::cout<<"Enter the Numbers "<<std::endl;
	std::cin>>a>>b;

	int result = sum(a , b);
	std::cout<<"Sum = "<<result;

	return 0;
}