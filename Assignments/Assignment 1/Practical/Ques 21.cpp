// 21. Write a C++ program to demonstrate the use of static_cast by converting an int to a double and vice versa.

#include <iostream>
using namespace std;

int main() {
    int intVal = 10;
    double doubleVal;
    
    // Converting int to double using static_cast
    doubleVal = static_cast<double>(intVal);
    cout << "Integer value: " << intVal << endl;
    cout << "Converted to double: " << doubleVal <<  endl;
    
    // Converting double to int using static_cast
    doubleVal = 10.75;
    intVal = static_cast<int>(doubleVal);
     cout << "Double value: " << doubleVal <<  endl;
     cout << "Converted to int: " << intVal <<  endl;
    
    return 0;
}