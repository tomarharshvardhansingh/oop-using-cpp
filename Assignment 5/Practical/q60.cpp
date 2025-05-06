#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter characters (press 'Enter' to end )"<<endl;

    while(cin.get(ch)){
        if(ch == '\n'){
            break;
        }
        cout.put(ch);
    }
    return 0;
}
