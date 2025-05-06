#include<iostream>

using namespace std;

int main(){
	int decimalNumber , power = 1 , binaryNumber = 0 ;
    cout<<"Enter the Number :- ";
    cin>>decimalNumber;
    while(decimalNumber >0 ){
        int rem = decimalNumber%2;
        binaryNumber = binaryNumber+ rem*power;
        decimalNumber /=2 ;
        power*= 10;
    }
    cout<<binaryNumber;
	return 0;
}