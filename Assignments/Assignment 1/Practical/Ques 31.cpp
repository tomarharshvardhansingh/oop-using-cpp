// 31.	Write a C++ program to check if a given number is a prime number using a for loop.

#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter Number to check: ";
    cin >> i;

    if (i <= 1) {
        cout << "Not a Prime Number" << endl;
    } else {
        
        for (int n = 2; n <= i / 2; n++) {
            if (i % n == 0) {
                cout << i << " IS NOT a Prime Number." << endl;
                return 0;
            }
        }
        cout << i << " IS a Prime Number." << endl;
    }

    return 0;
}