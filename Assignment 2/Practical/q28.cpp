#include<iostream>

using namespace std;

long long factorial(int n);

int main(){
	int n ;
	cout<<"Enter the Number n:- ";
	cin>>n;
	cout<<n<<"! is"<<factorial(n);
	return 0;
}

long long factorial(int n){
	long long fac = 1;
	for(int i =  1 ; i<=n ; i++){
		fac *= i;
	}
	return fac ;
}