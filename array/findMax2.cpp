#include <iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"Maximum number: "<<max;
}