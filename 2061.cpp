/**
 *    author:  rasel kibria
 *    created: 10.07.2020
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    string action;
    cin>>n>>m;
    while(m--)
    {
        cin>>action;
        if(action=="fechou")
        {
            n++;
        }
        else if(action=="clicou")
        {
            n--;
        }
    }
    cout<<n<<"\n";
    return 0;
}
