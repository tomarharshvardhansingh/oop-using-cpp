#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    float marks;
};

int main() {
    ofstream outFile("student.dat", ios::binary);

    Student s1 = {101, 88.5};
    Student s2 = {102, 92.0};

    outFile.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    outFile.write(reinterpret_cast<char*>(&s2), sizeof(s2));

    outFile.close();

    return 0;
}
