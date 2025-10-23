// Input a string and return the number of times the neighbouring characters are different from each other.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count1 = 0;
    int n = s.length();

    if (n == 1) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (s[i] != s[i + 1]) count1++;
        } else if (i == n - 1) {
            if (s[i] != s[i - 1]) count1++;
        } else {
            if (s[i] != s[i + 1] && s[i] != s[i - 1]) count1++;
        }
    }
    cout << count1;
}
