#include <iostream>
#include<vector>
using namespace std;

int reverseVec(vector<int>& vec){
    int start=0;
    int end= vec.size()-1;
    while(start<end){
        swap(vec[start], vec[end]);
        start++;
        end--;

    }
    return 0;
}

int main(){
    vector<int> vec={11,45,23,56,78,90,12,34,67,89};
    cout << "Reversed vector: ";
    reverseVec(vec);
    for(int val : vec){
        cout << val << " ";
    }
   
    return 0;
}