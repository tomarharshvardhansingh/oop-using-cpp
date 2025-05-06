#include<iostream>
using namespace std;

class Person{
private:
    string name ;
    int age ;
public:
    Person& setName(const string& n){
        name = n;
        return *this;
    }

    Person& setAge(int a){
        age = a;
        return *this;
    }

    void display() const {
        cout<<"Name : "<<name<<endl
        <<"Age :"<<age<<endl;
    }
};

int main(){
    Person p1;

    p1.setName("Jay").setAge(12).display();
    return 0;
}
