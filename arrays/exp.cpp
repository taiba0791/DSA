#include <iostream>
using namespace std;
//reverse arr with space
int PrintArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
int arr[] = {10, 20, 30, 40, 50};
int n = sizeof(arr)/sizeof(int);

int CopyArr[n];
for(int i=0;i<n;i++){
    int j=n-i-1;
    CopyArr[i]=arr[j];

}
for(int i=0;i<n;i++){
    arr[i]=CopyArr[i];
}

PrintArr(arr,n);

 return 0; 
}

  
