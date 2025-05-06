#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "I am a person." << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "I am studying." << endl;
    }
};

class Employee : virtual public Person {
public:
    void work() {
        cout << "I am working." << endl;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    void balance() {
        cout << "I balance work and study." << endl;
    }
};

int main() {
    WorkingStudent ws;
    ws.show();      // No ambiguity due to virtual inheritance
    ws.study();
    ws.work();
    ws.balance();

    return 0;
}
