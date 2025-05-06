#include<iostream>

using namespace std;

int main(){
	for(int i =  1 ; i<=100 ; i++){
        bool isPrime = true;
        for(int j = 2 ; j<=(i/2) ; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }  
        if(isPrime){
            cout<<i<<" ";
        }
    }
	return 0;
}