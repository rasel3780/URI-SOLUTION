#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i;
    int j=1;

    cin>>x>>y;

    for(i=1; i<=y; i++)
    {

        if(j==x)
        {
            cout<<i<<"\n";
            j=1;
        }
        else
        {
            cout<<i<<" ";
            j++;
        }

    }
    return 0;
}

