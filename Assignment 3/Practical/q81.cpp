#include<iostream>
using namespace std;

class Parent{
public:
	void surname(){
		cout<<"surname"<<endl;
	}
};

class child1{
public:
	void name1(){
		cout<<"Child 1"<<" ";
	}
};

class child2 {
public:
	void name2(){
		cout<<"Child 2"<<" ";
	}
};


class Child : public Parent  , public child1 , public child2{

};

int main(){
	Child c1;
	c1.name1();;
	c1.name2();
	c1.surname();
	return 0;
}
