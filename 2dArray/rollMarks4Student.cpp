#include<iostream>
using namespace std;
int main(){
    //roll number, marks
    //4 students
    
    int arr[2][4];

    cout<<"Enter the roll number and  marks: ";
    //input
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    //display
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}