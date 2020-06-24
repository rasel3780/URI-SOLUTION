#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,i;
    int a[10];
    cin>>v;
    for(i=0; i<10; i++)
    {
        a[i]=v;
        v=v*2;
    }
    for(i=0; i<10;i++)
    {
        cout<<"N["<<i<<"] = "<<a[i]<<"\n";
    }
    return 0;
}

