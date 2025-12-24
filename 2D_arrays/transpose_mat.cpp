#include <iostream>
using namespace std;

void transpose(int mat[][3], int n,int m){
    int transpose[3][2];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           transpose[j][i]= mat[i][j];
        }
     }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<< transpose[i][j]<<" ";
            }
            cout<<endl;
        }
}

int main(){
    int matrix[2][3] ={
        {1, 4, 9},
        {11, 4, 3},
        
    };
    transpose(matrix, 2, 3);

    return 0;
}