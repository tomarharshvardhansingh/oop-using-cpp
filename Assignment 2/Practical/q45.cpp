#include<iostream>

using namespace std;
// Enter Default argument in prototype not in defination
void greeting(string name = "Guest");

int main(){
	string name;
	getline(cin , name);
	if(name.empty()){
		greeting();
	}else{
		greeting(name);
	}
	return 0;
}

void greeting(string name ){
	cout<<"Hello "<<name<<endl;
}