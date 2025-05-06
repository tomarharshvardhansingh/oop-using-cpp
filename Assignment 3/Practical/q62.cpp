#include<iostream>
using namespace std;

class Math{
    private:
        static double a;
        static double b;
    public:
        
        Math(int n1 , int n2){
            a = n1;
            b = n2;
        }
        
        static double  add(){
            return (a+b);
        } 
    
};

double Math::  a = 10 ;
double Math::  b = 10;

int main(){
   cout<<Math::add();

    return 0;
}
