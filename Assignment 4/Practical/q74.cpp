#include<iostream>
#include<stdexcept>
#include<exception>

using namespace std;

class InvalidAgeException : public exception{
    private:
        string message;
    public: 
    InvalidAgeException(const string& msg): message(msg){};
    const char* what() const noexcept override{
        return message.c_str();
    }
};

int main(){
    try{
        int age = 1000;
    
        if(age<0 || age > 150){
            throw InvalidAgeException("Invalid Age");
        }
    }catch(const InvalidAgeException& e){
        cout<<e.what()<<endl;
    }

    return 0;
}
