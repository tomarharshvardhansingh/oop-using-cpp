#include<iostream>
#include<cmath>

using namespace std;

double compoundInterest(double principal, double rate = 5.0, int t = 10);  // Default arguments

int main() {
    double principal, rate;
    int time;
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (default is 5%): ";
    cin >> rate;

    cout << "Enter the time period (in years) (default is 10 years): ";
    cin >> time;

    double interest = compoundInterest(principal, rate, time);

    cout << "The compound interest is: " << interest << endl;

    return 0;
}

double compoundInterest(double principal, double rate, int t) {
    // Compound Interest formula: A = P * (1 + r/n)^(nt)
    double amount = principal * pow((1 + rate / 100), t);  // Calculating amount after interest
    double interest = amount - principal;  // Interest = Amount - Principal

    return interest;
}
