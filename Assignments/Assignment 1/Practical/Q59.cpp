#include<iostream>

using namespace std;

int main(){
	int a , b , maxVal , lcm;
    cout<<"Enter a & b"<<endl;
    cin>>a>>b;
    maxVal = a ;
    if(maxVal < b){
        maxVal = b;
    }
    lcm = maxVal;
    while(1){
        if(lcm % a == 0 && lcm%b == 0){
            break;
        }
        lcm++;
    }
    cout<<"LCM of "<<a<<" & "<<b<<" is "<<lcm<<endl;
	return 0;
}