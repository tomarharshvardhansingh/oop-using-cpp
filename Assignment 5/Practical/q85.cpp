#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    fstream file("students.bin", ios::out | ios::binary);
    Student s1 = {1, "Alice", 85.5f};
    Student s2 = {2, "Bob", 90.0f};
    Student s3 = {3, "Charlie", 78.2f};

    file.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    file.write(reinterpret_cast<char*>(&s2), sizeof(s2));
    file.write(reinterpret_cast<char*>(&s3), sizeof(s3));
    file.close();

    int rollToUpdate = 2;
    fstream updateFile("students.bin", ios::in | ios::out | ios::binary);
    Student updated = {rollToUpdate, "Bobby", 92.0f};

    updateFile.seekp((rollToUpdate - 1) * sizeof(Student), ios::beg);
    updateFile.write(reinterpret_cast<char*>(&updated), sizeof(updated));
    updateFile.close();

    fstream verifyFile("students.bin", ios::in | ios::binary);
    Student temp;
    cout << "\nAll records after update:\n";
    while (verifyFile.read(reinterpret_cast<char*>(&temp), sizeof(temp))) {
        cout << "Roll: " << temp.roll << ", Name: " << temp.name << ", Marks: " << temp.marks << endl;
    }
    verifyFile.close();

    return 0;
}
