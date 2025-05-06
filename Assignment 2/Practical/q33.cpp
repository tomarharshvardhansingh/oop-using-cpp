#include<iostream>

using namespace std;

void swap(int &a , int &b);

int main(){
	int a , b;
	cout<<"Enter a and  b :- ";
	cin>>a>>b;
	cout<<"Orginal Values"<<endl
		<<"a = "<<a<<" "<<"b = "<<b<<endl
		<<"After Swap"<<endl;
		swap(a , b);

	cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
	return 0;
}

void swap(int &a , int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}