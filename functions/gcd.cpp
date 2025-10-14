#include <iostream>
using namespace std;
int gcd(int x, int y){
    int hcf=1;
    for(int i=min(x,y); i>=1; i--){
        if(x%i==0 && y%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<gcd(a,b);
}