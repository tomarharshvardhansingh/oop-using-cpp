#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    Student(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    // unique_ptr demonstration
    unique_ptr<Student> s1 = make_unique<Student>("Jay");
    s1->display();

    // shared_ptr demonstration
    shared_ptr<Student> s2 = make_shared<Student>("Rohan");
    shared_ptr<Student> s3 = s2; // Reference count increases
    cout << "Shared Count: " << s2.use_count() << endl;
    s3->display();

    // weak_ptr demonstration
    weak_ptr<Student> s4 = s2; // Does not increase ref count
    cout << "Shared Count after weak_ptr: " << s2.use_count() << endl;

    return 0;
}
