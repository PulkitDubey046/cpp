// print the sum of first n natural numbers using recursion
#include<iostream>
using namespace std;
int sum1toN(int sum, int n){
    if(n==0) {
        cout<<sum;
        return 0; //base case
    }
    sum1toN(sum+n, n-1); //recursive call
}
int main(){
    int n;
    cin>>n;
    sum1toN(0, 10);
    return 0;
}
