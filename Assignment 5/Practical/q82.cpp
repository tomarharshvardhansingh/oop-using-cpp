#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() {
    Student s1 = {101, 92.5f};

    ofstream outFile("student.dat", ios::binary);
    if (outFile) {
        outFile.write(reinterpret_cast<char*>(&s1), sizeof(s1));
        outFile.close();
    } else {
        cerr << "Error writing to file.\n";
        return 1;
    }

    Student s2;
    ifstream inFile("student.dat", ios::binary);
    if (inFile) {
        inFile.read(reinterpret_cast<char*>(&s2), sizeof(s2));
        inFile.close();

        cout << "Student Data Read from File:\n";
        cout << "Roll: " << s2.roll << "\n";
        cout << "Marks: " << s2.marks << "\n";
    } else {
        cerr << "Error reading from file.\n";
        return 1;
    }

    return 0;
}
