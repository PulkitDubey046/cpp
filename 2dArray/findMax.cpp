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


    //max
    int a=INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>a) a=arr[i][j];
        }
    }

    cout<<"Max: "<<a;
}