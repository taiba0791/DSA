#include <iostream>
using namespace std;

void revArray(int arr[], int size){
    int start=0;
    int end=size-1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}


int main(){
    int arr[5];
    int size = 5;
    cout << "Enter 5 elements of the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
  revArray(arr, size) ;
    cout << "Reversed array: ";
    for(int i=0; i<size; i++){
        cout <<arr[i] << " ";
    }
    return 0;
}