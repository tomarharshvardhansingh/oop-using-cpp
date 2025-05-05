// 30.	Write a C++ program to reverse a given number using a while loop.

#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    cout << "Enter a number to reverse: ";
    cin >> number;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    cout << "The reversed number is: " << reversedNumber << endl;

    return 0;
}
