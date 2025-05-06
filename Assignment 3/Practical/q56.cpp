#include<iostream>
using namespace std;

class Car{
  private:
    string make;
    string model;
    int year;

    public:
        Car(string m , string md , int y):make(m) , model(md) , year(y){};
        
        string getModel(){
            return model;
        }
        
        string getMake(){
            return make;
        }
        
        int getYear(){
            return year;
        }


};

int main(){
    Car c1("TATA" , "RATAN" , 1937);
    
    cout<<"Maker : "<<c1.getMake()<<endl
        <<"Model : "<<c1.getModel()<<endl
        <<"Year : "<<c1.getYear()<<endl; 
    return 0;
}