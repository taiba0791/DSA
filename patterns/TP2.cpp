#include <iostream>
using namespace std;
int main(){
    int i,j,n=4;
    
    for(i=0;i<n;i++){
        int num=1;
        for(j=0;j<i+1;j++) {
            cout << num << " "; 
            num++; 
        }
         
        cout << endl;
    }
    return 0;
}