#include <iostream>
#include <string>
// #include <algorithm>
using namespace std;

int main() {
    string s;
    cout<<"Enter any string: ";
    getline(cin, s);
    int len = s.length();
    cout << s.substr(len/2);
}
