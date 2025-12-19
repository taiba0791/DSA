#include <iostream>
using namespace std;

void selectionSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
          if(arr[j]<arr[minidx]){
            minidx=j;
          }        
       }    
        swap(arr[i],arr[minidx]);    
    }
     cout<<"Sorted Array: "; 
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    
}



   


int main() {
    int arr[]={7, 2, 5, 1, 3, 6, 8, 4};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
  
    return 0;
}