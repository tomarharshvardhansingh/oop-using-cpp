#include<iostream>
#include<stdexcept>
#include<exception>
#include<fstream>

using namespace std;


int main(){
    ifstream file;
    try{
        file.open("data.txt");

        if(!file.is_open()){
            throw runtime_error("File is not opening");
        }

        string line;
        while(getline(file , line)){
            cout<<line<<endl;
        }
        file.close();
    }   catch(const runtime_error& e){
        cout<<"Error : "<<e.what()<<endl;
    } catch(...){
        cout<<"A unknow error "<<endl;
    }
    return 0;
}
