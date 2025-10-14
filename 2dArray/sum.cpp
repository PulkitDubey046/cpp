#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    //intialization
    int arr[m][n];

    cout<<"Enter the "<<m*n<<" elements: ";
    //input
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //display
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }


    //sum
    int a=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
             a+=arr[i][j];
        }
    }

    cout<<"Sum: "<<a;
}