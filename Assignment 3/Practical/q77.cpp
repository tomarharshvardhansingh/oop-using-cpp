#include<iostream>
using namespace std;

class Shape{
public:
	void call(){
		cout<<"All are shapes"<<endl;
	}
};


class Circle : public Shape{
public:
	void callCircle(){
		cout<<"Circle"<<endl;
	}
};

class Rectangle : public Shape{
public:
	void callRectangle(){
		cout<<"Rectangle"<<endl;
	}
};


class Triangle : public Shape{
public:
	void callTriangle(){
		cout<<"Triangle"<<endl;
	}
};

int main(){
	Circle c1;
	Triangle t1;
	Rectangle r1;
	c1.call();
	c1.callCircle();
	t1.callTriangle();
	r1.callRectangle();
	return 0;
}
