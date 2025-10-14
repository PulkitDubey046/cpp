#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void swap(vector<int> &a)
{
    int i = 0;
    int j = a.size() - 1;
    while (i < j)
    {
        if (a[i] < 0)
            i++;
        else if (a[j] > 0)
            j--;
        else
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(-4);
    v.push_back(8);
    v.push_back(-11);
    v.push_back(40);
    v.push_back(15);
    v.push_back(-1);
    v.push_back(7);

    display(v);
    swap(v);
    display(v);
}