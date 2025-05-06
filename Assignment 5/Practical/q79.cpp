#include <iostream>
#include <fstream>
using namespace std;

struct Data {
    int id;
    float value;
};

int main() {
    Data d1 = {101, 99.9};

    ofstream outFile("data.bin", ios::binary);
    if (outFile) {
        outFile.write(reinterpret_cast<char*>(&d1), sizeof(d1));
        outFile.close();
    } else {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    Data d2;
    ifstream inFile("data.bin", ios::binary);
    if (inFile) {
        inFile.read(reinterpret_cast<char*>(&d2), sizeof(d2));
        inFile.close();

        cout << "Data read from binary file:" << endl;
        cout << "ID: " << d2.id << ", Value: " << d2.value << endl;
    } else {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    return 0;
}
