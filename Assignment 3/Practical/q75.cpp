#include<iostream>
#define PI 3.14
using namespace std;

class Circle{
private:
	double radius;
public:
	Circle(double r = 0  ): radius(r){};

	friend double rad(Circle& obj){
		return obj.radius;
	}
};

void calArea(double r){
	cout<<(PI*r*r)<<endl;
}

int main(){
	Circle c1(1.0);
	double r = rad(c1);
	calArea(r);
	return 0;
}
