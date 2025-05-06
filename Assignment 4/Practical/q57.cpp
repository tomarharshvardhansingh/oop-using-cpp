#include<iostream>
using namespace std;

class Student{
private:
    int age;
    string name ;
public:
    void inputData(){
        cout<<"Enter the Student Name"<<endl;;
        getline(cin , name);

        cout<<"Enter the Student Age"<<endl;
        cin>>age ;
    }

    void showData() const {
        cout<<"Age : "<<age<<endl;
        cout<<"Name : "<<name<<endl; 
    }
};

int main(){
    Student* stdptr = new Student;

    stdptr->inputData();

    stdptr->showData();

    return 0;
}
