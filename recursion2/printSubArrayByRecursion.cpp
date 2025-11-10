#include <iostream>
#include <vector>
using namespace std;

void printSubArray(vector<int> v, int arr[], int n, int idx){
    // base case
    if(idx==n){
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    printSubArray(v, arr, n, idx + 1);
    if(v.size() == 0 || arr[idx-1] == v[v.size()-1] ){ // to avoid duplicates
        v.push_back(arr[idx]);
        printSubArray(v, arr, n, idx + 1);
    }   
}

int main(){
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    printSubArray(v,arr, n, 0);
}