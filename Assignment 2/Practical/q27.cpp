#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc , char * argv[]){
	if(argc != 3){
		cerr<<"Please provide exactly two intergers as commnad line argumnets \n";
		return 1;
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int sum = num1 + num2 ;
	cout<<"The sum of "<<num1<<" and "<<num2<<" is : "<<sum<<endl;
	return 0;
}