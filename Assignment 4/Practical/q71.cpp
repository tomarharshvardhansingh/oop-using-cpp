#include <iostream>
using namespace std;

class Device {
public:
    virtual void turnOn()=0;
    virtual ~Device() {}
};

class Laptop : public Device {
public:
    void turnOn() override {
        cout<<"Laptop is turning on. Loading operating system..."<<endl;
    }
};

class Smartphone : public Device {
public:
    void turnOn() override {
        cout<<"Smartphone is turning on. Welcome screen displayed."<<endl;
    }
};

int main() {
    Device* d;

    Laptop l;
    Smartphone s;

    d=&l;
    d->turnOn();

    d=&s;
    d->turnOn();

    return 0;
}
