#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, i, j, found;

    while(cin>>n>>l)
    {
        found = 0;
        while(n--)
        {
            cin>>i>>j;
            if(i==l && j==0)
            {
                found++;
            }
        }
        cout<<found<<"\n";
    }
    return 0;
}
