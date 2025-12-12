#include <iostream>
using namespace std;

void maxSubarraySum1(int *arr,int n){
    int maxSum=INT_MIN;
    
      for(int st=0; st<n; st++){
        int currSum=0;
       for(int ed=st; ed<n; ed++){
            currSum+=arr[ed];
            maxSum =max(maxSum,currSum);
       }
    }
    cout<<"MaxSum: "<<maxSum<<endl;
}


int main() {
    int arr[]={2, -3, 6, -5, 4, 2};
    int n=sizeof(arr)/sizeof(int);
    maxSubarraySum1(arr,n);
  
    return 0;
}