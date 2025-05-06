#include <iostream>
using namespace std;

const int MAX = 100;

struct Element {
    int row;
    int col;
    int value;
};

class SparseMatrix {
private:
    Element data[MAX];
    int rows, cols, terms;

public:
    void input() {
        cout << "Enter number of rows, columns and non-zero terms: ";
        cin >> rows >> cols >> terms;

        for (int i = 0; i < terms; i++) {
            cout << "Enter row, column and value for term " << i + 1 << ": ";
            cin >> data[i].row >> data[i].col >> data[i].value;
        }
    }

    void display() {
        cout << "Row\tCol\tVal" << endl;
        for (int i = 0; i < terms; i++) {
            cout << data[i].row << "\t" << data[i].col << "\t" << data[i].value << endl;
        }
    }

    SparseMatrix add(SparseMatrix m) {
        SparseMatrix result;
        result.rows = rows;
        result.cols = cols;

        int i = 0, j = 0, k = 0;

        while (i < terms && j < m.terms) {
            if (data[i].row < m.data[j].row ||
                (data[i].row == m.data[j].row && data[i].col < m.data[j].col)) {
                result.data[k++] = data[i++];
            } else if (data[i].row > m.data[j].row ||
                       (data[i].row == m.data[j].row && data[i].col > m.data[j].col)) {
                result.data[k++] = m.data[j++];
            } else {
                int sum = data[i].value + m.data[j].value;
                if (sum != 0) {
                    result.data[k].row = data[i].row;
                    result.data[k].col = data[i].col;
                    result.data[k].value = sum;
                    k++;
                }
                i++;
                j++;
            }
        }

        while (i < terms)
            result.data[k++] = data[i++];
        while (j < m.terms)
            result.data[k++] = m.data[j++];

        result.terms = k;
        return result;
    }

    SparseMatrix multiply(SparseMatrix m) {
        SparseMatrix result;
        result.rows = rows;
        result.cols = m.cols;
        result.terms = 0;

        for (int i = 0; i < terms; i++) {
            for (int j = 0; j < m.terms; j++) {
                if (data[i].col == m.data[j].row) {
                    int r = data[i].row;
                    int c = m.data[j].col;
                    int val = data[i].value * m.data[j].value;

                    bool found = false;
                    for (int k = 0; k < result.terms; k++) {
                        if (result.data[k].row == r && result.data[k].col == c) {
                            result.data[k].value += val;
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        result.data[result.terms].row = r;
                        result.data[result.terms].col = c;
                        result.data[result.terms].value = val;
                        result.terms++;
                    }
                }
            }
        }

        return result;
    }
};

int main() {
    SparseMatrix m1, m2, sum, product;

    cout << "Enter first sparse matrix:\n";
    m1.input();

    cout << "Enter second sparse matrix:\n";
    m2.input();

    sum = m1.add(m2);
    product = m1.multiply(m2);

    cout << "Addition result:\n";
    sum.display();

    cout << "Multiplication result:\n";
    product.display();

    return 0;
}
