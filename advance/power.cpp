#include <iostream>
using namespace std;
int main(){
    int a,b, power=1;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter exponent: ";
    cin>>b;
    bool flag=true;
    if(b<0){
        flag=false;
        b=-b;
    }
    for(int i=1; i<=b; i++){
        power*=a;
    }
    if(flag==false){
    b=-b;
    cout<<a<<" raised to the power "<<b<<" is 1/"<<power;
    }else
    cout<<a<<" raised to the power "<<b<<" is "<<power;
}