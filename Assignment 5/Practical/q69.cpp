#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream infile("data.txt");
    ofstream outfile("copyData.txt");

    if(!outfile || !infile){
        cerr<<"Error"<<endl;
    }

    char ch;
    while(infile.get(ch)){
        outfile.put(ch);
    }
    infile.close();
    outfile.close();
    return 0;
}
