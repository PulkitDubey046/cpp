#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, etc.

using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1};

    sort(v.begin(), v.end());          // v = {1, 2, 5, 9}
    reverse(v.begin(), v.end());       // v = {9, 5, 2, 1}

    auto it = find(v.begin(), v.end(), 5);
    if (it != v.end()) cout << "Found 5\n";

    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min: " << *min_element(v.begin(), v.end()) << endl;

    return 0;
}
