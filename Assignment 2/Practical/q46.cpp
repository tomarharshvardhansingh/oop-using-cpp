#include<iostream>
#include <cmath>
using namespace std;

double power(double base , int exponent = 2);

int main(){
	double  base ;
	int exponent;

	cout<<"Enter the base ";
	cin>>base;

	cout<<"Enter the exponent(default is 2) ";
	cin>>exponent;

	double result = power(base , exponent);
	cout<<result;
	return 0;
}

double power(double base , int exponent){
	double  r = pow(base , exponent);
	return r;
}