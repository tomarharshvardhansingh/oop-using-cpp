#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

void render(Shape* shape) {
    shape->draw();
}

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    Shape* s3 = new Triangle();

    render(s1);
    render(s2);
    render(s3);

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
