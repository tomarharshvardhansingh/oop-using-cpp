#include<iostream>

using namespace std;

void displayElement(int arr[] , int size );

int main(){
	int arr[] = {1 , 2,3 ,4 ,5,6,7,8,9};
	int size  = sizeof(arr)/sizeof(arr[0]);
	displayElement(arr , size);
	return 0;
}

void displayElement(int arr[] , int size){
	for(int i = 0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
}