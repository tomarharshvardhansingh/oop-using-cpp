#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number of nine"<<endl;
    cin>>n;

    string arr[n];
    cin.ignore();

    for(int i =0 ; i<n ; i++){
        cout<<"Enter "<<"line "<<(i+1)<<endl;
        getline(cin , arr[i]);
    }

    for(int i =0; i<n ; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}