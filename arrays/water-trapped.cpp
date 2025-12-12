#include <iostream>
using namespace std;

void trap(int *heights,int n){
   int maxLeft[20000];
   int maxRight[20000];
    int currTrapped;
    int totalwater=0;
   maxRight[n-1]=heights[n-1];
   maxLeft[0]= heights[0];
   for(int i=1;i<n;i++){
    maxLeft[i]=max(maxLeft[i-1],heights[i-1]);
    cout<< "maxLeft: "<<maxLeft[i]<<" ";
    
   }
    cout<<endl;
    for(int i=n-2;i>=0;i--){
        maxRight[i] = max(maxRight[i+1],heights[i+1]);
        cout<< "maxRight: "<<maxRight[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
     currTrapped= min(maxLeft[i],maxRight[i])-heights[i];
        if(currTrapped>0){
            totalwater += currTrapped;
        } 
    }
    cout<< "totalwater: "<<totalwater<<" ";
}


int main() {
    int heights[]={4, 2, 0, 6, 3, 2, 5};
    int n=sizeof(heights)/sizeof(int);
     trap(heights,n);
  
    return 0;
}