#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    double a = 12.122132;
    cout<<setw(40)<<"Setw"<<endl;
    cout<<setprecision(4)<<a<<endl;
    cout<<fixed<<setprecision(4)<<a<<endl;
    return 0;
}