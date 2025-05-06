#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary = 54321.789;
    double taxRate = 0.075;

    cout << setw(15) << "Item"
         << setw(20) << "Value" << endl;
    cout << "----------------------------------------" << endl;

    cout << setw(15) << "Salary"
         << setw(10) << "$"
         << fixed << setprecision(2) << setw(10) << salary << endl;

    cout << setw(15) << "Tax Rate"
         << setw(10) << ""
         << fixed << setprecision(1) << setw(9) << (taxRate * 100) << "%" << endl;

    double taxAmount = salary * taxRate;
    cout << setw(15) << "Tax Amount"
         << setw(10) << "$"
         << fixed << setprecision(2) << setw(10) << taxAmount << endl;

    return 0;
}
