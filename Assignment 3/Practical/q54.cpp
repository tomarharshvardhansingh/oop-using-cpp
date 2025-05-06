#include<iostream>

using namespace std;

class Person{
    private:
        string name ;
        int age;
    public:
        void setName(string n){
            name = n ;
        }
        
        void setAge(int a){
            age = a;
        }
        
        string getName(){
            return name ;
        }
        
        int getAge(){
            return age;
        }
};

int main(){
    Person p1;
    p1.setName("Jay");
    p1.setAge(12);
    
    cout<<p1.getName()<<endl
        <<p1.getAge()<<endl;
    return 0;
}