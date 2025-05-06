#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

void logError(const string& errorMessage) {
    ofstream logFile("error_log.txt", ios::app);

    if (!logFile) {
        cerr << "Error opening log file!" << endl;
        return;
    }

    time_t now = time(0);
    char* dt = ctime(&now);
    dt[strlen(dt) - 1] = '\0';

    logFile << "[" << dt << "] " << errorMessage << endl;

    logFile.close();
}

int main() {
    logError("Failed to open configuration file.");
    logError("Invalid input provided by user.");
    logError("Database connection failed.");

    cout << "Error messages have been logged to 'error_log.txt'." << endl;

    return 0;
}
