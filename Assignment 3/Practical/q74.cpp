#include<iostream>
using namespace std;

class Box{
private:
	int length;

public:
	Box(int l = 0): length(l){};

	friend int vol(Box& obj){
		return obj.length*obj.length*obj.length;
	}
};

// void vol(Box& b){
// 	int l1 = len(b);
// 	cout<<l1*l1*l1;
// }

int main(){
	Box b1(10);
	int v = vol(b1);
	cout<<v;
	return 0;
}
