#include<iostream>
using namespace std;
int fiboLoop(int n){
    int a=1, b=1, sum=0;
    for(int i=1; i<n-1; i++){
        sum= a + b;
        a = b;
        b= sum;
    }
    return b;
}

//recursion
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}


int main(){
    // 1 1 2 3 5 8 13 21 34 55 89

    cout<< fibo(8)<<endl;
    cout<< fiboLoop(8);
}