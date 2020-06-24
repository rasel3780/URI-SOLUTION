#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(y==0)
        {
            cout<<"divisao impossivel\n";
        }
        else
        {
            cout<<fixed<<setprecision(1)<<(x/y)<<"\n";
        }
    }
    return 0;
}

