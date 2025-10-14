#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three sides of triangle.";
    cin >> a >> b >> c;
    if ((a + b) > c)
    {
        if ((b + c > a))
        {
            if ((c + a) > b)
            {
                cout << "Given sides are the sides of triangle.";
            }
            else
            {
                cout << "The given side can't form any triangle.";
            }
        }
        else
        {
            cout << "The given side can't form any triangle.";
        }
    }
    else
    {
        cout << "The given side can't form any triangle.";
    }
}