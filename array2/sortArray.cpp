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
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(7);
    v.push_back(91);
    v.push_back(2);


    //1st method when we use #include<algorithm> as header

    display(v);
    sort(v.begin(),v.end());
    display(v);
}