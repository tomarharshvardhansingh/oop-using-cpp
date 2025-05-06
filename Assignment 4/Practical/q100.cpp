#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class ICollection {
public:
    virtual void print() const = 0;
    virtual ~ICollection() {}
};

template <typename T>
class Collection : public ICollection {
private:
    vector<T> items;
public:
    void add(const T& item) {
        items.push_back(item);
    }

    T get(int index) const {
        if (index < 0 || index >= items.size())
            throw out_of_range("Index out of range");
        return items[index];
    }

    void remove(int index) {
        if (index < 0 || index >= items.size())
            throw out_of_range("Index out of range");
        items.erase(items.begin() + index);
    }

    int size() const {
        return items.size();
    }

    void print() const override {
        cout << "Collection: ";
        for (const T& item : items)
            cout << item << " ";
        cout << endl;
    }
};

int main() {
    try {
        Collection<int> intList;
        intList.add(10);
        intList.add(20);
        intList.add(30);
        intList.print();
        cout << "Element at 1: " << intList.get(1) << endl;
        intList.remove(1);
        intList.print();

        Collection<string> strList;
        strList.add("apple");
        strList.add("banana");
        strList.print();
        cout << "Element at 5: " << strList.get(5) << endl;
    } catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
