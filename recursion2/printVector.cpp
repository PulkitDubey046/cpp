#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> a, int idx){
    if(idx == a.size()) return;
    cout<<a[idx]<<" ";
    display(a, idx + 1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> a;
    for(int i=0; i<n; i++){
        a.push_back(arr[i]);
    }
    display(a, 0);
}