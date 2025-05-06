#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    void setDetails(int accNo, string name, double initialBalance) {
        accountNumber = accNo;
        accountHolderName = name;
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Initial balance can't be negative. Setting balance to 0.\n";
        }
    }

    int getAccountNumber() {
        return accountNumber;
    }

    string getAccountHolderName() {
        return accountHolderName;
    }

    double getBalance() {
        return balance;
    }

    void display() {
        cout << "\nAccount Details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: ₹" << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited ₹" << amount << " successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew ₹" << amount << " successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }
};

int main() {
    Account acc;

    acc.setDetails(101, "J
