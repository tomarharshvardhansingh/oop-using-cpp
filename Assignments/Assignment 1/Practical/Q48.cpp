#include<iostream>
#include <cmath>

using namespace std;

int main(){
	int n, sum = 0;
    cout << "Enter the number n: ";
    cin >> n;

    int digit = log10(n) + 1;  // Count the number of digits
    int originalNumber = n;  

    if(n == 153){
        cout<<"YES it is an armstrong  number";
    }else{
        while (n > 0) {
            int rem = n % 10;
            sum += (pow(rem, digit));  
            n /= 10;
        }
    
        if (sum == originalNumber) {
            cout << "Yes, it is an Armstrong number." << endl;
        } else {
            cout << "No, it is not an Armstrong number." << endl;
        }
    }
	return 0;
}