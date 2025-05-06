#include<iostream>
using namespace std;


class Shape{
public:
    void show(){
        cout<<"Shape"<<endl;
    }

    virtual void showArea() = 0 ;
};

class Circle : public Shape{
private:
    double r;
public:
        Circle(double rd) : r(rd) {};
    
        void showCircle(){
            cout<<"Circle"<<endl;
        }

        void showArea() override{
            cout<<(3.14*r*r)<<endl;
        }
};

class Rectangle : public Shape{
private:
    int length ;
    int breadth;
public:
    Rectangle(int l  , int b): length(l) , breadth(b){};

    void showRectangle(){
        cout<<"Rectangle"<<endl;
    }

    void showArea() override{
        cout<<(length*breadth)<<endl;
    }
};

class Triangle : public Shape{
private:
    int height;
    int base;
public:
    Triangle(int b , int h): base(b) , height(h) {};

    void showTriangle(){
        cout<<"Triangle"<<endl;
    }

    void showArea() override{
        cout<<(0.5*base*height)<<endl;
    }
};

int main(){
    Circle c(1);
    Rectangle r(10 , 10);
    Triangle t(10 , 20);

    c.showArea();
    r.showArea();
    t.showArea();
    return 0;
}