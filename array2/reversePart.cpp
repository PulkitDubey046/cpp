#include <iostream>
#include <vector>
using namespace std;
//display function
void display(vector<int>& a){
    for(int i=0; i< a.size(); i++){
        cout<<a[i]<<" ";
    }
}

void reversePart(int i, int j, vector<int> & v){
    while(i<=j){
        int temp= v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(7);
    v.push_back(32);
    v.push_back(12);
    v.push_back(34);
    v.push_back(1);

    display(v);
    reversePart(0,4,v);
    display(v);
}