//predict the output

#include<iostream>
using namespace std;
int pip(int n){
    if(n==0) return 0; //base case
    cout<<"pre"<<n<<endl;
    pip(n-1);
    cout<<"in"<<n<<endl;
    pip(n-1);
    cout<<"post"<<n<<endl;
    return 0;
}
int main(){
    pip(2);
}

//output:
//pre2
//pre1
//pre0
//in1
//in0
//post1
//in2
//in1
//in0
//post1
//post2