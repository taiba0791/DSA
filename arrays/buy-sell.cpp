#include <iostream>
using namespace std;

void maxProfit(int *prices,int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i = 1; i < n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    //   cout<< bestBuy[i]<<" ";
    }
     int maxProfit=0;
     for(int i=0;i<n;i++){
             int currProfit = prices[i]-bestBuy[i];
            //  cout<< currProfit<<" ";
             maxProfit = max(maxProfit, currProfit);

        }
        cout<<"MaxProfit= "<< maxProfit;
        
    
}


int main() {
    int prices[]={7, 2, 5, 1, 8,4};
    int n=sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
  
    return 0;
}