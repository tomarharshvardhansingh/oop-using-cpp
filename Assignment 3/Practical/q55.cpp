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


class Student : public Person{
    private:
        int studentID;
        
        
    public:
        void setStudentID(int std_id){
            studentID = std_id;
        }
        
        int getStudentID(){
            return studentID;
        }
};

int main(){
    Person p1;
    Student s1;
    p1.setName("Jay");
    p1.setAge(12);
    s1.setStudentID(1234);
    cout<<"Name : "<<s1.getName()<<endl
        <<"Age :"<<s1.getAge()<<endl
        <<"Student ID : "<<s1.getStudentID()<<endl;
    return 0;
}