#include <iostream>
using namespace std;

void Sum(int arr[], int size){
   int sum=0;
   for(int i=0;i<size;i++){
       sum+=arr[i];
   }
    cout << "Sum of the array elements: " << sum << endl;
}

void Product(int arr[], int size){
   int product=1;
   for(int i=0;i<size;i++){
       product*=arr[i];
   }
    cout << "Sum of the array elements: " << product << endl;
}


int main(){
    int arr[5];
    int size = 5;
    cout << "Enter 5 elements of the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
  Sum(arr, size) ;
  Product(arr, size);
    return 0;
}