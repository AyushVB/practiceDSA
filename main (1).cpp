/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int N;
    int k;
    cout<<"Enter the no of elements in array :-";
    cin>>N;
    cout<<"Enter the k :-";
    cin>>k;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    k=k%N;
    for(int i=0;i<k;i++){
        int temp=a[N-1];
        for(int i=N-2;i>=0;i--){
            a[i+1]=a[i];
        }
        a[0]=temp;
    }
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
