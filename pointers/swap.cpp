#include<iostream>
using namespace std;
int swap(int* a,int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
    return (*a,*b);
}
int main(){
    int x=10, y=50;
    cout<<x<<" "<<y<<endl;
    swap(&x, &y);
    cout<<x<<" "<<y;
}