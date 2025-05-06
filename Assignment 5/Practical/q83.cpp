#include <iostream>
#include <fstream>
using namespace std;

struct Record {
    int id;
    char name[20];
};

int main() {
    Record r1 = {1, "Alice"};
    Record r2 = {2, "Bob"};
    Record r3 = {3, "Charlie"};

    fstream file("records.bin", ios::out | ios::binary);
    file.write(reinterpret_cast<char*>(&r1), sizeof(r1));
    file.write(reinterpret_cast<char*>(&r2), sizeof(r2));
    file.write(reinterpret_cast<char*>(&r3), sizeof(r3));
    file.close();

    fstream readFile("records.bin", ios::in | ios::binary);
    readFile.seekg(sizeof(Record));
    Record temp;
    readFile.read(reinterpret_cast<char*>(&temp), sizeof(temp));
    readFile.close();

    cout << "Randomly accessed record:\n";
    cout << "ID: " << temp.id << ", Name: " << temp.name << endl;

    fstream updateFile("records.bin", ios::in | ios::out | ios::binary);
    Record updated = {2, "Bobby"};
    updateFile.seekp(sizeof(Record));
    updateFile.write(reinterpret_cast<char*>(&updated), sizeof(updated));
    updateFile.close();

    fstream verifyFile("records.bin", ios::in | ios::binary);
    cout << "\nAll records after update:\n";
    while (verifyFile.read(reinterpret_cast<char*>(&temp), sizeof(temp))) {
        cout << "ID: " << temp.id << ", Name: " << temp.name << endl;
    }
    verifyFile.close();

    return 0;
}
