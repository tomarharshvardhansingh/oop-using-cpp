#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream file("data.txt" , ios::out | ios::in);
    if(!file){
        cerr<<"Error"<<endl;
        return 1;
    }

    string l = "Hello";
    file<<l<<endl;


    file.seekg(0);
    string o;

    while(getline(file , o)){
        cout<<o<<endl;
    }

    return 0;
}
