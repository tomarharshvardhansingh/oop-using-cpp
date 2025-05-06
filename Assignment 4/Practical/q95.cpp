#include <iostream>
#include <memory>
#include <vector>
using namespace std;

template <typename T>
class SmartContainer {
private:
    vector<shared_ptr<T>> elements;

public:
    void add(T value) {
        elements.push_back(make_shared<T>(value));
    }

    shared_ptr<T> get(int index) {
        if (index < 0 || index >= elements.size())
            throw out_of_range("Index out of range");
        return elements[index];
    }

    int size() const {
        return elements.size();
    }

    void display() const {
        for (auto& elem : elements)
            cout << *elem << " ";
        cout << endl;
    }
};

int main() {
    SmartContainer<int> intContainer;
    intContainer.add(10);
    intContainer.add(20);
    intContainer.add(30);

    cout << "Integer Container: ";
    intContainer.display();

    SmartContainer<string> stringContainer;
    stringContainer.add("apple");
    stringContainer.add("banana");
    stringContainer.add("cherry");

    cout << "String Container: ";
    stringContainer.display();

    return 0;
}
