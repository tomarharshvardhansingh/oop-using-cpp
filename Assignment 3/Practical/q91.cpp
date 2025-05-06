#include <iostream>
using namespace std;

class Polynomial {
private:
    int degree;
    int coeff[100];

public:
    Polynomial() {
        degree = 0;
        for (int i = 0; i < 100; i++)
            coeff[i] = 0;
    }

    void input() {
        cout << "Enter degree of polynomial: ";
        cin >> degree;
        cout << "Enter coefficients from degree 0 to " << degree << ":" << endl;
        for (int i = 0; i <= degree; i++) {
            cin >> coeff[i];
        }
    }

    void display() {
        for (int i = degree; i >= 0; i--) {
            if (coeff[i] != 0) {
                cout << coeff[i];
                if (i > 0)
                    cout << "x^" << i;
                if (i > 0 && coeff[i - 1] >= 0)
                    cout << " + ";
            }
        }
        cout << endl;
    }

    Polynomial add(Polynomial p) {
        Polynomial result;
        result.degree = max(degree, p.degree);
        for (int i = 0; i <= result.degree; i++) {
            result.coeff[i] = coeff[i] + p.coeff[i];
        }
        return result;
    }

    Polynomial multiply(Polynomial p) {
        Polynomial result;
        result.degree = degree + p.degree;
        for (int i = 0; i <= degree; i++) {
            for (int j = 0; j <= p.degree; j++) {
                result.coeff[i + j] += coeff[i] * p.coeff[j];
            }
        }
        return result;
    }
};

int main() {
    Polynomial p1, p2, sum, product;

    cout << "Enter first polynomial:\n";
    p1.input();

    cout << "Enter second polynomial:\n";
    p2.input();

    sum = p1.add(p2);
    product = p1.multiply(p2);

    cout << "Sum: ";
    sum.display();

    cout << "Product: ";
    product.display();

    return 0;
}
