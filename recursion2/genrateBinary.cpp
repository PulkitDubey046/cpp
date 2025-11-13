#include<iostream>
#include<string>
using namespace std;

void generateBinaryStrings(int n, string str=""){
    // base case
    if(n==0){
        cout<<str<<endl;
        return;
    }
    // recursive case
    generateBinaryStrings(n-1, str+"0");
    generateBinaryStrings(n-1, str+"1");
}

int main(){
    int n;
    cin>>n;
    generateBinaryStrings(n);
    return 0;
}
