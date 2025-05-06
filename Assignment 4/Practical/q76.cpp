#include <iostream>
#include <fstream>
#include <exception>
using namespace std;

class FileHandler {
private:
    ifstream file;
public:
    FileHandler(const string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw runtime_error("Error: Unable to open file.");
        }
        cout << "File opened successfully." << endl;
    }

    void readData() {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "File closed (like finally block)." << endl;
        }
    }
};

int main() {
    try {
        FileHandler fh("data.txt");
        fh.readData();
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
