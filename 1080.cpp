#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[110];
    int maxx = 0;
    int loc = 0;

    for(int i =0; i<100; i++)
    {
        cin>>a[i];
        if(a[i]>maxx)
        {
            maxx = a[i];
            loc = i+1;
        }
    }
    cout<<maxx<<"\n";
    cout<<loc<<"\n";
    return 0;
}

