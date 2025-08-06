#include<iostream>
using namespace std;
void Unique(int arr[], int size) {
    for(int i=0;i<size;i++){
        bool isUnique = true;
        for(int j=0;j<size;j++){
            if (i!=j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
             
        }
        if(isUnique){
            cout<< arr[i]<<" ";
        }

    }
}

int main(){
    int arr[100] ;
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;    
    cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    cout<< "unique elements are:" ;
    Unique(arr, size);
    return 0;

}