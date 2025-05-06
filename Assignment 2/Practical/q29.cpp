#include<iostream>

using namespace std;

int maxOfThree(int a , int b , int c);

int main(){
	int a , b , c;
	cout<<"Enter a , b and c "<<endl;
	cin>>a>>b>>c;

	cout<<"Max of "<<a<<" "<<b<<" and "<<c<<" is "<<maxOfThree(a , b  ,c );
	return 0;
}

int maxOfThree(int a , int b , int c){
	int max = a ;
	if(max < b){
		max = b;
	}

	if(max < c){
		max = c;
	}

	return max;
}