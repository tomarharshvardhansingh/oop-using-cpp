#include<iostream>
using namespace std;

class Distance{
private:
	double dis;
public:
	Distance(double d = 0): dis(d){};

	friend double getDistance(Distance& obj){
		return obj.dis;
	}
};

void addDistance(int d1 , int d2){
	cout<<(d1+ d2)<<endl;
}

int main(){
	Distance d1(10);
	Distance d2(11);

	addDistance(getDistance(d1) , getDistance(d2));
	return 0;
}
