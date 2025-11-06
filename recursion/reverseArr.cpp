// Print all the elements of an array in reverse order.

#include <iostream>
using namespace std;
void reverseArr(int arr[], int n){
    if(n==0) return; // base case: if size is 0, return
    cout << arr[n-1] << " "; // print the last element
    reverseArr(arr, n-1); // recursive call with size reduced by 1
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
    cout << "Array elements in reverse order: ";
    reverseArr(arr, n);
    return 0;
}