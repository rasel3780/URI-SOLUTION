#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, r, i;
    cin>>n;
    int arr[n];
    int ok=0;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            cout<<i+2<<"\n";
            break;
        }
        else if(arr[i]<=arr[i+1])
        {
            ok++;
        }
    }
    if(ok==n)
    {
        cout<<"0\n";
    }
    return 0;
}
