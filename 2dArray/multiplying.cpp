#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows of 1st matrix";
    cin>>m;
    int n;
    cout<<"Enter the cols of 1st matrix";
    cin>>n;

    int p;
    cout<<"Enter the rows of 2nd matrix";
    cin>>p;
    int q;
    cout<<"Enter the cols of 2nd matrix";
    cin>>q;
    
    if(n==p){
        int a[m][n];
        cout<<"Enter elements of 1st matrix: ";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }

        int b[p][q];
        cout<<"Enter elements of 1st matrix: ";
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }

        //multiplying

        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                int sum=0;
                for(int k=0; k<p; k++){
                    sum += a[i][k] * b[k][j];
                }
                res[i][j]=sum;
            }
        }

        //print
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<< res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The matrices cannot be multiplied.";
    }
}