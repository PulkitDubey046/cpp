#include<iostream>
#include <climits>
using namespace std;

int maxArr(int arr[], int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx], maxArr(arr,n,idx+1));
}

int main(){
    int arr[]={3,5,7,2,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=maxArr(arr,n,0);
    cout<<"Maximum element in the array is: "<<max<<endl;
    return 0;
}