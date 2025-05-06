#include<iostream>

using namespace std;

class Vector{
private:
	int* arr;
	int size;
public:
	Vector(int s = 0): size(s){
		arr = new int[size];
	}

	~Vector(){
		delete[] arr;
	}

	int& operator[](int index){
		if(index >= 0 && index < size){
			return arr[index];
		}else{
			cout<<"You Enter an invalid input"<<endl;
		}
	}

	int getSize(){
		return size;
	}

};


int main(){
	Vector v(5);

	for(int i = 0 ; i < v.getSize() ; i++){
		v[i] = i+1;
	}

	for(int  i = 0; i<v.getSize() ; i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
