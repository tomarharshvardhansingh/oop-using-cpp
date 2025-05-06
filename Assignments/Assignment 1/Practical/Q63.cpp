#include<iostream>

using namespace std;

int main(){
	string str;
    int fq[256] = {0};
    cout<<"Enter the String :- ";
    getline(cin , str);
    for(int i =  0 ; i<str.size() ; i++){
        fq[str[i]]++;
    }
    for(int i = 0 ; i<256 ; i++){
        if(fq[i] >0){
            cout<<(char)i<<" : "<<fq[i]<<endl;
        }
    }
	return 0;
}
