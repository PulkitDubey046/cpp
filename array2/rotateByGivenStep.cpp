// Rotate the given array "v" by k steps.

#include <iostream>
#include <vector>
using namespace std;
// display function
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}

void reversePart(int i, int j, vector<int> &v)
{
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(7);
    v.push_back(32);
    v.push_back(12);
    v.push_back(34);
    v.push_back(1);

    display(v);
    cout << "Enter the no of rotations: ";
    int k;
    cin >> k;
    int n=v.size();
    if(k>n) k=k%n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}