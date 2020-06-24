#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t, x, y;
    cin>>t;

    while(t--)
    {
        int sum = 0;
        cin>>x>>y;
        if((x-y)==1 ||(y-x)==1 || x==y )
        {
            cout<<"0\n";
        }
        else if(x>y)
        {
            for(int i = y+1; i<x; i++)
            {
                if(i%2!=0)
                {
                    sum = sum+i;
                }
            }
            cout<<sum<<"\n";
        }
        else if(x<y)
        {
            for(int i = x+1; i<y; i++)
            {
                if(i%2!=0)
                {
                    sum = sum+i;
                }
            }
            cout<<sum<<"\n";
        }
    }
    return 0;
}

