#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char ch;

    ofstream outfile("data.txt");
    if(!outfile){
        cerr<<"Error"<<endl;
        return 1;
    }
    cout<<"Enter Some text (press Enter to stop): "<<endl;
    while(cin.get(ch)){
        if(ch == '\n'){
            break;
        }
        outfile.put(ch);
    }

    outfile.close();

    ifstream infile("data.txt");

    if(!infile){
        cerr<<"Error"<<endl;
        return 1;
    }

    cout<<endl<<"Data read by file"<<endl;
    while(infile.get(ch)){
        cout.put(ch);
    }

    infile.close();
    cout<<endl<<"Program Finished"<<endl;
    return 0;
}
