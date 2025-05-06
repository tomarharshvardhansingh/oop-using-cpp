#include<iostream>

using namespace std;

int main(){
	string s , t;
    cout<<"Enter the string s :- ";
    cin>>s;
    t.resize(s.size());
    int i = 0;
    for(int i =0 ; i<s.size() ; i++){
        t[i] = s[s.size() - i -1];
    }
    cout<<t;
	return 0;
}