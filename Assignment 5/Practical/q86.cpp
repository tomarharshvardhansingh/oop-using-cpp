#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    fstream file("students.bin", ios::in | ios::binary);
    
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file.seekg(0, ios::end);
    streampos fileSize = file.tellg();
    int numRecords = fileSize / sizeof(Student);

    vector<Student> students(numRecords);
    file.seekg(0, ios::beg);

    for (int i = 0; i < numRecords; i++) {
        file.read(reinterpret_cast<char*>(&students[i]), sizeof(Student));
    }

    file.close();

    cout << "\nContents of the file in reverse order:\n";
    for (int i = numRecords - 1; i >= 0; i--) {
        cout << "Roll: " << students[i].roll << ", Name: " << students[i].name << ", Marks: " << students[i].marks << endl;
    }

    return 0;
}
