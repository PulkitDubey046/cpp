// Given an array, predict if the array contains duplicates or not.
#include <iostream>
using namespace std;
bool findDuplicate(int arr[], int n){
    bool flag=false;
    for(int i=0; i<n; i++){
        int a=arr[i];
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(arr[i]==arr[j]) return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag=findDuplicate(arr,n);
    if(flag==true) cout<<"Duplicate found";
    else cout<<"Not Found";
}