// 34.	Write a C++ program to print the sum of all even numbers between 1 and 100 using a for loop.

#include <iostream>
using namespace std;

int main(){
    int sum=0;
    for(int i=0; i<=100; i++){
        if(i%2==0){
            sum +=i;
        }
    }
    cout<< "Sum of all Even Number Between 1 to 100 is: "<<sum<<endl;

    return 0;
}