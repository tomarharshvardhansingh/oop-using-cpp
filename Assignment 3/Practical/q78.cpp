#include<iostream>
using namespace std;

class Animal{
public:
	void sleep(){
		cout<<"Sleep"<<endl;
	}

	void eat(){
		cout<<"eat"<<endl;
	}
};

class Cat : public Animal{
public:
	void mew(){
		cout<<"Mew"<<endl;
	}
};

class Dog : public Animal{
public:
	void bark(){
		cout<<"Bark"<<endl;
	}
};

class Bird :public Animal{
public:
	void tweet(){
		cout<<"Tweet"<<endl;
	}
};
int main(){
	Cat c1;
	Bird b1;
	Dog d1;

	c1.mew();
	b1.tweet();
	d1.bark();
	return 0;
}
