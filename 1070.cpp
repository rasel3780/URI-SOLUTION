#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

    if(x%2==0)
    {
        x = x+1;
        cout<<x<<"\n";

        for(int i = 0; i<5; i++)
        {
            x = x+2;
            cout<<x<<"\n";
        }
    }
    else
    {
        for(int i =0; i<6; i++)
        {
            cout<<x<<"\n";
             x = x+2;
        }
    }
    return 0;
}

