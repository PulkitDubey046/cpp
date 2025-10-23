#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s; // name -> aemn
}

// but if you use combination of the capital and small letter it will show you sorting in diffrent 
// style as assci value of the capital letters are small as compared to the small letters.