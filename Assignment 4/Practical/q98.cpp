#include <iostream>
#include <vector>
using namespace std;

class Widget {
public:
    virtual void draw() = 0;
    virtual ~Widget() {}
};

class Button : public Widget {
public:
    void draw() override {
        cout << "Drawing a Button" << endl;
    }
};

class Label : public Widget {
public:
    void draw() override {
        cout << "Drawing a Label" << endl;
    }
};

class TextBox : public Widget {
public:
    void draw() override {
        cout << "Drawing a TextBox" << endl;
    }
};

class GUI {
private:
    vector<Widget*> elements;
public:
    void addElement(Widget* w) {
        elements.push_back(w);
    }

    void render() {
        for (auto* w : elements)
            w->draw();
    }

    ~GUI() {
        for (auto* w : elements)
            delete w;
    }
};

int main() {
    GUI window;
    window.addElement(new Button());
    window.addElement(new Label());
    window.addElement(new TextBox());

    window.render();

    return 0;
}

