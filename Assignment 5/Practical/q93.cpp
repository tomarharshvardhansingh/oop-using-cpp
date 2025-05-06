#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

void openFile(const string& filename, ifstream& file) {
    file.open(filename);
    if (!file) {
        throw runtime_error("Error opening file.");
    }
}

void readFile(ifstream& file) {
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
}

void writeFile(const string& filename, const string& content) {
    ofstream file(filename);
    if (!file) {
        throw runtime_error("Error opening file for writing.");
    }
    file << content;
}

int main() {
    string filename = "sample.txt";
    ifstream inputFile;
    
    try {
        openFile(filename, inputFile);
        cout << "File opened successfully. Reading file content...\n";
        readFile(inputFile);
        inputFile.close();
        
        string content = "This is a new line to be written to the file.\n";
        writeFile(filename, content);
        cout << "File written successfully.\n";
        
    } catch (const runtime_error& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
