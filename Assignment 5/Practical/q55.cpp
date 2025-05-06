#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int age ;
    string name ;
    double salary;

    cout<<"Enter name"<<endl;
    getline(cin, name);

    cout<<"Enter age"<<endl;
    cin>>age;

    cout<<"Enter Salary"<<endl;
    cin>>salary;

    cout<<"Name"<<setw(25)<<"Age"<<setw(25)<<"Salary"<<endl
        <<name<<setw(25)<<age<<setw(25)<<salary<<endl;
    return  0;
}