#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string l;
    ofstream outfile("data.txt");
    if(!outfile){
        cerr<<"Error";
        return 1;
    }

    while(1){
        
        getline(cin , l);
        if(l == "END"){
            break;
        }
        outfile<<l<<endl;
    }

    outfile.close();
    
    return 0;
}
