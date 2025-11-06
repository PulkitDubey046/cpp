// Given a positive integer, return true if it is a power of 2.

#include <iostream>
using namespace std;
int powerOfTwo(int n){
    //base case
    if(n==1) return 1; // 2^0 = 1
    if(n<1) return 0; // numbers less than 1 are not powers of 2
    //recursive case
    if(n%2!=0) return 0; // if n is odd and greater than 1, it cannot be a power of 2
    return powerOfTwo(n/2); // divide n by 2 and check again
}
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if(powerOfTwo(n))
        cout << n << " is a power of 2." << endl;
    else
        cout << n << " is not a power of 2." << endl;
    return 0;
}