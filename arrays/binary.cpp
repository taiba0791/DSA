#include <iostream>
using namespace std;
int BinaryS(int arr[], int key, int n ){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;

        } else if(arr[mid]<key){//2nd half
            st=mid+1;
        }else if(arr[mid]){
            end=mid-1;
        }
    }
    return -1;
}


int main(){
    int arr[]={2,4,6,8,10,12,14,16,18};
    int n= sizeof(arr)/sizeof(int);
    int key=44 ;
    cout<<BinaryS(arr,key,n);
    return 0;
}