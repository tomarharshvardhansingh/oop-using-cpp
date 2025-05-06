#include<iostream>

using namespace std;

class Rectangle{
  private:
    double length;
    double width;

    public:
        void setLength(double l){
            length = l;
        }
        
        void setWidth(double w){
            width = w;
        }
        
        double area(){
            return (length * width);
        }
        
        double perimeter(){
            return (2*(length + width));
        }
};

int main(){
    Rectangle r1 ;
    r1.setLength(12);
    r1.setWidth(10);
    
    cout<<"Area : "<<r1.area()<<endl
        <<"perimeter : "<<r1.perimeter()<<endl;
    return 0;
}
