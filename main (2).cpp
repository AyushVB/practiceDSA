#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<(s.size()/2);i++){
        if(s[i]!=s[s.size()-1-i]){
            cout<<"not palindrome";
            return 0;
        }
    }
    cout<<"palindrome";
    return 0;
}