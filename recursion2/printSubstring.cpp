#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubstrings(int arr[], int n, int idx, vector<int> ans, int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+ (n-idx) < k){
        return;
    }

    printSubstrings(arr, n, idx+1, ans, k);
    ans.push_back(arr[idx]);
    printSubstrings(arr, n, idx+1, ans, k);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    int k=3; //length of substring
    printSubstrings(arr, n, 0, ans, k);
    return 0;
}