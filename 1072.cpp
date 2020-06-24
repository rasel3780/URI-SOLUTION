#include<bits/stdc++.h>
using namespace std;

int main()
{
    int in = 0;
    int out = 0;
    int t, number;
    cin>>t;
    while(t--)
    {
        cin>>number;
        if(number>=10 && number<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    cout<<in<<" in"<<"\n";
    cout<<out<<" out"<<"\n";

    return 0;
}

