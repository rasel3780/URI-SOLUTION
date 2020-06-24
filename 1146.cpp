#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i;
    while(1)
    {
        cin>>x;
        if(x==0)
        {
            break;
        }
        else
        {
            for(i=1; i<x; i++)
            {
                cout<<i<<" ";
            }
            cout<<i<<"\n";
        }
    }
    return 0;
}

