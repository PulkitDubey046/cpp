// Count how many times a given element appears in an array
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

    int x;
    cout<<"Enter the number which you want to search:";
    cin>>x;

    int count=0;
    for (int i = 0; i < n; i++) {
        if(arr[i]==x) count++;
    }

    if(count==0) cout<<"not found";
    else cout<<"Found "<<count<<" Times.";
    return 0;
}

