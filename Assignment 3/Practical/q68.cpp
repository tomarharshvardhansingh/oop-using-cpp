#include<iostream>
using namespace std;

class dynamicArr{
private :
	int size ;
	int *arr;
public:
	dynamicArr(int s){
		size = s;
		arr = new int[size];
		cout<<"Arr of dynamic Size is created"<<endl;
	}

	~dynamicArr(){
		delete[] arr;
		cout<<"Dyammic memory is delete"<<endl;
	}

	void set(int idx , int v){
		if(idx >= 0 && idx < size){
			arr[idx] = v;
		}
	}

	int get(int idx) const{
			if(idx >= 0 && idx < size){
				return arr[idx];
			}
			return -1;
	}
};

int main(){
	dynamicArr da(5);

	da.set(0 , 1);
	da.set(1 , 234);

	cout<<da.get(0)<<endl
		<<da.get(1)<<endl;

	return 0;
}
