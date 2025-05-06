#include <iostream>
using namespace std;

class Media {
public:
    virtual void displayInfo() const {
        cout << "Displaying media info..." << endl;
    }
    virtual ~Media() {}
};

class Book : public Media {
private:
    string title, author;
public:
    Book(string t, string a) : title(t), author(a) {}
    void displayInfo() const override {
        cout << "Book Title: " << title << endl; cout << "Author: " << author << endl;
    }
};

class DVD : public Media {
private:
    string title;
    int duration;
public:
    DVD(string t, int d) : title(t), duration(d) {}
    void displayInfo() const override {
        cout << "DVD Title: " << title << endl; cout << "Duration: " << duration << " minutes" << endl;
    }
};

int main() {
    Media* mediaPtr;
    Book b("The C++ Programming Language", "Bjarne Stroustrup");
    DVD d("Inception", 148);

    mediaPtr = &b;
    mediaPtr->displayInfo();
    mediaPtr = &d;
    mediaPtr->displayInfo();

    return 0;
}
