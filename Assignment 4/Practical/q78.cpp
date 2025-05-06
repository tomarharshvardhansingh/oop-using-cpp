#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T arr[100]; // fixed size stack for simplicity
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top >= 99) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();

    intStack.pop();
    intStack.display();

    Stack<string> strStack;
    strStack.push("Jay");
    strStack.push("Rohan");
    strStack.display();

    strStack.pop();
    strStack.display();

    return 0;
}
