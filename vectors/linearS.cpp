#include <iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> vec={11,45,23,56,78,90,12,34,67,89};
    int target = 90;
    for(int i=0; i<vec.size();i++){
        if(vec[i]== target){
            cout << "Element found at index: " << i << endl;
            break;
        }
    }

}