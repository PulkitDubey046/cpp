// Find the maximum difference between any two elements in the array
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

    int max=0;
    for (int i = 0; i < n; i++) {
        if(max<arr[i]) max=arr[i];
    }

    int min=99999;
    for (int i = 0; i < n; i++) {
        if(min>arr[i]) min=arr[i];
    }

    cout << "Maximum difference: " << (max - min) << endl;
    return 0;
}

