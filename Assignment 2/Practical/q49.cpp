#include<iostream>

using namespace std;

template <typename T>

T findMax(T a , T b){
	return (a>b)  ? a:b;
}

int main(){
	int x = 5 , y = 10;
	cout<<"Max of "<<x<<" and "<<y<<" is :"<<findMax(x ,y)<<endl;

	double a = 2.33 , b = 2343.2;
	cout<<"Max of "<<a<<" and "<<b<<" is : "<<findMax(a , b)<<endl;
	return 0;
}