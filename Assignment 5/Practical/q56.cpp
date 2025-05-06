#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("data56.txt" , ios::out | ios::app);
    if(!file){
        cout<<"Error: file is not opening"<<endl;
        return 0;
    }
    string line = "Helloo";
    file<<line<<endl;

    ifstream infile("data56.txt");
    if(!file){
        cout<<"Error : file is not opening"<<endl;
    }
    string l ;
    while(getline(infile, l)){
        cout<<l<<endl;
    }
    return 0;
}