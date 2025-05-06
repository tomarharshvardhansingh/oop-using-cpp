#include<iostream>
using namespace std;

class Counter{
private:
    int count = 0;
public:
    Counter(int c = 0){
        count = c;
    }

    void Compare(const Counter& other){
        if(this->count > other.count){
            cout<<"Other object is Smaller than this object"<<endl;
        }else if (this->count < other.count){
            cout<<"Other object is Bigger than this object"<<endl;
        }else{
            cout<<"Both are same count "<<endl;
        }
    }


};
int main(){
    Counter c1(10) , c2(12);
    c1.Compare(c2);
    
    return 0;
}
