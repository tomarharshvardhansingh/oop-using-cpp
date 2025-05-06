#include<iostream>
using namespace std;

class Fraction{
private:
	int numerator;
	int denominator;

public:
	Fraction(int  n  = 0 , int d = 1): numerator(n) , denominator(d){};

	friend istream& operator>>(istream& in , Fraction& fraction){
		cout<<"Enter the numerator"<<endl;
		in>>fraction.numerator;

		cout<<"Enter the denominator"<<endl;
		in>>fraction.denominator;

		return in;
	}

	friend ostream& operator<<(ostream& out ,const Fraction& fraction){
		out << fraction.numerator << "/" << fraction.denominator<<endl;
		return out;
	}
};

int main(){
	Fraction f;
	cin>>f;

	cout<<"Fraction is "<<f<<endl;
	return 0;
}
