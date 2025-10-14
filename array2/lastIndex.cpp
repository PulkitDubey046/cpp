#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector<int> v;
 v.push_back(9);
 v.push_back(38);
 v.push_back(29);
 v.push_back(91);
 v.push_back(19);
 v.push_back(939);
 v.push_back(90);
 v.push_back(2);

 int x=19;
 int idx=-1;
 for(int i=v.size()-1; i>=0; i--){
    if(v[i]==x){
        idx = i;
        break;
    }
 }
 cout<<idx;
}