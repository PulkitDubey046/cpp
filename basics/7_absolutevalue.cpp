#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a integer value : ";
    cin>>x;
    if(x<0){
        x*=-1;
    }
    cout<<"Absolute value of given integer is: "<<x;
}