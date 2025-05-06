#include <iostream>
using namespace std;

// Base class
class BankAccount {
protected:
    string name;
    double balance;

public:
    BankAccount(string n, double b) : name(n), balance(b) {}

    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance" << endl;
    }

    virtual void display() const {
        cout << "Name: " << name << ", Balance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

// Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string n, double b) : BankAccount(n, b) {}

    void withdraw(double amount) override {
        if (amount > balance) {
            cout << "Cannot withdraw: Insufficient balance in Savings Account" << endl;
        } else {
            balance -= amount;
        }
    }

    void display() const override {
        cout << "Savings Account - ";
        BankAccount::display();
    }
};

// Derived class: CurrentAccount
class CurrentAccount : public BankAccount {
public:
    CurrentAccount(string n, double b) : BankAccount(n, b) {}

    void withdraw(double amount) override {
        // No overdraft check for simplicity
        balance -= amount;
    }

    void display() const override {
        cout << "Current Account - ";
        BankAccount::display();
    }
};
