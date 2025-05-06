#include<iostream>
using namespace std;

int main(){
    int* arr = new int[5];
    int* ptr = arr;

    for(int i = 0 ; i<5 ;i++){
        arr[i] = 0;
    }

    for(int i = 0; i<5 ; i++){
        *(ptr + i) += 5;
    }

    for(int i  = 0 ; i<5 ; i++){
        cout<<*(ptr + i)<<endl;
    }
    delete[] arr;
    return 0;
}