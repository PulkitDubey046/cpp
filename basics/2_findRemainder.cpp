#include <iostream>
using namespace std;
int main()
{
    int a = 14;
    int b = 3;
    int q = a / b;
    cout << "Quotient : " << q << endl;
    
    // using mathematical formula
    int rem = a - (b * q);
    cout << "Remainder : " << rem << endl;
    
    // using modulus operator
    rem = a % b;
    cout << "Remainder : " << rem << endl;
}