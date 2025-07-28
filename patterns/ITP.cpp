#include <iostream>
using namespace std;
int i, j, n = 5;
int main(){
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout << " ";
        }
        //  for(j=0;j<n-i;j++){
        //     cout << i+1 ; // for printing numbers
        // }
        char ch='A'+i;
        for(j=0;j<n-i;j++) {
            cout << ch; // for printing characters
            
        }
        cout << endl;
    }
    return 0;
}