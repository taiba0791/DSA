#include <iostream>
using namespace std;

//sum of multiples of 3

int main() {
   int i,n, sum=0;
   cout << "Enter a number: " << endl;
   cin >> n;
   for(i=1;i<=n;i++){
     if(i%3==0) {
      sum = sum+i;
     }
   }
    cout << "Sum of multiples of 3 up to " << n << " is: " << sum << endl;
   }

