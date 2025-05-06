#include<iostream>

inline square(int n){
	return(n*n);
}

int main(){
	int n ;
	std::cout<<"Enter the number: ";
	std::cin>>n;
	std::cout<<square(n);
	return 0;
}