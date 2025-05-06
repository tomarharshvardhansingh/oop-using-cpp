#include<iostream>
using namespace std;

class Base{
public:
	void showBase(){
		cout<<"Base"<<endl;
	}
};


class Intermediate : public Base{
public:
	void showIntermediate(){
		cout<<"Intermediate"<<endl;
	}
};


class Derived : public Intermediate{
public:
	void showDerived(){
		cout<<"Derived"<<endl;
	}
};


int main(){
	Derived d;

	d.showBase();
	d.showIntermediate();
	d.showDerived();
	return 0;
}
