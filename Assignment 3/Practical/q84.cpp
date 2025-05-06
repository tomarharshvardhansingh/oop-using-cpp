#include<iostream>
using namespace std;

class Base{
public:
	void showBase(){
		cout<<"Base"<<endl;
	}
};


class Derived1 : public Base {
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


class Derived3 : public Derived1 , public Derived2 {
public:
	void showDerived3(){
		cout<<"Derived3"<<endl;
	}
};

int main(){
	Derived1 d1 ;
	d1.showBase();

	Derived2 d2;
	d2.showBase();

	Derived3 d3;
	d3.showDerived1();
	d3.showDerived2();
	d3.showDerived3();
	return 0;
}
