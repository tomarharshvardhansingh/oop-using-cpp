#include<iostream>

using namespace std;

int main(){
    int arr[5] = {1 ,2 , 3, 4,5};
    int* arrPtr = arr;

    for(int i = 0 ; i<5 ; i++){
        *(arrPtr + i) += 5;
    }

    for(int i = 0; i<5 ; i++){
        cout<<*(arrPtr + i)<<endl;
    }
    return 0;
}