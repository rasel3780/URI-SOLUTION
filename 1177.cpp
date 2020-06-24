#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    cin>>t;
    j=0;
    while(j<1000)
    {
        for(i=0; i<t; i++)
        {
            cout<<"N["<<j<<"] = "<<i<<"\n";
            j++;
            if(j>999)
            {
                break;
            }
        }
    }
    return 0;
}

