#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row of matrix: ";
    cin>>m;
    int n;
    cout<<"Enter cols of matrix: ";
    cin>>n;
    
    int a[m][n];
    cout<<"Enter "<<m*n<< " elements of matrix ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Normal: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //wave print
    cout<<"Wavy: \n";
    for(int i=m-1; i>=0; i++){
        if ((m - 1 - i) % 2 == 0) {
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }

}