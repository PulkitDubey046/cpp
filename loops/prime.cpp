#include <iostream>
using namespace std;
int main(){
    int n;
    bool flag=true; //true means prime
    cout<<"Enter a number :";
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=false; //false means composite
            break;
        }
    }

    if(n==1) cout<<n<<" is neither prime nor composite.";
    else if (flag==true) cout<<n<<" is a prime number."; 
    else cout<<n<<" is a composite number.";
}