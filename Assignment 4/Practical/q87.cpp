#include <iostream>
#include <vector>
using namespace std;

class Polynomial {
private:
    vector<int> coeffs;

public:
    Polynomial(int degree = 0) {
        coeffs.resize(degree + 1, 0);
    }

    void setCoefficient(int degree, int coeff) {
        if (degree >= coeffs.size())
            coeffs.resize(degree + 1, 0);
        coeffs[degree] = coeff;
    }

    Polynomial operator+(const Polynomial& other) {
        Polynomial result;
        int maxSize = max(coeffs.size(), other.coeffs.size());
        result.coeffs.resize(maxSize, 0);
        for (int i = 0; i < maxSize; i++) {
            int a = (i < coeffs.size()) ? coeffs[i] : 0;
            int b = (i < other.coeffs.size()) ? other.coeffs[i] : 0;
            result.coeffs[i] = a + b;
        }
        return result;
    }

    Polynomial operator*(const Polynomial& other) {
        Polynomial result;
        int newSize = coeffs.size() + other.coeffs.size() - 1;
        result.coeffs.resize(newSize, 0);
        for (int i = 0; i < coeffs.size(); i++) {
            for (int j = 0; j < other.coeffs.size(); j++) {
                result.coeffs[i + j] += coeffs[i] * other.coeffs[j];
            }
        }
        return result;
    }

    void display() const {
        bool first = true;
        for (int i = coeffs.size() - 1; i >= 0; i--) {
            if (coeffs[i] != 0) {
                if (!first)
                    cout << " + ";
                cout << coeffs[i];
                if (i > 0)
                    cout << "x^" << i;
                first = false;
            }
        }
        if (first)
            cout << "0";
        cout << endl;
    }
};

int main() {
    Polynomial p1, p2;

    p1.setCoefficient(0, 1);
    p1.setCoefficient(1, 2);
    p1.setCoefficient(2, 3);

    p2.setCoefficient(0, 4);
    p2.setCoefficient(1, 5);

    cout << "Polynomial 1: ";
    p1.display();

    cout << "Polynomial 2: ";
    p2.display();

    Polynomial sum = p1 + p2;
    Polynomial product = p1 * p2;

    cout << "Sum: ";
    sum.display();

    cout << "Product: ";
    product.display();

    return 0;
}
