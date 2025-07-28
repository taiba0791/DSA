#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout<< "Enter a number: " << endl;
    cin >> n;
    int factorial = 1;
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}