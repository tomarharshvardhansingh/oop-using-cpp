#include <iostream>
 
 // arrays are always passed by refernce
void modifyElements(int arr[] , int size);

 int main(){
 	int arr[] = { 1 ,2 ,3 ,4 ,5 ,6,7,8 ,9};
 	int size = sizeof(arr)/sizeof(arr[0]);
 	std::cout<<"Before Modifaction "<<"\n";
 	for(int i = 0 ; i<size ; i++){
 		std::cout<<arr[i]<<"\t";
 	}
 	std::cout<<"\n";
 	std::cout<<"After Modifaction"<<"\n";
 	modifyElements(arr , size);
 	for(int i = 0 ; i<size ; i++){
 		std::cout<<arr[i]<<"\t";
 	}
 	return 0;
 }

 void modifyElements(int arr[] , int size){
 	for(int i = 0 ; i<size ; i++){
 		arr[i]++;
 	}
 }