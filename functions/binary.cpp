#include <iostream>
using namespace std;

int DecitoBinary(int deciNum){
    int ans=0;
    int power=1;
    while(deciNum>0){
    int rem= deciNum%2;
    deciNum /=2;
    ans= ans+rem*power;
    power *= 10;
    }
    return ans;

}
int main(){
   int deciNUm=10; 
   cout << "Decimal to Binary of " << deciNUm << " is: " << DecitoBinary(deciNUm) << endl;
   return 0;
}