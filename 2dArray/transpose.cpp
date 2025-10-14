#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter row number: ";
    cin >> a;
    cout << "Enter column number: ";
    cin >> b;

    int arr1[a][b]; 
    int arr2[b][a];

    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose of matrix
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            arr2[i][j] = arr1[j][i];
        }
    }

    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
