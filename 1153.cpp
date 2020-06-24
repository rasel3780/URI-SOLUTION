#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int factorial=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        factorial = factorial*i;
    }
    cout<<factorial<<"\n";
    return 0;
}

