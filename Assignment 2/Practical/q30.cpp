#include<iostream>
#define PI 3.14
using namespace std;

double areaOfCircle(double r);

int main(){
	double r ;
	cout<<"Enter the Radius of Circle : ";
	cin>>r;
	cout<<"Area of Circle is "<<areaOfCircle(r)<<endl;
	return 0;
}

double areaOfCircle(double r){
	double area = PI*r*r;
	return area;
}