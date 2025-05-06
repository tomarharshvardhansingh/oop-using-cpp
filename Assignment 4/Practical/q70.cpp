#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment()=0;
    virtual ~Payment() {}
};

class CreditCardPayment : public Payment {
private:
    string cardNumber;
    float amount;
public:
    CreditCardPayment(string c, float a) : cardNumber(c), amount(a) {}
    void processPayment() override {
        cout<<"Processing credit card payment of Rs. "<<amount<<endl;
        cout<<"Card Number: "<<cardNumber<<endl;
    }
};

class DebitCardPayment : public Payment {
private:
    string cardNumber;
    float amount;
public:
    DebitCardPayment(string c, float a) : cardNumber(c), amount(a) {}
    void processPayment() override {
        cout<<"Processing debit card payment of Rs. "<<amount<<endl;
        cout<<"Card Number: "<<cardNumber<<endl;
    }
};

int main() {
    Payment* p;

    CreditCardPayment c("1234-5678-9876-5432", 1500);
    DebitCardPayment d("4321-8765-6789-1234", 1000);

    p=&c;
    p->processPayment();

    p=&d;
    p->processPayment();

    return 0;
}
