#include <iostream>
using namespace std;

int main() {
    int age;
    float height;
    double weight;
    char grade;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in feet: ";
    cin >> height;

    cout << "Enter your weight in kg: ";
    cin >> weight;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
