#include <iostream>
using namespace std;

class Entity {
public:
    void show() {
        cout << "This is an entity." << endl;
    }
};

class Person : virtual public Entity {
public:
    void show() {
        cout << "This is a person." << endl;
    }
};

class Organization : virtual public Entity {
public:
    void show() {
        cout << "This is an organization." << endl;
    }
};

int main() {
    Person p;
    Organization o;

    p.show();
    o.show();

    return 0;
}
