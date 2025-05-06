#include<iostream>
#include<string>
using namespace std;

template<typename T>

void compare(T a , T b ){
    if(a > b){
        cout<<a<<" is bigger"<<endl;
    }else if (a < b){
        cout<<b<<" is bigger"<<endl;
    }else{
        cout<<"Both are same"<<endl;
    }
}

int main(){
    int a = 10 , b = 20;
    float x = 9.99 , y = 9.82;

    compare(a ,b);
    compare(x , y);
    return 0;
}
