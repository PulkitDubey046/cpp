#include<iostream>
using namespace std;

int maxArr(int arr[], int n,int idx, int max){
    if(idx==n){
        return max;
    }
    if(arr[idx]>max){
        max=arr[idx];
    }
    return maxArr(arr,n,idx+1,max);
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int result=maxArr(arr,n,0,max);
    cout<<"Maximum element in the array is: "<<result<<endl;
    return 0;
}