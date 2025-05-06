#include<iostream>
using namespace std;

class Library{

private:
	string privateBook = "private";
protected:
	string protectedBook = "protected";

public:
	string publicBook = "Public";

	void showAll(){
		 cout<<protectedBook<<endl
		 	<<privateBook<<endl
		 	<<publicBook<<endl;
	}
};

class Member : public Library{
public:
	void showDerivedAccess(){
		 cout<<protectedBook<<endl
		 	<<publicBook<<endl;
	}
};
int main(){
	Member m1;
	m1.showDerivedAccess();
	return 0;
}
