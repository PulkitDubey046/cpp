#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={6,2,5,0,1,3,4,9,8};
    int *p;
    cout<<"2D Array elements are: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<arr<<endl; //prints address of first row
    cout<<&arr[0][0]<<endl; //prints address of first element
    cout<<arr[0]<<endl; //prints address of first row
    cout<<*arr<<endl; //prints address of first element
    cout<<arr[1]<<endl; //prints address of second row
    cout<<*arr+1<<endl; //prints address of second element
    cout<<arr[2]<<endl; //prints address of third row
    cout<<*(*(arr+1)+2)<<endl; //prints element at 2nd row and 3rd column
    cout<<*(*arr+1)<<endl; //prints element at 1st row and 2nd column

    p=&arr[0][0];
    cout<<**arr<<endl; //prints element at 1st row and 1st column
    cout<<*p<<endl; //prints element at 1st row and 1st column
}