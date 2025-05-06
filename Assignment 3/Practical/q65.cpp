#include<iostream>
using namespace std;

class Point{
private:
	 double x ;
	 double y ;
	 double z ;
public:
	Point(double x = 0 , double y = 0, double z = 0){
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Point(const Point &p){
		x = p.x;
		y = p.y;
		z = p.z;
	}

	void display(){
		cout<<"(x , y ,z) : "<<"( "<<x<<" , "<<y<<" , "<<z<<" )"<<endl;
	}
}; 

int main(){
	Point  p1(12 , 10);
	Point  p2 = p1;

	cout<<"Original"<<endl;
	p1.display();
	cout<<endl;
	cout<<"Copy"<<endl;
	p2.display();
	cout<<endl;

	return 0;
}
