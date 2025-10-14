#include <iostream>
using namespace std;
int main(){
    int n,temp, sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        temp=n%10;
        sum=sum+temp;
        n/=10;
    }
    cout<<sum;
}