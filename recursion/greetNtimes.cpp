#include<iostream>
using namespace std;
void greet(int a){  
    if(a<=0)
        return;
    cout<<" Jai Shree Ram"<<endl;
    greet(a-1);
}
int main(){
    int n;
    cout<<"Enter the number of greating you want :";
    cin>>n;
    greet(n);
    return 0;
}