#include <iostream>
#include <vector>
using namespace std;

void combination(int idx, vector<int>& v, int arr[], int n, int target) {
    // Base case
    if (target == 0) {
        for (int x : v) cout << x << " ";
        cout << endl;
        return;
    }

    if (idx == n || target < 0) return;

    // Option 1: include arr[idx]
    v.push_back(arr[idx]);
    combination(idx, v, arr, n, target - arr[idx]);
    v.pop_back();

    // Option 2: skip arr[idx] and move forward
    combination(idx + 1, v, arr, n, target);
}

int main() {
    int arr[] = {2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v;
    combination(0, v, arr, n, 8);

    return 0;
}
