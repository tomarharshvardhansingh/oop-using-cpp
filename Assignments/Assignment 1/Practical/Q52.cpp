#include<iostream>

using namespace std;

int main(){
	string s;
    int v = 0 , c = 0;
    cout<<"Enter the string :- ";
    getline(cin , s);
    for(int i = 0 ; i<s.size() ; i++){
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] =='e' || s[i] == 'i'  || s[i] == 'o' || s[i] == 'u'){
            v++;
        }else{
            c++;
        }
    }
    cout<<"Number of vowels : "<<v<<endl
        <<"Numeber of consonants : "<<c<<endl;
	return 0;
}