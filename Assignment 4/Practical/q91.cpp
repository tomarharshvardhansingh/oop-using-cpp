#include <iostream>
using namespace std;

const int MAX = 10;

template <typename T>
void addMatrix(T A[MAX][MAX], T B[MAX][MAX], T C[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            C[i][j] = A[i][j] + B[i][j];
}

template <typename T>
void multiplyMatrix(T A[MAX][MAX], T B[MAX][MAX], T C[MAX][MAX], int row1, int col1, int col2) {
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < col1; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

template <typename T>
void printMatrix(T M[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j)
            cout << M[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int A[MAX][MAX] = {{1, 2}, {3, 4}};
    int B[MAX][MAX] = {{5, 6}, {7, 8}};
    int C[MAX][MAX];

    cout << "Matrix A:\n";
    printMatrix(A, 2, 2);

    cout << "Matrix B:\n";
    printMatrix(B, 2, 2);

    addMatrix(A, B, C, 2, 2);
    cout << "Addition of A and B:\n";
    printMatrix(C, 2, 2);

    multiplyMatrix(A, B, C, 2, 2, 2);
    cout << "Multiplication of A and B:\n";
    printMatrix(C, 2, 2);

    return 0;
}
