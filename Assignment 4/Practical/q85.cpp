#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class SafeArray {
private:
    T* arr;
    int size;

public:
    SafeArray(int s) {
        if (s <= 0)
            throw invalid_argument("Size must be positive.");
        size = s;
        arr = new T[size];
    }

    ~SafeArray() {
        delete[] arr;
    }

    T& operator[](int index) {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of bounds.");
        return arr[index];
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    try {
        SafeArray<int> a(5);
        for (int i = 0; i < 5; i++)
            a[i] = i * 2;

        a.display();

        cout << "Element at index 2: " << a[2] << endl;
        cout << "Element at index 10: " << a[10] << endl; // triggers exception

    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
