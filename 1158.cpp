#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t,i;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>x>>y;
        if(x%2!=0)
        {
            for(i=0; i<y; i++)
            {
                sum=x+sum;
                x=x+2;
            }
        }
        else
        {
            x=x+1;
            for(i=0; i<y; i++)
            {
                sum=x+sum;
                x=x+2;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}

