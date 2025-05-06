#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student students[3] = {
        {101, "Alice", 89.5},
        {102, "Bob", 76.0},
        {103, "Charlie", 92.3}
    };

    ofstream outFile("students.dat", ios::binary);
    if (!outFile) {
        cerr << "Error creating file." << endl;
        return 1;
    }

    outFile.write(reinterpret_cast<char*>(&students), sizeof(students));
    outFile.close();

    Student readStudents[3];
    ifstream inFile("students.dat", ios::binary);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    inFile.read(reinterpret_cast<char*>(&readStudents), sizeof(readStudents));
    inFile.close();

    cout << "Reading data from file:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Roll No: " << readStudents[i].rollNo
             << ", Name: " << readStudents[i].name
             << ", Marks: " << readStudents[i].marks << endl;
    }

    return 0;
}
