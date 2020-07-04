#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    int l[1000];
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>l[i];
    }
    for(i=0; i<n; i++)
    {
        if(l[i]%2==0)
        {
            two++;
        }
    }
    for(i=0; i<n; i++)
    {
        if(l[i]%3==0)
        {
            three++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(l[i]%4==0)
        {
            four++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(l[i]%5==0)
        {
            five++;
        }
    }


    cout<<two <<" Multiplo(s) de 2\n";
    cout<<three <<" Multiplo(s) de 3\n";
    cout<<four <<" Multiplo(s) de 4\n";
    cout<<five <<" Multiplo(s) de 5\n";

    return 0;
}
