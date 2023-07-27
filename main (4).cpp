/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int k=0;
    int max=INT_MIN;
    for(int i=0;i<N;i++){
        if(max<a[i]){
            max=a[i];
            k=i;
        }
    }
  max=INT_MIN;
    int l;
    for(int i=0;i<N;i++){
        if(max<a[i] && !(i==k)){
            l=a[i];
            
        }
    }
    cout<<l;
    return 0;
}
