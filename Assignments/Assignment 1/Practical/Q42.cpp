#include<iostream>

using namespace std;

int main(){
	int arr[] = { 10 , 9 , 8 , 1 ,222 ,232 , 0 , 111 , -1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    for(int i = 0 ; i<size ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<min;
    return 0;
}