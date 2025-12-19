#include <iostream>
using namespace std;

void printSubarray(int *arr,int n){
    for(int st=0;st<n;st++){
        for(int ed=st;ed<n;ed++){
            for(int k=st;k<=ed;k++){
                
            }
             cout<< endl;
        }
       
    }
}



int main() {
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(int);
    printSubarray(arr,n);
  
    return 0;
}