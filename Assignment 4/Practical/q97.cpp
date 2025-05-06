#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T subtract(T a, T b) {
    return a - b;
}

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

template <typename T>
T divide(T a, T b) {
    if (b == 0)
        throw runtime_error("Division by zero");
    return a / b;
}

template <typename T>
T power(T base, T exponent) {
    return pow(base, exponent);
}

template <typename T>
T squareRoot(T value) {
    if (value < 0)
        throw domain_error("Square root of negative number");
    return sqrt(value);
}

int main() {
    try {
        cout << "Add: " << add(10, 5) << endl;
        cout << "Subtract: " << subtract(10, 5) << endl;
        cout << "Multiply: " << multiply(10, 5) << endl;
        cout << "Divide: " << divide(10, 2) << endl;
        cout << "Power: " << power(2, 3) << endl;
        cout << "Square Root: " << squareRoot(16) << endl;
        cout << "Divide by zero: " << divide(10, 0) << endl;
    } catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
