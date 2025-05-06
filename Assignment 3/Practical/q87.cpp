#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void display() {
        cout << "This is a circle." << endl;
    }
};

int main() {
    Shape s;
    Circle c;

    s.display();
    c.display();

    return 0;
}
