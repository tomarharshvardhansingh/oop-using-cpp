#include<iostream>
using namespace std;

class Employee{
public:
    virtual void  info(){
        cout<<"Employee"<<endl;
    }
};

class Manager : public Employee{
public:
    void info() override{
        cout<<"Manager"<<endl;
    }
};

class Worker : public Employee{
public:
    void info() override{
        cout<<"Worker"<<endl;
    }
};

int main(){
    Employee e;
    Manager m;
    Worker w;

    e.info();
    m.info();
    w.info();
    return 0;
}