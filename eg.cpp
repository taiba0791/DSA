#include <iostream>
using namespace std;

int Search(int mat[][3], int n,int m){
   int target =8;
   for(int i=0;i<n;i++){
    for( int j=0;j<m;j++){
        if(mat[i][j]==target){
            cout<<i<<","<<j<<endl;

        }
    }
   }
    return -1;
}

int main(){
    int matrix[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    Search(matrix,3,3);

    return 0;
}