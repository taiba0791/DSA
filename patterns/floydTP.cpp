#include <iostream>
using namespace std; 
int i,j,n=3; 
char ch='A';  
 int main(){
    for(i=0;i<n;i++){
        for(j=i+1;j>0;j--){
            cout<< ch<< " ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
 }