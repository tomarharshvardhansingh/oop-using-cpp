#include<iostream>
using namespace std;

class Car{
  private:
    string make;
    string model;
    int year;

    public:
       void set(string m , string md , int y){
           make = m;
            model = md;
           year  = y;
       }
        
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
        
int main()
{
    Car cars[2];
    cars[0].set("TATA" , "Ratan" , 1937);
    cars[1].set("Honda" , "City" , 1940);
    
    cout<<cars[0].getMake()<<endl
        <<cars[0].getModel()<<endl
        <<cars[0].getYear()<<endl;
    return 0;
}