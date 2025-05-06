#include <iostream>
using namespace std;

class Employee {
public:
    void display() {
        cout << "I am an employee." << endl;
    }
};

class Manager : public Employee {
public:
    void display() {
        cout << "I am a manager." << endl;
    }
};

int main() {
    Employee e;
    Manager m;

    e.display();
    m.display();

    return 0;
}
