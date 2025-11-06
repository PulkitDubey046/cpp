//Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.

#include <iostream>
using namespace std;

int sumOdd(int a, int b){
    if(a > b) return 0; // base case: if a exceeds b, return 0
    if(a % 2 != 0) // if a is odd
        return a + sumOdd(a + 1, b); // include a and move to next number
    else
        return sumOdd(a + 1, b); // skip a and move to next number
}

int main() {
    int a, b;
    cout << "Enter the range (a and b): ";
    cin >> a >> b;
    int result = sumOdd(a, b);
    cout << "Sum of odd numbers between " << a << " and " << b << " is: " << result << endl;
    return 0;
}