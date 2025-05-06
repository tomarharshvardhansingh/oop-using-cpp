#include<iostream>

using namespace std;

int main(){
	 // harmonic series = 1/1 + 1/2 + 1/3 ....
    double sum = 0;
    int n ;
    cout<<"Enter the number n :- ";
    cin>>n;
    for(double i = 0 ; i< n ; i++){
        sum+=(1/(1+i));
    }
    cout<<sum;
	return 0;
}