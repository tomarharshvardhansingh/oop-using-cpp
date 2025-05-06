#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void compressFile(const string& inputFilename, const string& outputFilename) {
    ifstream inputFile(inputFilename);
    if (!inputFile) {
        cerr << "Error opening input file for compression." << endl;
        return;
    }

    ofstream outputFile(outputFilename);
    if (!outputFile) {
        cerr << "Error opening output file for compression." << endl;
        return;
    }

    char currentChar, nextChar;
    int count;

    inputFile.get(currentChar);
    while (inputFile.get(nextChar)) {
        count = 1;
        while (nextChar == currentChar) {
            count++;
            inputFile.get(nextChar);
        }
        outputFile << currentChar << count;
        currentChar = nextChar;
    }

    outputFile << currentChar << 1; // For the last character

    inputFile.close();
    outputFile.close();
    cout << "File compression complete." << endl;
}

void decompressFile(const string& inputFilename, const string& outputFilename) {
    ifstream inputFile(inputFilename);
    if (!inputFile) {
        cerr << "Error opening input file for decompression." << endl;
        return;
    }

    ofstream outputFile(outputFilename);
    if (!outputFile) {
        cerr << "Error opening output file for decompression." << endl;
        return;
    }

    char currentChar;
    int count;

    while (inputFile >> currentChar >> count) {
        for (int i = 0; i < count; i++) {
            outputFile.put(currentChar);
        }
    }

    inputFile.close();
    outputFile.close();
    cout << "File decompression complete." << endl;
}

int main() {
    int choice;
    string inputFilename, outputFilename;

    cout << "1. Compress File\n";
    cout << "2. Decompress File\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter input file name: ";
    cin >> inputFilename;
    cout << "Enter output file name: ";
    cin >> outputFilename;

    if (choice == 1) {
        compressFile(inputFilename, outputFilename);
    } else if (choice == 2) {
        decompressFile(inputFilename, outputFilename);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
