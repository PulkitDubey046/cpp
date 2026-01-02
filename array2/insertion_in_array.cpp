#include<iostream>
using namespace std;
int main(){
    int arr[50], n, pos, val;
    cout << "Enter number of elements in array: ";
    cin >> n;
    if(n > 50){
        cout << "Array size exceeds maximum limit of 50." << endl;
        return 1;
    }
    else{
        cout << "Enter " << n << " elements: ";
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << "Enter position to insert element (0 to " << n << "): ";
        cin >> pos;
        if(pos < 0 || pos > n){
            cout << "Invalid position!" << endl;
            return 1;
        }
        cout << "Enter value to insert: ";
        cin >> val;
        for(int i = n; i > pos; i--){
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;
        n++;
        cout << "Array after insertion: ";
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

}