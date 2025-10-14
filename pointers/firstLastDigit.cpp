#include <iostream>
using namespace std;
void find (int n, int* ptr1, int* ptr2){
    *ptr2=n%10;
    while (n>9)
    {
        n=n/10;
    }
    *ptr1=n;
    return;
}
int main(){
    int n, firstDigit, lastDigit;
    cout<<"Enter a Number: ";
    cin>>n;
    int *ptr1=&firstDigit, *ptr2=&lastDigit;
    find(n, ptr1, ptr2);
    cout<<"First digit: "<<firstDigit<< endl << "Last digit: "<<lastDigit;
}