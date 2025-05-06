#include<iostream>

int main(){
	int mat1[][2] = {
        {1 , 2},
        {3 , 4},
        {5 , 6}
    };

    int mat2[][2] = {
        {5 , 5}, 
        {4 , 3},
        {1 , 1}
    };

    int matSum[3][2];
    int row = 3 , col = 2;
    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j< col ; j++){
            matSum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j< col ; j++){
            cout<<matSum[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}