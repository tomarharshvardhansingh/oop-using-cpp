#include<iostream>
using namespace std;

int add(int a , int b){
	return a+b;
}

int subtract(int a , int b){
	return a- b;
}

int multiply(int  a , int b){
	return(a*b);
}

int divide(int a , int b){
	if(b!= 0){
		return(a/b);
	}else{
		cout<<"Error! Division by Zero "<<endl;
		return 0;
	}
}

int main(){
	int (*operations[4])(int , int) = {add , subtract , multiply , divide};
	int a , b , choice;

	cout<<"Enter two Numbers "<<endl;
	cin>>a>>b;

	repeat:

	cout<<"Choose the Operations "<<endl
		<<"0 for add"<<endl
		<<"1 for subtract"<<endl
		<<"2 for multiply"<<endl
		<<"3  for divide"<<endl;
	cin>>choice;

	if(choice >= 0 && choice <=3){
		int result = operations[choice](a , b);
		cout<<"Result : "<<result<<endl;
	}else{
		cout<<"Inavlid choice , Enter Again "<<endl;
	}

	return 0;
}