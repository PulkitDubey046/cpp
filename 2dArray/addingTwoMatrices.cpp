#include <iostream>
using namespace std;
int main(){
  int a;
  cout<< "Enter row number: ";
  cin>>a;
  int b;
  cout<< "Enter column number: ";
  cin>>b;
  int arr1[a][b];
  // input for first matix
  cout<<"Enter elements of first matrix: ";
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      cin>>arr1[i][j];
    }
  }
  // input for second matrix
  int c,d;
  cout<< "Enter row number: ";
  cin>>c;
  cout<< "Enter column number: ";
  cin>>d;
  int arr2[c][d];

  cout<<"Enter elements of second matrix: ";
  //input for second matrix
  for(int i=0; i<c; i++){
    for(int j=0; j<d; j++){
      cin>>arr2[i][j];
    }
  }

  //adding two matrix
  int arr3[a][b];
  if(a!=c && b!=d){
    cout<<"Adding not possible";
    return 0;
    }
  else{
    for(int i=0; i<a; i++){
      for(int j=0; j<b; j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
      }
    }
  }

  //printing the matrix
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
  }
}