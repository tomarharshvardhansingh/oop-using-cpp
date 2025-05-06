#include<iostream>

using namespace std;

int max(int a , int b , int c);
int max(int a , int b);

int main(){
	int a , b , c ;
	cout<<"Enter Numbers : "<<endl;
	cin>>a>>b>>c;
	cout<<"max of two : "<<max(a , b)<<endl;
	cout<<"max of three :"<<max(a , b , c)<<endl;
	return 0;
}

int max(int a , int b){
	if(a>=b){
		return a;
	}else{
		return b;
	}
}

int max(int  a, int b  , int c){
	int max = a;
	if(max < b){
		max = b;
	}

	if(max < c){
		max = c;
	}
	return max;
}