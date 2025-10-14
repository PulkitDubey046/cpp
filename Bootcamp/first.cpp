// Find the sum of even numbers in an array
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

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) sum += arr[i];
    }

    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}

