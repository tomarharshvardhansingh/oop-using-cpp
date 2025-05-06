#include<iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void getPersonInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Employee : public Person {
public:
    int employeeID;

    void getEmployeeInfo() {
        cout << "Enter employee ID: ";
        cin >> employeeID;
    }

    void showEmployeeInfo() {
        showPersonInfo(); // Call base class function
        cout << "Employee ID: " << employeeID << endl;
    }
};

int main() {
    Employee e;
    e.getPersonInfo();
    e.getEmployeeInfo();
    cout << endl;
    e.showEmployeeInfo();

    return 0;
}
