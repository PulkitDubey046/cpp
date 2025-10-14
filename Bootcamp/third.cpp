// Check if an array is sorted in ascending order or not
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int flag=0;
    for (int i = 0; i < n; i++) {
        if(arr[i] > arr[i+1]){
             flag=1;
             break;
        }
    }

    if(flag==0) cout<<"Array is sorted in ascending. ";
    else cout<<"Array is not sorted in ascending.";
    return 0;
}

