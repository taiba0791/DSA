#include <iostream>
using namespace std;
int main(){
    int i,j,n=4;
    //top
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        if(i!=n-1){
            for(j=0;j<2*(n-i)-2;j++){
                cout<<" ";
            }
        }
        for(j=0;j<i+1;j++){
                cout<<"*";
            }
       cout<<endl;
    }

    //bottom
    for(i=0;i<n;i++){
        for(j=n-i;j>0;j--){
            cout<<"*";
        }
        if(i!=0){
            for(j=0;j<i*2;j++){
                cout<<" ";
            }
        }
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
}