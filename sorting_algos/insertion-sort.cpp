#include <iostream>
using namespace std;

void insertionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    
     cout<<"Sorted Array: "; 
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}

int main() {
    int arr[]={7, 2, 5, 1, 3, 6, 8, 4};
    int n=sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
  
    return 0;
}
