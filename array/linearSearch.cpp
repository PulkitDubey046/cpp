#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n],a;
    cout<<"Enter Elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to search: ";
    cin>>a;
    //linear search
    bool flag=false; // false -> not match
    for(int i=0; i<n; i++){
        if(arr[i]==a) {
            flag=true; //true -> match
            break;
        }
    }
    if(flag=true) cout<<"Found";
    else cout<<"Not Found";
}