#include <iostream>
using namespace std;

bool Search(int mat[][4], int n, int m, int target){
   int i= n-1, j=0;
   while(i>=0 && j<m){
    if(mat[i][j] == target){
        cout<< "cell found(" <<i<<","<<j<<")"<<endl;
        return true;
    } else if(mat[i][j] > target){
        i--;
    } else {
        j++;
    }
   

   }
   
//    for(int i=0;i<n;i++){ //TC: O(n*m)
//     for( int j=0;j<m;j++){
//         if(mat[i][j]==target){
//             cout<<i<<","<<j<<endl;

//         }
//     }
//    }
  cout<<"cell not found"<<endl;
  return false;
}

int main(){
    int matrix[4][4] ={
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    Search(matrix, 4, 4, 10);

    return 0;
}