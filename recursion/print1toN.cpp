#include<iostream>
using namespace std;
int print(int i, int n){
    if(i>n) return 0; //base case
    cout<<i<<endl;  //task
    print(i+1,n);   //recursive call
}
int main(){
    int n;
    cin>>n;
    print(1,n);
    return 0;
}