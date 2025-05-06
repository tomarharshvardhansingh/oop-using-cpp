#include<iostream>
using namespace std;

class Book{
private :
	string name;
	string auther_name;
	double price ;
	string cat;
	long noOfPages;

public:
	Book(string name , string auther_name , double price , string cat , long noOfPages){
		this->name = name;
		this->auther_name = auther_name;
		this->price = price;
		this->cat =  cat;
		this->noOfPages = noOfPages;
	}

	void display(){
		cout<<"Name : "<<name<<endl
			<<"Author Name : "<<auther_name<<endl
			<<"Price : "<<price<<endl
			<<"Category : "<<cat<<endl
			<<"No. of Pages : "<<noOfPages<<endl;
	}

};

int main(){
	Book b1("Lord of the Rings" , "RD Man", 12.50 , "Fantasy" , 542);
	b1.display();
	return 0;
}
