// 32.	Write a C++ program to print the Fibonacci series up to a given number of terms using a for loop.

#include <iostream>
using namespace std;

int main(){
    int n, first=0, second=1, next;
    cout<<"Enter Number to Get Fibonacci Series: ";
    cin>>n;

    cout<<"Fibonacci Series: "<<endl;

    for(int i=0; i<n; i++){
        if(i<=1){
            next=i;
        }
        else {
        next= first+second;
        first=second;
        second=next;
        }
        cout<<next<<endl;
    }
        return 0;
}