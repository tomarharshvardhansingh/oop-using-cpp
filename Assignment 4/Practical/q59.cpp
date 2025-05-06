#include<iostream>
using namespace std;

class Student{
private:
    int rollNumber ;
    string name ;

public:
    void setData(int rl , string n){
        name = n;
        rollNumber  = rl;
    }

    void displayOtherObjectDetail(Student* ptr){
        cout<<"Name : "<<ptr->name<<endl
            <<"Roll Number : "<<ptr->rollNumber<<endl;
    }

    void displaySelf(){
        cout<<"Name "<<name<<endl
            <<"Roll Number "<<rollNumber<<endl;
    }
};

int main(){
    Student s1 , s2;
    s1.setData(123 , "Jay");
    s2.setData(124 , "Harsh");

    s1.displayOtherObjectDetail(&s2);
    s2.displayOtherObjectDetail(&s1);

    s1.displaySelf();
    s2.displaySelf();

    return 0;
}
