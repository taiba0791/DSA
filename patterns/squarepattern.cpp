#include <iostream>
using namespace std;
int main (){
    int i,j,n=4;
     int num=1;
     for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++){   // for printing stars
            cout<<num<< " ";
            num++;
        }
        // char ch = 'A';  // for Characters
        // for (j=0;j<n;j++){
        //     cout<<ch<<" ";
        //     ch = ch+1;
        // }
        cout << endl;
     }
     cout<<"after the pattern the num is:"<< num <<endl;
     return 0;
}