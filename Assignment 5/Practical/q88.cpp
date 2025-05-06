#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

// Function to read the configuration file and store settings in a map
map<string, string> readConfigFile(const string& filename) {
    map<string, string> config;
    ifstream file(filename);
    string line;
    
    while (getline(file, line)) {
        stringstream ss(line);
        string key, value;
        if (getline(ss, key, '=') && getline(ss, value)) {
            config[key] = value;
        }
    }

    return config;
}

// Function to perform the operation based on the configuration
void performOperation(const map<string, string>& config) {
    string operation = config.at("operation");
    int value1 = stoi(config.at("value1"));
    int value2 = stoi(config.at("value2"));
    int result;

    if (operation == "addition") {
        result = value1 + value2;
        cout << "Addition result: " << result << endl;
    } else if (operation == "subtraction") {
        result = value1 - value2;
        cout << "Subtraction result: " << result << endl;
    } else if (operation == "multiplication") {
        result = value1 * value2;
        cout << "Multiplication result: " << result << endl;
    } else if (operation == "division") {
        if (value2 != 0) {
            result = value1 / value2;
            cout << "Division result: " << result << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Invalid operation!" << endl;
    }
}

int main() {
    // Read the configuration file
    map<string, string> config = readConfigFile("config.txt");

    // Perform the operation based on the configuration settings
    performOperation(config);

    return 0;
}
