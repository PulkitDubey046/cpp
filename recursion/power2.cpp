#include<iostream>
using namespace std;
int pow(int x, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    int ans = pow(x, n / 2);
    return ans * ans * (n % 2 == 0 ? 1 : x);
}
int main() {
    int x, n;
    cout << "Enter base and exponent: ";
    cin >> x >> n;
    cout << x << " raised to the power " << n << " is " << pow(x, n) << endl;
    return 0;
}