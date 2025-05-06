#include<iostream>
using namespace std;

class Vehicle{
public:
    virtual void displayInfo()  const= 0;

    virtual ~Vehicle() {};
};


class Car: public Vehicle{
public:
    void displayInfo() const override{
        cout<<"This is Car"<<endl;
    }
};

class Bike : public Vehicle{
public:
    void displayInfo() const override{
        cout<<"This is a Bike"<<endl;
    }
};

int main(){
   Vehicle* v1 = new Car();
   Vehicle* v2 = new Bike();

   v1->displayInfo();
   v2->displayInfo();

   delete v1;
   delete v2;

    return 0;
}
