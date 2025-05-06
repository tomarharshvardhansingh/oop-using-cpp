#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    float marks;
};

int main() {
    ifstream inFile("student.dat", ios::binary);

    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    Student s;

    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        cout << "ID: " << s.id << ", Marks: " << s.marks << endl;
    }

    inFile.close();

    return 0;
}
