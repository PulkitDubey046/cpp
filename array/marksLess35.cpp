#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of student: ";
    cin>>n;
    int marks[n];
    cout<<"Enter the number of "<<n<<" Students: ";
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    cout<<"Marks of Students who have less marks than 35."<<endl;
    for(int i=0; i<n; i++){
        if(marks[i]<35)
            cout<<i<<" "<<marks[i]<<endl;
    }
}