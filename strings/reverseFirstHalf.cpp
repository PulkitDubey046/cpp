#include <iostream>
#include <string>
#include <algorithm>  // <-- needed for reverse()
using namespace std;

int main() {
    string s;
    cout<<"Enter any string:";
    getline(cin, s);
    int len = s.length();
    reverse(s.begin(), s.begin() + len/2);
    cout << s;
}
