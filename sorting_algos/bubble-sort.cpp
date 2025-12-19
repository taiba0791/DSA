#include <iostream>
using namespace std;

void bubbleSort(int *arr,int n){
   for(int i=0;i<n;i++){
    bool isSwap = false;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwap = true;
        }
    }
    if(isSwap==false){
    break;
   }
   }
   cout<<"Sorted Array: ";  
    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
}


   


int main() {
    int arr[]={7, 2, 5, 1, 3, 6, 8, 4};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
  
    return 0;
}