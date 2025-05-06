#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("output.txt");

    if (!outFile) {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    streampos pos = outFile.tellp();
    cout << "Initial position of put pointer: " << pos << endl;

    outFile << "Hello, World!";
    pos = outFile.tellp();
    cout << "Position after writing 'Hello, World!': " << pos << endl;

    outFile.seekp(7);
    pos = outFile.tellp();
    cout << "Position after seekp(7): " << pos << endl;

    outFile << "C++";
    pos = outFile.tellp();
    cout << "Position after writing 'C++' at position 7: " << pos << endl;

    outFile.close();
    return 0;
}
