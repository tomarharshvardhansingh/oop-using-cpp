#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int number = 12345;

    ofstream textFile("text_mode.txt");
    if (textFile) {
        textFile << number;
        textFile.close();
    }

    ofstream binaryFile("binary_mode.bin", ios::binary);
    if (binaryFile) {
        binaryFile.write(reinterpret_cast<char*>(&number), sizeof(number));
        binaryFile.close();
    }

    ifstream readText("text_mode.txt");
    ifstream readBinary("binary_mode.bin", ios::binary);

    string textContent;
    cout << "Content of text_mode.txt (as characters): ";
    while (getline(readText, textContent)) {
        cout << textContent << endl;
    }

    cout << "Content of binary_mode.bin (as bytes): ";
    char byte;
    while (readBinary.get(byte)) {
        cout << hex << (0xFF & byte) << " ";
    }

    readText.close();
    readBinary.close();

    return 0;
}
