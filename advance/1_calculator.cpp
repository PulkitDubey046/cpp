#include <iostream>
using namespace std;
int main(){
    int x, y;
    char ch;
    int out;
    cout<<"Enter any expression : ";
    cin>>x>>ch>>y;
    switch (ch)
    {   
    case '+':
        out= x+y;
        cout<<out;
        break;
        case '-':
        out= x-y;
        cout<<out;
        break;
        case '*':
        out= x*y;
        cout<<out;
        break;
        case '/':
        out= x/y;
        cout<<out;
        break;
    default:
    cout<<"invalid expression";
        break;
    }
}