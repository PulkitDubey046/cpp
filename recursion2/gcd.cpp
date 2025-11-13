// Observation: 
//        1. hcf(a,b) < min(a,b)
//        2. lcm(a,b) > max(a,b)


#include<iostream>
using namespace std;

int gcd(int a, int b){
    // base case
    if(b==0) return a;
    // recursive case
    return gcd(b, a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    return 0;
}
