#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort0(vector<int>& a){
    int count0=0;
    int count1=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]==0) count0+=1; 
        if(a[i]==1) count1+=1; 
    }
    for(int i=0; i<a.size(); i++){
        if(i<count0) a[i]=0; 
        else a[i]=1; 
    }
}

void method2(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(v[i]==1 && v[j]==0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    display(v);
    // sort0(v);
    method2(v);
    display(v);
}