// 29.	Write a C++ program to find the factorial of a given number using a for loop.

#include <iostream>
using namespace std;

int main() {
    int number;
    long long factorial = 1;

    cout << "Enter a number to find its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
                for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        cout << "The factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}


