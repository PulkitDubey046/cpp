#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the side : ";
    cin>>x;
    for(int i=0; i<x; i++){
        for(int j=1; j<=x; j++){
            cout<<j;
        }
        cout<<endl;
    }
}