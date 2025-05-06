#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void mergeFiles(const string& outputFilename, const string& inputFilename1, const string& inputFilename2) {
    ifstream inputFile1(inputFilename1);
    ifstream inputFile2(inputFilename2);
    ofstream outputFile(outputFilename);

    if (!inputFile1) {
        cerr << "Error opening " << inputFilename1 << endl;
        return;
    }

    if (!inputFile2) {
        cerr << "Error opening " << inputFilename2 << endl;
        return;
    }

    if (!outputFile) {
        cerr << "Error opening output file " << outputFilename << endl;
        return;
    }

    string line;

    while (getline(inputFile1, line)) {
        outputFile << line << endl;
    }

    while (getline(inputFile2, line)) {
        outputFile << line << endl;
    }

    inputFile1.close();
    inputFile2.close();
    outputFile.close();

    cout << "Files merged successfully into " << outputFilename << endl;
}

int main() {
    string inputFile1, inputFile2, outputFile;

    cout << "Enter the name of the first input file: ";
    cin >> inputFile1;
    cout << "Enter the name of the second input file: ";
    cin >> inputFile2;
    cout << "Enter the name of the output file: ";
    cin >> outputFile;

    mergeFiles(outputFile, inputFile1, inputFile2);

    return 0;
}
