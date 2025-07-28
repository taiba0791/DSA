#include <iostream>
using namespace std;

int BintoDecimal(int BinNum){
    int ans=0;
    int power=1;
    while(BinNum>0){
    int rem = BinNum%10;
    ans+= rem*power;
    BinNum /= 10;
    power *= 2;
    }
    return ans;

}
int main(){
   int BinNum=110010; 
   cout << "Binary to Decimal  of " << BinNum << " is: " << BintoDecimal(BinNum) << endl;
   return 0;
}