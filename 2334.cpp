/**
 *    author:  rasel kibria
 *    created: 11.07.2020
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long p;

    while(1)
    {
        cin>>p;
        if(p == -1)break;
        if(p == 1 || p == 0)cout<<"0\n";
        if(p>1)cout<<p-1<<"\n";
    }
    return 0;
}
