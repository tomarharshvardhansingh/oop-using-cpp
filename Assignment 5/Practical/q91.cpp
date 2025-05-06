#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void readCSV(const string& filename) {
    ifstream file(filename);
    
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string field;
        vector<string> fields;

        while (getline(ss, field, ',')) {
            fields.push_back(field);
        }

        for (size_t i = 0; i < fields.size(); ++i) {
            cout << "Field " << i + 1 << ": " << fields[i] << endl;
        }
        cout << "-----------------------" << endl;
    }

    file.close();
}

int main() {
    string filename;
    cout << "Enter the CSV file name: ";
    cin >> filename;

    readCSV(filename);

    return 0;
}
