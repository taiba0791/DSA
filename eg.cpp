#include <iostream>
using namespace std;

void insertionSort(char ch[], int n){
    for(int i=0;i<n;i++){
         int curr = ch[i];
         int prev = i-1;
         while(prev >=0 && ch[prev]>curr){
            swap(ch[prev],ch[prev+1]);
            prev--;
         }
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
     cout<<ch[i]<<" ";
    }   
    
}

int main() {
   char ch[] = {'f','b', 'a', 'e', 'd', 'c'};
   int n=sizeof(ch)/sizeof(char);
    insertionSort(ch,n);
    return 0;
}