#include<iostream>
using namespace std;
int pow(int a, int b) {
    if( a == 0 && b == 0){
        return -1; // Indeterminate form      

    }  
    else if (b == 0)
        return 1;
    return a * pow(a, b - 1);
}
int main() {
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;
    cout << a << " raised to the power " << b << " is " << pow(a, b) << endl;
    return 0;
}