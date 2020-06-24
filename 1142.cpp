#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    int l = 1;
    cin>>t;
    for(i=0; i<t; i++)
    {
        j = l;
        for(j=l; j<=(l+2); j++)
        {
            cout<<j<<" ";
        }
        l = j+1;
        cout<<"PUM\n";
    }
    return 0;
}

