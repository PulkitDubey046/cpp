#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, pos;
    cout << "Current array elements: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Enter position to delete element (0 to " << n-1 << "): ";
    cin >> pos;
    if(pos < 0 || pos >= n){
        cout << "Invalid position!" << endl;
        return 1;
    }
    for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Array after deletion: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}