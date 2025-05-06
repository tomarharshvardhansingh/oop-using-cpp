#include<iostream>
using namespace std;

class Matrix{
private:
	 int row ;
	 int col;
	 int **arr;
public:
	 Matrix(int r , int c): row(r) , col(c){
	 	
	 	arr = new int*[row];
	 	for(int i = 0 ;i<row ; i++){
	 		arr[i]   = new int[col];
	 	}

	 	cout<<"Enter the Values"<<endl;
	 	for(int i = 0 ;i<row ; i++){
	 		for(int j = 0 ;j<col ; j++){
	 			cin>>arr[i][j];
	 		}
	 	}
	 }

	 void display(){
	 	cout<<"Matrix :"<<endl;
	 	for(int i = 0 ;i<row ; i++){
	 		for(int j = 0 ;j<col ; j++){
	 			cout<<arr[i][j]<<" ";
	 		}
	 		cout<<endl;
	 	}

	 }

};

int main(){
	Matrix m1(3 , 3);
	m1.display()
	return 0;
}
