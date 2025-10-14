#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter marks:";
    cin>>m;
    if(m>=91 && m<=100){
        cout<<"Excellent";
    }
    else if(m>=81 && m<=90){
        cout<<"Very Good";
    }
    else if(m>=71 && m<=80){
        cout<<"Good";
    }
    else if(m>=61 && m<=70){
        cout<<"Can do better";
    }
    else if(m>=51 && m<=60){
        cout<<"Average";
    }
    else if(m>=41 && m<=50){
        cout<<"Bellow Average";
    }   
    else{
        cout<<"Fail";
    }
    
}