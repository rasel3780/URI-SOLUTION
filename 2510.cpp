#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(str.length()>0 && str.length()<26)
        {
            cout<<"Y\n";
        }
        else
        {
            cout<<"N\n";
        }
    }
    return 0;
}
