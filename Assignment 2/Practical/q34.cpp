#include<iostream>

using namespace std;

void increment(int &a );

int main(){
	int a ;
	cout<<"Enter the Number :- ";
	cin>>a;
	cout<<"a before increment"<<endl;
	cout<<a<<endl;
	increment(a);
	cout<<"a after increment"<<endl;
	cout<<a;
	return 0;
}

void increment(int &a){
	a+=10;
}