//Q3. Find the minimum value out of all elements in the array.
#include <iostream>
#include <climits>
using namespace std;
int findMin(int arr[], int n){
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min) min=arr[i];
    }
    return min;
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
    int a=findMin(arr,n);
    cout<<"Minimum: "<<a;
}