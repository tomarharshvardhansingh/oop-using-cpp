#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    virtual void makeSound() const {
        cout << "Animal makes a sound" << endl;
    }

    virtual void move() const {
        cout << "Animal moves" << endl;
    }

    virtual ~Animal() {}
};

class Lion : public Animal {
public:
    void makeSound() const override {
        cout << "Lion roars" << endl;
    }

    void move() const override {
        cout << "Lion runs" << endl;
    }
};

class Bird : public Animal {
public:
    void makeSound() const override {
        cout << "Bird chirps" << endl;
    }

    void move() const override {
        cout << "Bird flies" << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound() const override {
        cout << "Fish doesn't make sound" << endl;
    }

    void move() const override {
        cout << "Fish swims" << endl;
    }
};

void simulateEcosystem(const vector<Animal*>& animals) {
    for (const auto& animal : animals) {
        animal->makeSound();
        animal->move();
        cout << "---" << endl;
    }
}

int main() {
    vector<Animal*> animals;

    animals.push_back(new Lion());
    animals.push_back(new Bird());
    animals.push_back(new Fish());

    simulateEcosystem(animals);

    for (auto* animal : animals) {
        delete animal;
    }

    return 0;
}
