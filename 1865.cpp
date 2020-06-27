#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int c, force;
    cin>>c;
    while(c--)
    {
        cin>>name>>force;
        if(name=="Thor")
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
