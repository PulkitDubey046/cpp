#include<iostream>
using namespace std;
int main(){
    int x=10;
    int* ptr=&x; //ptr stores the address of x
    cout<<"Value of x: "<< x <<endl;  //10
    cout<<"Address of x: "<< &x <<endl; // memory address of x
    cout<<"Value of ptr: "<< ptr <<endl; //memory address of x
    cout<<"Value at *ptr: "<< *ptr <<endl; //10
    *ptr=20; //changing value of x through pointer
    cout<<"New value of x:"<< x <<endl; //20
    return 0;
}