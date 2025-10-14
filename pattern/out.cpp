#include <iostream>
using namespace std;
int main()
{
    int row_size = 5;
    int out, in1, in2;
    int np = 1;
    cin >> row_size;
    
    for(out = 0; out < row_size; out++)
    {
        for(in1 = row_size - 1; in1 > out; in1--)
        {
            cout << " ";
        }

        for(in2 = 0; in2 < np; in2++)
        {
            cout << np - out;
        }

        np += 2;
        cout << "\n";
    }
}
