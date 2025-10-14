#include <iostream>
using namespace std;
int main(){
    int n, factorial=1;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>1){
        factorial*=n;
        n--;
    }
    cout<<factorial;
}