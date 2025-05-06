/*
Write a class Employee with private attributes name, position, and salary, and public 
methods to display employee details.
*/

#include<iostream>
using namespace std;

class Employee{
private:
	string name;
	string position;
	double salary;

public:
	Employee(string n , string p , double s): name(n) , position(p) , salary(s){};

	void display(){
		cout<<"Name : "<<name<<endl
			<<"Position : "<<position<<endl
			<<"Salary : "<<salary<<endl;
	}

};

int main(){
	Employee e1("Jay" , "Software Engineer" , 200000);
	e1.display();
	return 0;
}
