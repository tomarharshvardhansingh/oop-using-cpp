#include<iostream>
using namespace std;

class Logger{
public:
	~Logger(){
		cout<<"Obbject is Destroyed";
	}
};

int main(){
	Logger l;
	return 0;
}
