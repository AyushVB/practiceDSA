/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    map<char,int> m;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(m.find(s[i]) !=m.end()){
             m[s[i]]++;
        }
        else{
            m[s[i]]=1;
        }
       
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }

    return 0;
}
