#include <iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"Enter Cost Price:";
    cin>>cp;
    cout<<"Enter Selling Price:";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit of "<<(sp-cp)<<" Rs.";
    }
    else if(cp>sp){
        cout<<"Loss of "<<(cp-sp)<<" Rs.";
    }
    else{
        cout<<"No loss, No profit ..!";
    }
}