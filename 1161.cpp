#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, m, n, i;
    unsigned long long num1;
    unsigned long long num2;
    unsigned long long sum;
    while(cin>>m>>n)
    {
        num1 = 1;
        num2 = 1;
        for(i=1; i<=m; i++)
        {
            num1 = num1*i;
        }
        for(i=1; i<=n; i++)
        {
            num2 = num2*i;
        }
        sum = num1+num2;
        cout<<sum<<"\n";
    }
    return 0;
}
