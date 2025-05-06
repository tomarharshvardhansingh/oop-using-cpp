#include<iostream>
using namespace std;

class Animal{
public:
    virtual void  speak() = 0;
};

class Dog : public Animal{
public:
    void speak() override{
        cout<<"Brak"<<endl;
    }
};

class Cat : public Animal{
public:
    void speak() override{
        cout<<"Mew"<<endl;
    }
};

class Bird : public Animal{
public:
    void speak() override{
        cout<<"Tweet"<<endl;
    }
};

int main(){
    Dog d ;
    Cat c ;
    Bird b ;

    d.speak();
    c.speak();
    b.speak();
    return 0;
}