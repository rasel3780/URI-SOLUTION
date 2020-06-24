#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i;
    while(1)
    {
        int sum=0;
        cin>>x;
        if(x==0)
        {
            break;
        }
        else if(x%2!=0)
        {
            x=x+1;
        }
        for(i=0; i<5; i++)
        {
            sum = x+sum;
            x=x+2;
        }
        cout<<sum<<"\n";
    }
    return 0;
}

