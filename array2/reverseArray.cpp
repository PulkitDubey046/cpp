#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& a){
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements: ";
    while (n--){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cout << "Original array: ";
    display(v);

    // Correct reverse
    int i = 0;
    int j = v.size() - 1;
    while(i < j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--; 
    }

    cout << "Reversed array: ";
    display(v);

    return 0;
}
