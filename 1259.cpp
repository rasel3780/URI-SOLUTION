#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j=0, k=0;
    cin>>n;
    int a[n];
    int odd[n], even[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even[j] = a[i];
            j++;
        }
        else
        {
            odd[k] = a[i];
            k++;
        }
    }
    sort(even, even+j);
    sort(odd, odd+k);
    for(i=0; i<j; i++)
    {
        cout<<even[i]<<"\n";
    }
    for(i=k-1; i>=0; i--)
    {
        cout<<odd[i]<<"\n";
    }
    return 0;
}
