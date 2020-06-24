#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int x,y;
    int sum = 0;

    cin>>x>>y;
    if(x>y)
    {

        for(int i=(y+1); i<x; i++)
        {
            if(i%2 != 0)
            {
                sum = sum+i;
            }
        }
    }
    else if(x<y)
    {
        for(int i=(x+1); i<y; i++)
        {
            if(i%2 != 0)
            {
                sum = sum+i;
            }
        }
    }
    cout<<sum<<"\n";
    return 0;

}

