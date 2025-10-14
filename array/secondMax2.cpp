#include <iostream>
#include <climits>
using namespace std;

int smax(int arr[], int n) {
    if (n < 2) return INT_MIN;  // Not enough elements

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? INT_MIN : second;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least two elements.";
        return 0;
    }

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = smax(arr, n);
    if (result == INT_MIN) {
        cout << "No second largest element (all elements might be equal).";
    } else {
        cout << "Second largest element: " << result;
    }

    return 0;
}
