#include<iostream>
#include<cmath>

using namespace std;

class Shape{
    public:
        virtual void area() const{
            cout<<"Area of Shape is defined"<<endl;
        }

    virtual ~Shape(){};
};

class Circle : public Shape{
private:
    double r;
public:

    Circle(double r){
        this->r = r;
    }

    void area() const override{
        cout<<(3.14*r*r);
    }
};


class Square : public Shape{
private:
    int a;
public:
    Square(int a){
        this->a = a;
    }

    void area() const override{
        cout<<(a*a)<<endl;
    }
};

int main(){
    Shape* shPtr;

    Circle c(5);
    Square s(10);

    shPtr = &c;
    shPtr->area();
    cout<<endl;
    shPtr = &s;
    shPtr->area();
    return 0;
}
