//Either one step or two steps can be taken to reach the top of the stairs
//Find the total number of ways to reach the top of the stairs

#include <iostream>
using namespace std;
int stairPath(int n){
    //base case
    if(n==2) return 2;
    if(n==1) return 1;
    //recursive case
    return stairPath(n-1)+stairPath(n-2);
}

int main(){
    cout<<stairPath(5);
}