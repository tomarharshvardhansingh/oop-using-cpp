// 33.	Write a C++ program to count the number of digits in a given number using a while loop.

#include <iostream>
using namespace std;

int main(){
    int i, count=0;
    cout<<"Enter your Number to find digit count: ";
    cin>>i;
    if(i==0){
        cout<<"0";
    }
    else{
        while(i>0){
            i/=10;
            count++;
        }
        cout<< "Digit Count is: "<<count;
    }
    return 0;
}