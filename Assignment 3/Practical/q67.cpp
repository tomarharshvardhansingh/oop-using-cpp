#include<iostream>
using namespace std;

class FileHandler{
public:
	FileHandler(){
		cout<<"File Open"<<endl;
	}

	~FileHandler(){
		cout<<"File Close"<<endl;
	}
};

int main(){
	FileHandler f;
	
	return 0;
}
