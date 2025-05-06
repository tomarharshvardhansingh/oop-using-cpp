#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number of numbers you want to give input "<<endl;
    cin>>n;
    int a , sum = 0;
    for(int i = 0; i<n ; i++){
        cout<<"Enter the number "<<endl;
        cin>>a;
        sum += a;
    }

    cout<<"Sum "<<sum<<endl;
    return 0;
}