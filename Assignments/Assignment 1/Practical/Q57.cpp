#include<iostream>

using namespace std;

int main(){
	int arr[] = { 1 , 2 , 3, 4 ,3 , 5 ,6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        bool isDulp = true;
        for(int j = 0; j<n ; j++){
            if(arr[i] == arr[j] && i!= j){
                cout<<arr[i]<<endl;
                isDulp = false;
                break;
            }
        }
        if(isDulp == false){
            break;
        }
    }
}