#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[20];
    int i;

    for(i=0; i<20; i++)
    {
        cin>>n[i];
    }
    reverse(n, n+20);

    for(i=0; i<20; i++)
    {
        cout<<"N["<<i<<"] = "<<n[i]<<"\n";
    }
    return 0;
}
