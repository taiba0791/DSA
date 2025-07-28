#include <iostream>
using namespace std;

int linearSearch(int arr[], int size,int target) {
    for(int i=0; i<size;i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}

int main(){
int nums[] = {10,20,30,25,45,50,11,23};
int size = 8;
cout << "Enter the target number to search: ";
int target; 
cin >> target;

cout << " target is present at index : "<< linearSearch(nums, size, target)<<endl;
return 0;

}





