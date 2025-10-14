#include <iostream>
using namespace std;
int product(int arr[], int n){
    int a=1;
    for(int i=0; i<n; i++){
        a*=arr[i];
    }
    return a;
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a=product(arr,n);
    cout<<"product: "<<a;
}