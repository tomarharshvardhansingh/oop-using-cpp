#include<iostream>

using namespace std;

class Book{
private:
    string bookName ;
    int price ;

public:
    void enterData(){
        cout<<"Enter Book Name"<<endl;
        cin.ignore();
        getline(cin , bookName);
        
        cout<<"Enter the prices of the book"<<endl;
        cin>>price;
    }


    void showData() const{
        cout<<"Book Name : "<<bookName<<endl
            <<"Price : "<<price<<endl;
    }
};

int main(){
    int n ;
    cout<<"Enter the number of Objects"<<endl;
    cin>>n;

    Book *bookArr = new Book[n];

    for(int i = 0 ; i<n ; i++){
        cout<<"Enter the detail of book number "<<(i + 1)<<endl;
        bookArr[i].enterData();
    }

    for(int i = 0; i<n ; i++){
        cout<<"Details of book number "<<(i+1)<<endl;
        bookArr[i].showData();
    }


    return 0;
}
