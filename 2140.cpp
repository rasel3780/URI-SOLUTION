/**
 *    author:  rasel kibria
 *    created: 10.07.2020
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, change;
    while(1)
    {
        cin>>m>>n;
        change = n-m;
        if(m==0 && n==0)
        {
            break;
        }
        else if(change == 7|| change == 12 || change == 15 || change == 22
                ||change == 25  ||  change == 30 || change == 52 || change == 55
                || change == 60 || change == 70  ||change == 102 || change == 105
                || change == 110 ||change == 120 || change == 150)
        {
            cout<<"possible\n";
        }
        else
        {
            cout<<"impossible\n";
        }
    }
    return 0;
}
