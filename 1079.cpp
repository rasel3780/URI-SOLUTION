#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x, y, z, avg;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        avg = ((x*2)+(y*3)+(z*5))/10;

        cout<<fixed<<setprecision(1)<<avg<<"\n";
    }
    return 0;
}

