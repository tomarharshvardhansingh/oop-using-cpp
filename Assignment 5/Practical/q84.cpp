#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    Student s1 = {1, "Anil", 85.5f};
    Student s2 = {2, "Sunita", 90.0f};
    Student s3 = {3, "Ravi", 78.2f};

    fstream file("students.bin", ios::out | ios::binary);
    file.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    file.write(reinterpret_cast<char*>(&s2), sizeof(s2));
    file.write(reinterpret_cast<char*>(&s3), sizeof(s3));
    file.close();

    fstream readFile("students.bin", ios::in | ios::binary);
    Student temp;
    readFile.seekg(sizeof(Student));
    readFile.read(reinterpret_cast<char*>(&temp), sizeof(temp));
    readFile.close();

    cout << "Randomly accessed record:\n";
    cout << "Roll: " << temp.roll << ", Name: " << temp.name << ", Marks: " << temp.marks << endl;

    fstream writeFile("students.bin", ios::in | ios::out | ios::binary);
    Student updated = {2, "Suman", 95.0f};
    writeFile.seekp(sizeof(Student));
    writeFile.write(reinterpret_cast<char*>(&updated), sizeof(updated));
    writeFile.close();

    fstream showFile("students.bin", ios::in | ios::binary);
    cout << "\nAll records:\n";
    while (showFile.read(reinterpret_cast<char*>(&temp), sizeof(temp))) {
        cout << "Roll: " << temp.roll << ", Name: " << temp.name << ", Marks: " << temp.marks << endl;
    }
    showFile.close();

    return 0;
}
