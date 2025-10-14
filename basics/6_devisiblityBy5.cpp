#include <iostream>
using namespace std;
main(){
    int x;
    cout<<"Enter a number to check divisiblity by 5: ";
    cin>>x;
    if(x%5==0){
        cout<<"divisible by 5";
    }
    else{
        cout<<"Not Divisible by 5";
    }
}
