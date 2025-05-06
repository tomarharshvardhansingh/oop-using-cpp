#include<iostream>

using namespace std;

class Box{
private:
    int l;
    int b;
    int h;
public:
    Box(int l = 0 , int b = 0 , int h = 0 ){
        this->l = l;
        this->b = b;
        this->h = h;
    }

    Box* getThisPointer(){
        return this;
    }

    void display(){
        cout<<"l : "<<l<<endl
            <<"b : "<<b<<endl
            <<"h : "<<h<<endl;
    }

};

int main(){
    Box b1(10 , 10 ,12);
    Box* ptr = b1.getThisPointer();

    ptr->display();
    return 0;
}
