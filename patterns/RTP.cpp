#include <iostream>
using namespace std; 
int i,j,n=3;
 
 int main(){
    for(i=0;i<n;i++){
        char ch='A'+i;  
        for(j=0;j<i+1;j++){
            cout<<ch<< " ";
            ch--;
        }
        cout<<endl;
    }
    return 0;
 }