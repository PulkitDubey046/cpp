#include<iostream>
using namespace std;
int printZigZag(int n){
    //base case
    if(n==0) return 0;
    cout<<n<<" "; //pre
    printZigZag(n-1);
    cout<<n<<" "; //in
    printZigZag(n-1);
    cout<<n<<" "; //post
    return 0;
}
int main(){
    printZigZag(4);
}