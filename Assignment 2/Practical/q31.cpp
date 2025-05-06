#include<iostream>

using namespace std;

long product(int a , int b);

int main(){
	int a , b;
	cout<<"Enter a and b : ";
	cin>>a>>b;
	cout<<"The product of "<<a<<" and " <<b<<" is "<<product(a , b);
	return 0;
}

long product(int a , int b){
	return(a*b);
}