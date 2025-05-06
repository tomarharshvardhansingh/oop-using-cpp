#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file1("truncate_demo.txt");
    if (file1) {
        file1 << "This is the original content of the file.\n";
        file1.close();
    }

    cout << "Original content written to file.\n";

    ofstream file2("truncate_demo.txt", ios::trunc);
    if (file2) {
        file2 << "New content after truncation.\n";
        file2.close();
    }

    ifstream readFile("truncate_demo.txt");
    string line;
    cout << "Current content of the file:\n";
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();

    return 0;
}
