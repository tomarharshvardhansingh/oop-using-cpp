#include<iostream>
using namespace std;

class Date{
private:
	int dd ;
	int mm ;
	int yyyy;
public:
	Date(int d = 0 , int m = 0 , int y = 0): dd(d) , mm(m) , yyyy(y) {};

	bool operator==(const Date& obj){
		if(dd == obj.dd && mm == obj.mm && yyyy == obj.yyyy){
			return true;
		}else{
			return false;
		}
	}
};

int main(){
	Date d1(12 ,10 , 2005);
	Date d2(12 , 10 , 2005);

	if(d1 == d2){
		cout<<"Same Date"<<endl;
	}else{
		cout<<"Not Same Date"<<endl;
	}

	return 0;
}
