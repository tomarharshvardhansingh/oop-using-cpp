#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ifstream file("data.txt");
    if(!file){
        cerr<<"Error";
        return 1;
    }

    string l;
    while(getline(file , l)){
        cout<<l<<endl;
    }
    file.close();
    return 0;
}
