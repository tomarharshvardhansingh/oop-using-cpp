#include<iostream>

using namespace std;

int main(){
	int matrix[2][3]  = {
        {1 , 2 ,3} ,
        {4 , 5 , 6} 
    };

    int row = 2 ,col = 3;

    int tranpose[3][2];

    cout<<"MATRIX :" <<endl;
    for(int i =0 ; i<row ; i++){
        for(int j = 0  ; j<col ; j++){
            cout<<matrix[i][j] <<"  ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i<row ; i++){
        for(int j =0 ; j <col ; j++){
            tranpose[j][i] = matrix[i][j];
        }
    }
    cout<<endl;

    cout<<"TRANSPOSE : "<<endl;
    for(int i =0; i< col; i++){
        for(int j =0 ; j<row ; j++){
            cout<<tranpose[i][j]<<"  ";
        }
        cout<<endl;
    }
	return 0;
}