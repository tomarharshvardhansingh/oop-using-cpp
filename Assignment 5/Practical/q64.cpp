#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<setw(10)<<"Roll No"
        <<setw(15)<<"Name"
        <<setw(10)<<"Marks"<<endl;
    
    cout<<setw(37)<<"----------------------------------"<<endl;

    cout<<setw(10)<<1
        <<setw(15)<<"Jay"
        <<setw(10)<<89<<endl;

    cout<<setw(10)<<2
        <<setw(15)<<"Krish"
        <<setw(10)<<76<<endl;

    cout<<setw(10)<<3
        <<setw(15)<<"Mahi"
        <<setw(10)<<70<<endl;
    return 0;
}
