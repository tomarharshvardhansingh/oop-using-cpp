#include<iostream>
#include<stdlib>
#include<ctime>

using namespace std;

int main(){
	srand(time(0));
    int randomNumber = (rand() % 100 ) + 1;
    int userInput;
    cout<<"Welocme to Guess the Number"<<endl<<endl;
    cout<<"Guess the Number Between 1 to 100"<<endl;
    cin>>userInput;

    while(userInput != randomNumber){
        cout<<"You guess the Wrong number , Guess again"<<endl;
        rep :
        cin>>userInput;
        if(userInput < randomNumber){
            cout<<"Hint : Guess the Bigger Number"<<endl;
            goto rep;
        }else if(userInput > randomNumber) {
            cout<<"Hint : Guess the Smaller Number"<<endl;
            goto rep;
        }else {
            break;
        }
    }

    cout<<"You Guess it right"<<endl;
	return 0;
}