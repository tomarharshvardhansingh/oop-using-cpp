#include<iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void display() {
        cout << "This is a vehicle." << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
public:
    void displayCar() {
        cout << "This is a car." << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    void displayBike() {
        cout << "This is a bike." << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.display();     // from Vehicle
    c.displayCar();  // from Car

    b.display();     // from Vehicle
    b.displayBike(); // from Bike

    return 0;
}
