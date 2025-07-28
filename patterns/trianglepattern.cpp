#include <iostream>
using namespace std;

int main (){
    int i,j,n=5;
     
     for(i=0;i<n;i++){
        //     for(j=0;j<i+1;j++){   // for printing stars
        //     cout<<"*"<< " ";
        // }
        for(j=0;j<i+1;j++) {
            cout << i+1 << " "; // for printing numbers
        }
        // char ch = 'A'+i;
        // for(j=0;j<=i;j++) {
        //     cout << ch << " "; 
        //              }
        cout << endl;
     }
    
     return 0;
}