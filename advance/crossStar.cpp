#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n; j++){
            if(j==i || j==a)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
        a--;
    }
}