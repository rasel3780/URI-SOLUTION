#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, day;
    float x;
    cin>>n;

    while(n--)
    {
        cin>>x;
        day = 0;
        while(x>1)
        {
            x = x/2.0;
            day++;
        }
        cout<<day<<" dias\n";
    }
    return 0;
}
