#include<iostream>

using namespace std;

void print(int value);
void print(float value);
void print(string value);

int main(){
	int a = 12;
	float af = 32.12;
	string as= "Jay";

	print(a);
	print(af);
	print(as);
	return 0;
}

void print(int value){
	cout<<value<<endl;
}

void print(float value){
	cout<<value<<endl;
}

void print(string value){
	cout<<value<<endl;
}