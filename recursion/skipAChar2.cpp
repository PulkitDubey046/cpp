#include<iostream>
#include<string>
using namespace std;

void removeChar(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    if(ch=='a'){
        //skip
        removeChar(ans, original, idx+1);
    }
    else{
        //include
        removeChar(ans+ch, original, idx+1);
    }
}
int main(){
    string str;
    getline(cin, str);
    removeChar("", str, 0);
}