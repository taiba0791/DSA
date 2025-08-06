#include <iostream>
using namespace std;



int main(){
    int num[]={15,20,7,-15,24,0};
    int size =6;
    int index1, index2;
     int smallest = INT_MAX;
     int largest = INT_MIN;
     for ( int i=0;i<size;i++){
      smallest = min(num[i], smallest);
      if(smallest == num[i]) {
           index1=i;
      };
      largest = max(num[i], largest);
      if(largest == num[i]) {
           index2=i;
      };
    }

    cout << "smallest="<< index1<<endl;
    cout << "largest="<< index2<<endl;

    swap(num[index1], num[index2]);
    cout << "After swapping, smallest="<< index1 << " largest="<< index2 << endl;
     cout << "Array after swapping max and min: ";
        for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
        }

    return 0;
}