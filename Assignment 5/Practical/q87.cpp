#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float salary;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your salary: ";
    cin >> salary;

    ofstream outFile("user_data.txt");

    if (!outFile) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    outFile << "Name: " << name << endl;
    outFile << "Age: " << age << endl;
    outFile << "Salary: " << salary << endl;

    outFile.close();

    cout << "\nData has been written to 'user_data.txt' successfully." << endl;

    return 0;
}
