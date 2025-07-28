#include <iostream>
using namespace std;
bool prime(int n){
  if(n<2) return 0; 
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;

  }
  return true;
}
int main(){
    int n,i;
    cout<<"Enter a number: "<< endl;
    cin>> n;
    cout<< "prime no. from 2 to "<< n << " are: ";
    for(i=2;i<=n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }

 return 0;
}