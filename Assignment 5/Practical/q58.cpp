#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string lines[] = {"Hello" , "My name is" , "Jay"};
    ofstream outfile("data.txt");
    if(!outfile){
        cout<<"Error"<<endl;
        return 1;
    }

    for(const string& line : lines){
        outfile<<line<<endl;
    }
    outfile.close();
    cout<<"Data successfully written to file"<<endl;
    return 0;
}
