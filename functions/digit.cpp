#include <iostream>
using namespace std;
int digitSum(int num){
    int sum=0;
    while (num>0){
        int lastDig=num%10;
        num=num/10;
        sum+=lastDig;
        
    }
    return sum;
}

int main(){
int num= 256;
cout<<digitSum(num)<<endl;
return 0;
}