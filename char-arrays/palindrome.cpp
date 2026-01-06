#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char word[], int n){
      int st=0; int end=n-1;

      while(st<end){
        if(word[st++] != word[end--]){
            cout << "Not a palindrome" << endl;
            return false;
        }
        
      }
      cout << "Is a palindrome" << endl;
        return true;
       
    }

int main(){
    char word[] = "racecar";
    palindrome(word, strlen(word));
  
    return 0;
}
