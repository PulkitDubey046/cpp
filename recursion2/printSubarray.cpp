#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){         // start of subarray
        for(int j=i; j<n; j++){    // end of subarray   
            for(int k=i; k<=j; k++){    // printing subarray
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}