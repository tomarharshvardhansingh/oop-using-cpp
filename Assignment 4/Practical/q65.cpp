#include<iostream>
using namespace std;

class Account{
public:
    virtual void calInterest() = 0;
};

class SavingAcc : public Account{
private:
    int principle ;
    double rate ;
    int time;
public:

    SavingAcc(int p = 0 , int t = 0 , double r = 5): principle(p) , time(t) , rate(r) {};

    void calInterest() override{
        cout<<(principle*rate*time)/100<<endl;
    }

};

class CurrentAcc : public Account{
    private:
    int principle ;
    double rate ;
    int time;
public:

    CurrentAcc(int p = 0 , int t = 0 , double r = 6.5): principle(p) , time(t) , rate(r) {};

    void calInterest() override{
        cout<<(principle*rate*time)/100<<endl;
    }

};

int main(){
    Account* accptr ;

    SavingAcc s(100 , 1);
    CurrentAcc c(100 , 1);

    accptr = &s;
    accptr->calInterest();

    accptr = &c;
    accptr->calInterest();
    return 0;
}
