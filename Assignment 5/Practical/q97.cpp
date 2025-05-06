#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to encrypt text
void encrypt(const string& inputFile, const string& outputFile, int shift) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile) {
        cout << "Error opening input file." << endl;
        return;
    }

    if (!outFile) {
        cout << "Error opening output file." << endl;
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = (ch - base + shift) % 26 + base;
        }
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();
}

// Function to decrypt text
void decrypt(const string& inputFile, const string& outputFile, int shift) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile) {
        cout << "Error opening input file." << endl;
        return;
    }

    if (!outFile) {
        cout << "Error opening output file." << endl;
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = (ch - base - shift + 26) % 26 + base;
        }
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();
}

int main() {
    string inputFile = "input.txt"; // Input text file
    string encryptedFile = "encrypted.txt"; // Encrypted output file
    string decryptedFile = "decrypted.txt"; // Decrypted output file

    int shift = 3; // Shift for Caesar cipher

    // Encrypt the file
    encrypt(inputFile, encryptedFile, shift);
    cout << "File encrypted successfully!" << endl;

    // Decrypt the file
    decrypt(encryptedFile, decryptedFile, shift);
    cout << "File decrypted successfully!" << endl;

    return 0;
}
