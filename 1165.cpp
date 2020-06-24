#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int x;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>x;

        for(int i=2; i<x; i++)
        {
                if(x%i==0)
                {
                    sum++;
                    break;
                }
        }

        if(sum>=1)
        {
            cout<<x<<" nao eh primo\n";
        }
        else
        {
            cout<<x<<" eh primo\n";
        }
    }
    return 0;
}
