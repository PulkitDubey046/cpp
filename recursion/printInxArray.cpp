// Print index of a given element in an array. If not present, print -1.

#include <iostream>
using namespace std;
int arrIdx(int arr[], int n){
    //base case
    if(n==-1) return -1; // element not found
    //recursive case
    if(arr[n]==5) return n; // element found at index n
    return arrIdx(arr, n-1); // check in the rest of the array
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int index = arrIdx(arr, n-1);
    if(index != -1)
        cout << "Element 5 found at index: " << index << endl;
    else
        cout << "Element 5 not found in the array." << endl;
    return 0;
}