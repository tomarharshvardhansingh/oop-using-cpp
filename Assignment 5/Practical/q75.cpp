#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream createFile("example.txt");
    if (createFile) {
        createFile << "This file was created using ofstream." << endl;
        createFile.close();
        cout << "File created and closed successfully." << endl;
    } else {
        cerr << "Error creating the file." << endl;
    }

    ifstream readFile("example.txt");
    if (readFile) {
        string line;
        getline(readFile, line);
        cout << "Read from file: " << line << endl;
        readFile.close();
        cout << "File opened and closed successfully for reading." << endl;
    } else {
        cerr << "Error opening the file for reading." << endl;
    }

    fstream openBoth("example.txt", ios::in | ios::out);
    if (openBoth) {
        openBoth.seekp(0, ios::end);
        openBoth << "Appending a new line using fstream." << endl;
        openBoth.close();
        cout << "File opened and closed using fstream for both input and output." << endl;
    } else {
        cerr << "Error opening the file using fstream." << endl;
    }

    return 0;
}
