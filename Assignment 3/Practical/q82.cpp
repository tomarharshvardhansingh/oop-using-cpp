#include<iostream>
using namespace std;

class Base {
public:
	void show(){
		cout<<"Base"<<endl;
	}
};

class Derived1 : public Base{
public:
	void showDerived1(){
		cout<<"Derived1"<<endl;
	}
};

class Derived2 : public Base{
public:
	void showDerived2(){
		cout<<"Derived2"<<endl;
	}
};

class Derived3 : public Base{
public:
	void showDerived3(){
		cout<<"Derived3"<<endl;
	}
};

int main(){
	Derived1 d1;
	Derived2 d2;
	Derived3 d3;

	d1.show();
	d1.showDerived1();

	d2.show();
	d2.showDerived2();

	d3.show();
	d3.showDerived3();

	return 0;
}
