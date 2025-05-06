#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream writeFile("demo.txt", ios::out);
    if (writeFile) {
        writeFile << "This is written in write mode.\n";
        writeFile.close();
    } else {
        cerr << "Failed to open file in write mode.\n";
        return 1;
    }

    ofstream appendFile("demo.txt", ios::app);
    if (appendFile) {
        appendFile << "This is added using append mode.\n";
        appendFile.close();
    } else {
        cerr << "Failed to open file in append mode.\n";
        return 1;
    }

    ifstream readFile("demo.txt", ios::in);
    if (readFile) {
        string line;
        cout << "Contents of demo.txt:\n";
        while (getline(readFile, line)) {
            cout << line << endl;
        }
        readFile.close();
    } else {
        cerr << "Failed to open file in read mode.\n";
        return 1;
    }

    return 0;
}
