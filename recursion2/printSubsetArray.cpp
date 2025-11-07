#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubsets(int arr[], int n, int idx, vector<int> vec) {
    //base case
    if(idx==n) {
        cout<<"{ ";
        for(int i=0;i<vec.size();i++) {
            cout<<vec[i]<<" ";
        }
        cout<<"}"<<endl;
        return;
    }
    
    printSubsets(arr, n, idx+1, vec);
    vec.push_back(arr[idx]);
    printSubsets(arr, n, idx+1, vec);
}
int main() {
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> vec;
    printSubsets(arr, n, 0, vec);
    return 0;
}