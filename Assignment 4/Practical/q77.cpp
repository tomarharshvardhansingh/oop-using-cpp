#include<iostream>
#include<string>
using namespace std;

template<typename T>

int find(T arr[] , int n , T val){
    for(int i = 0; i<n ; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1 , 2, 3 ,4,5};
    cout<<find(arr, 5 , 2)<<endl;

    string arrS[] = {"Jay" , "Harsh" , "Rohan"};
    cout<<find(arrS , 3 , string("Jay"))<<endl;
    return 0;
}
