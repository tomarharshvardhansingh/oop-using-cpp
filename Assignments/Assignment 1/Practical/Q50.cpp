#include<<iostream>>

using namespace std;

int main(){
	int n , rev = 0;
    cout<<"Enter the number n :- ";
    cin>>n;
    int  digit = n;
    while(n >0){
        int rem = n % 10;
        rev = rev*10 + rem ;
        n /= 10;
    }
    if(rev == digit){
        cout<<"Yes this is Palindrome";
    }else{
        cout<<"No it is not";
    }
	return 0;
}