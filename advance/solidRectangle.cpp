#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter number of rows: ";
    cin>>x;
    cout<<"Enter number of columns";
    cin>>y;
    for(int i=0;i<x;i++){
        for (int i = 0; i < y; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}