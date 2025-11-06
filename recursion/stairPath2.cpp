// Calculate the number of ways in which a person can climb n stairs 
// if he can take exactly 1, 2 or 3 steps at each level.

#include <iostream>
using namespace std;
int stairPath(int n){
    //base case
    if (n == 0) return 1;
    if (n < 0) return 0;
    //recursive case
    return stairPath(n-1) + stairPath(n-2) + stairPath(n-3);
}

int main(){
    cout << stairPath(4);
}