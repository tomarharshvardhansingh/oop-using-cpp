#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int countOccurrences(const string& filename, const string& word) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return -1;
    }

    string line;
    int count = 0;
    while (getline(file, line)) {
        stringstream ss(line);
        string temp;

        while (ss >> temp) {
            if (temp == word) {
                count++;
            }
        }
    }

    file.close();
    return count;
}

int main() {
    string filename, word;

    cout << "Enter the filename: ";
    cin >> filename;
    cout << "Enter the word to search for: ";
    cin >> word;

    int occurrences = countOccurrences(filename, word);

    if (occurrences != -1) {
        cout << "The word '" << word << "' appears " << occurrences << " times in the file." << endl;
    }

    return 0;
}
