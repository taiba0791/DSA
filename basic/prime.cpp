#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number: "<< endl;
    cin>> n;
    bool isPrime = true;
    for(i=2; i*i<=n; i++) {
        if (n%i==0 ){
            isPrime = false;
            break;
        }

    }

     if (isPrime == true) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        };
}
