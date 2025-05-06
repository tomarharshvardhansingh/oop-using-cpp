#include<iostream>
#include<fstream>

using namespace std;

int main(){
    const char* oldFile = "copyData.txt";
    const char* newFile = "newData.txt";
    
    if(rename(oldFile , newFile) == 0){
        cout<<"Successfully"<<endl;
    }else{
        cout<<"Error";
    }

    if(remove(newFile) == 0){
        cout<<"Remove succesfully"<<endl;
    }else{
        cout<<"Error"<<endl;
    }
    return 0;
}
