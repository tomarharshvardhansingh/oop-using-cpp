#include<iostream>

using namespace std;

int main(){
	// right angle triangle
    for(int i = 0 ; i< 10 ; i++){
        for(int j = 0 ; j<i ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
	return 0;
}