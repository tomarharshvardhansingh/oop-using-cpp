#include<iostream>
#include<stdexcept>
#include<exception>


using namespace std;

void checkIndex(int i){
    if(i<0){
        throw out_of_range("Error: Index can not found");
    }
}

int find(int arr[] , int n , int val ){
    for(int i =0; i<n ; i++){
        if(arr[i] == val){
            return i;
        }
    }
    
    throw string("Value not in array");
}

int main(){ 
    int arr[5] = {0 , 1, 2, 3 , 4};
    try{
        checkIndex(-1);
    }catch(const out_of_range& f){
        cout<<f.what()<<endl;
    }catch(string& e){
        cout<<e<<endl;
    }

    try{
        find(arr , 5 , 6);
    }catch(const out_of_range& e){
        cout<<e.what()<<endl;
    }catch(string& e){
        cout<<e<<endl;
    }
    return 0;
}
