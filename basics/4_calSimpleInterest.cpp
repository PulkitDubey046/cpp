#include <iostream>
using namespace std;
int main(){
    float p, r, t, si;
    cout<<"Enter principle:"<<endl;
    cin>>p;
    cout<<"Enter rate:"<<endl;
    cin>>r;
    cout<<"Enter time:"<<endl;
    cin>>t;
    si= (p*r*t)/100;
    cout<< si;
}