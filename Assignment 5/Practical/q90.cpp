#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayMenu() {
    cout << "Simple Text Editor\n";
    cout << "1. Open File\n";
    cout << "2. Edit File\n";
    cout << "3. Save File\n";
    cout << "4. Exit\n";
}

void openFile(ifstream& file, string filename) {
    file.open(filename);
    if (!file) {
        cout << "Error opening file!" << endl;
    }
}

void saveFile(ofstream& file, string filename, const string& content) {
    file.open(filename, ios::out);
    if (file) {
        file << content;
        cout << "File saved successfully." << endl;
    } else {
        cout << "Error saving file!" << endl;
    }
}

void editFile(string& content) {
    string line;
    cout << "Enter text to edit the file (type 'STOP' to end editing):\n";
    while (true) {
        getline(cin, line);
        if (line == "STOP") break;
        content += line + "\n";
    }
}

int main() {
    string filename, content;
    ifstream inFile;
    ofstream outFile;
    int choice;

    while (true) {
        displayMenu();
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline after entering choice

        switch (choice) {
            case 1:
                cout << "Enter filename to open: ";
                getline(cin, filename);
                openFile(inFile, filename);
                if (inFile) {
                    cout << "File contents:\n";
                    string line;
                    while (getline(inFile, line)) {
                        cout << line << endl;
                        content += line + "\n";
                    }
                    inFile.close();
                }
                break;

            case 2:
                editFile(content);
                break;

            case 3:
                cout << "Enter filename to save: ";
                getline(cin, filename);
                saveFile(outFile, filename, content);
                break;

            case 4:
                cout << "Exiting Text Editor...\n";
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
