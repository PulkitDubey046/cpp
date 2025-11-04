// C++ program to solve Tower of Hanoi problem using recursion
// https://www.mathsisfun.com/games/towerofhanoi.html

#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c){
    if(n==0) return;
    hanoi(n-1, a, c, b); // move n-1 disks from a to b using c as auxiliary
    cout<<"Move disk "<<n<<" from rod "<<a<<" to rod "<<c<<endl;
    hanoi(n-1, b, a, c); // move n-1 disks from b to c using a as auxiliary 
}
int main() {
    int n; // number of disks
    cout << "Enter number of disks: ";
    cin >> n;
    hanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    return 0;
}