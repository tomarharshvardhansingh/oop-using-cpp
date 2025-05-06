#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary()=0;
    virtual void displayDetails()=0;
    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    string name;
    float baseSalary, bonus;
public:
    Manager(string n, float b, float bo) : name(n), baseSalary(b), bonus(bo) {}
    void calculateSalary() override {
        cout<<"Manager Salary: "<<baseSalary+bonus<<endl;
    }
    void displayDetails() override {
        cout<<"Manager Name: "<<name<<endl;
    }
};

class Engineer : public Employee {
private:
    string name;
    float hourlyRate;
    int hoursWorked;
public:
    Engineer(string n, float rate, int hours) : name(n), hourlyRate(rate), hoursWorked(hours) {}
    void calculateSalary() override {
        cout<<"Engineer Salary: "<<hourlyRate*hoursWorked<<endl;
    }
    void displayDetails() override {
        cout<<"Engineer Name: "<<name<<endl;
    }
};

int main() {
    Employee* e;

    Manager m("Alice", 50000, 10000);
    Engineer en("Bob", 300, 160);

    e=&m;
    e->displayDetails();
    e->calculateSalary();

    e=&en;
    e->displayDetails();
    e->calculateSalary();

    return 0;
}
