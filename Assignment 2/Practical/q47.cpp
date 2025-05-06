#include<iostream>

using namespace std;

int fib(int n);

int main(){
	int n ;
	repeat:
	cout<<"Enter the Number : ";
	cin>>n;
	if(n < 0 ){
		cout<<"You Enter a Negative Number"<<endl;
		goto repeat;
	}

	for(int i = 0 ; i<=n ; i++){
		cout<<fib(i)<<" ";
	}

	return 0;
}

int fib(int n){
	if(n==0){
		return 0;
	}

	if(n==1){
		return 1;
	}

	return(fib(n-1) + fib(n-2));
}