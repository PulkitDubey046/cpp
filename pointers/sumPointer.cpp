#include<iostream>
using namespace std;
int main(){
    // int a=10, b=20;
    // int *p1=&a,*p2=&b;
    // cout<<*p1+*p2;

    int x,y;
    int *p1=&x, *p2=&y;
    cout<<"Enter 1st Number: ";
    cin>>*p1;
    cout<<"Enter 2nd Number: ";
    cin>>*p2;
    cout<<*p1+*p2;
    
}