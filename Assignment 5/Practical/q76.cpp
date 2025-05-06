#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("sample.txt");
    outFile << "Hello, this is a test file.";
    outFile.close();

    ifstream inFile("sample.txt");

    if (!inFile) {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    streampos pos = inFile.tellg();
    cout << "Initial position of get pointer: " << pos << endl;

    inFile.seekg(7);
    pos = inFile.tellg();
    cout << "Position after seekg(7): " << pos << endl;

    char ch;
    inFile.get(ch);
    cout << "Character at position 7: " << ch << endl;

    inFile.seekg(0, ios::end);
    pos = inFile.tellg();
    cout << "Position at end of file: " << pos << endl;

    inFile.close();
    return 0;
}
