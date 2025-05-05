// 27.	Write a C++ program to calculate the sum of the first 50 natural numbers using a while loop.

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;
    
    while (i <= 50) {
        sum += i;
        i++;
    }

    cout << "The sum of the first 50 natural numbers is: " << sum << endl;

    return 0;
}