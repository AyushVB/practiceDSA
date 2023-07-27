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
    cin>>N;
    float avg;
    for(int i=0;i<N;i++){
        int k;
        cin>>k;
        avg+=k;
    }
    avg/=N;
    cout<<avg;
    return 0;
}
