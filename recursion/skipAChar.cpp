#include<iostream>
using namespace std;
void removeChar (string ans, string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(ch=='a'){
        //skip
        removeChar(ans, original.substr(1));
    }
    else{
        //include
        removeChar(ans+ch, original.substr(1));
    }
}

int main(){
    string str;
    cin>>str;
    removeChar("", str);
}