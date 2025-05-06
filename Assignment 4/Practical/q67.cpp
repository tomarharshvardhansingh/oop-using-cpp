#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void showFunction() const {
        cout<<"Generic appliance functionality."<<endl;
    }
    virtual ~Appliance() {}
};

class WashingMachine : public Appliance {
public:
    void showFunction() const override {
        cout<<"WashingMachine: Washes and spins clothes."<<endl;
    }
};

class Refrigerator : public Appliance {
public:
    void showFunction() const override {
        cout<<"Refrigerator: Keeps food and drinks cold."<<endl;
    }
};

class Microwave : public Appliance {
public:
    void showFunction() const override {
        cout<<"Microwave: Heats and cooks food quickly."<<endl;
    }
};

int main() {
    Appliance* a;

    WashingMachine wm;
    Refrigerator r;
    Microwave m;

    a=&wm;
    a->showFunction();

    a=&r;
    a->showFunction();

    a=&m;
    a->showFunction();

    return 0;
}
