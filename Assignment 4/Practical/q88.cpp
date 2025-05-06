#include<iostream>
using namespace std;
void add(int a , int b){
    cout<<(a + b)<<endl;
}

void sub(int a , int b){
    cout<<(a- b)<<endl;
}

void mul(int a , int b){
    cout<<(a*b)<<endl;
}


void execute(void(*callback)(int , int) , int x, int y){
        callback(x , y);
}

int main(){
    int x = 10 , y = 20;
    execute(add ,x , y );
    execute(sub , x , y);
    return 0;
}
