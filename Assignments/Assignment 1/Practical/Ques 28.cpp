// 28. Write a C++ program to print the multiplication table of a given number using a do-while loop.

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    int i = 1;

    do {
        cout << number << " x " << i << " = " << number * i << endl;
        i++;
    } while (i <= 10);
    
    return 0;
}