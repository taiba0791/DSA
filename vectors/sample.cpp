#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    
    cout<< vec.size()<<endl; // Output the size of the vector
    cout<< vec.capacity()<<endl; // Output the capacity of the vector
}