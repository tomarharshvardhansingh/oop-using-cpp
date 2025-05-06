#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void calculateArea() const {
        cout<<"Area not defined for generic shape."<<endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    void calculateArea() const override {
        cout<<"Area of Circle: "<<3.14159*radius*radius<<endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    void calculateArea() const override {
        cout<<"Area of Rectangle: "<<length*width<<endl;
    }
};

int main() {
    Shape* s;

    Circle c(5);
    Rectangle r(4, 6);

    s=&c;
    s->calculateArea();

    s=&r;
    s->calculateArea();

    return 0;
}
