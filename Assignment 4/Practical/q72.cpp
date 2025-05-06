#include<iostream>
#include<stdexcept>

using namespace std;

int divide(int a , int b){
    if(b==0){
        throw runtime_error("Try to divide by zero");
    }
    return a/b;
}

int main(){ 
    int a = 10 , b = 0;
    try{
        divide(a , b);
    }catch(const runtime_error& e){
        cout<<e.what()<<endl;
    }
    return 0;
}
