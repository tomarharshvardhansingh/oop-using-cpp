#include<iostream>
using namespace std;

class BankAcc{
  private:
    string name ; 
    int accNo;
    string type;
    double balance;   

    public:
        BankAcc(string name , int accNo , string type , double balance){
            this->name = name ;
            this->accNo = accNo;
            this->type = type;
            this->balance = balance;
        }
        
        void toDeposit(double value){
            balance += value;
        }
        
        double checkTheBalance(){
            return balance;
        }
        
        void withDraw(double value){
            balance -= value;
        }
        
        string displayName(){
            return name;
        }
};

int main(){
    string name , type;
    int acc;
    double balance ;
    cout<<"Enter the Name of Account holder"<<endl;
    getline(cin ,name);
    cout<<"Enter the Acc. Number "<<endl;
    cin>>acc;
    cout<<"Enter the Acc. Type "<<endl;
    cin>>type;
    cout<<"Enter the intial balance"<<endl;
    cin>>balance;
    BankAcc b1(name , acc , type , balance);
    
   
    while(1){
    int input ;
    cout<<"What you want to do :"<<endl;
    cout<<"1 : check the balance "<<endl;
    cout<<"2 : deposit amount "<<endl;
    cout<<"3 : withsdraw amount "<<endl;
    cout<<"4 : display name and balance"<<endl;
    cout<<"5 : Exist "<<endl;
    cin>>input;
    if(input == 1){
        cout<<"Balance : "<<b1.checkTheBalance();
        cout<<endl;
        
    }else if (input == 2){
        double amount;
        cout<<"Enter the Amount"<<endl;
        cin>>amount;
        b1.toDeposit(amount);
        cout<<endl;
        
    }else if (input == 3){
         double amount;
        cout<<"Enter the Amount"<<endl;
        cin>>amount;
        b1.withDraw(amount);
        cout<<endl;
        
    }else if (input == 4){
        cout<<"Name : ";
        b1.displayName();
        cout<<endl;
        cout<<"balance : "<<b1.checkTheBalance()<<endl;
        
    }else if(input == 5){
        break;
    }
    else{
        cout<<"Enter invalid input , enter Agian"<<endl;
    }
    }   
    return 0;
}
