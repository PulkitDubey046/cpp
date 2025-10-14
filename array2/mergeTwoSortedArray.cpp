#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& v1,vector<int>& v2){
    int m=v1.size();
    int n=v2.size();
    vector<int> v3(m+n);
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            v3[k]=v1[i];
            i++;
        }
        else{
            v3[k]=v2[j];
            j++;
        }
        k++;
    }
    while (i < m) {
        v3[k++] = v1[i++];
    }

    while (j < n) {
        v3[k++] = v2[j++];
    }
    return v3;
}
void display(vector<int> &a){
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    display(arr1);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    display(arr2);

    vector<int> arr3=merge(arr1,arr2);
    display(arr3);
}