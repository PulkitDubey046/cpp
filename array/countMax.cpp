// Count the number of elements in given array greater than a given number x.
#include <iostream>
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
    int x; 
    cout<<"Enter the number for which we have to search in array: ";//given number
    cin>>x;
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>x) count++;
    }
    cout<<"Total: "<<count;
}