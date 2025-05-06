#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double n = 21.213121332;
    cout<<fixed<<setprecision(3)<<n<<endl;
    cout<<scientific<<setprecision(3)<<n<<endl;
    return 0;
}
