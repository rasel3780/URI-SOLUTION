#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long t, year;

    cin>>n;
    while(n--)
    {
        cin>>t;
        year = t-2015;
        if(t==2015)
        {
            cout<<"1 A.C.\n";
        }
        else if(year<0)
        {
            cout<<abs(year)<<" D.C.\n";
        }
        else if(year>0)
        {
            cout<<year+1<<" A.C.\n";
        }
    }
    return 0;
}
