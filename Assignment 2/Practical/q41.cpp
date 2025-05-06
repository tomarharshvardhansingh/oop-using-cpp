#include<iostream>
#define PI 3.14
using namespace std;

double area(double r){
	return(PI*r*r);
}
double area(float l , float w){
	return(l*w);
}
double area(double base , double height){
	return(0.5 * base * height);
}

int main(){
	double r = 3.12, base = 11 , height = 9;
    float  l = 23 , w = 10 ;
	cout<<"area of cirlce : "<<area(r)<<endl
		<<"area of rectangle : "<<area(l ,w)<<endl
		<<"area of triangle : "<<area(base , height)<<endl;

	return 0;
}

