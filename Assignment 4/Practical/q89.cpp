#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int capacity;

public:
    Stack(int size = 10) {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(T value) {
        if (top >= capacity - 1)
            throw overflow_error("Stack Overflow");
        arr[++top] = value;
    }

    T pop() {
        if (top < 0)
            throw underflow_error("Stack Underflow");
        return arr[top--];
    }

    T peek() {
        if (top < 0)
            throw underflow_error("Stack is Empty");
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }
};

int main() {
    try {
        Stack<int> s(3);

        s.push(10);
        s.push(20);
        s.push(30);

        cout << "Top element: " << s.peek() << endl;

        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;

        cout << "Popped: " << s.pop() << endl;
    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
