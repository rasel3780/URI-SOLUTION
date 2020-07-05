/**
 *    author:  rasel kibria
 *    created: 05.07.2020
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long i, n, sum, steal, raid, left, new_size, even;

    cin>>n;
    long long star[n];
    long long new_array[n];

    steal=0;
    sum=0;
    left=0;
    new_size=0;
    raid=0;
    even=0;

    // input
    for(i=0; i<n; i++)
    {
        cin>>star[i];
        sum = sum + star[i];
    }
    //for checking for odd-even
    for(i=0; i<n; i++)
    {
        new_array[i] = star[i];
        new_size++;
        raid++;
        if(star[i]%2==0)
        {
            even++;
            break;
        }
    }
    //for odd number of sheep
    if(even==0)
    {
        for(i=0; i<new_size; i++)
        {
            if(new_array[i]>0)
            {
                steal++;
            }
        }
    }
    //for even number of sheep
    else if(even>0)
    {
        for(i=0; i<new_size; i++)   //forward (i+1)
        {
            if(new_array[i]>0)
            {
                new_array[i] = new_array[i]-1;
                steal++;
            }
        }
        for(i=(new_size-2); i>=0; i--)  //backward(i-1)
        {
            if(new_array[i]>0)
            {
                steal++;
            }
        }
    }
    left = sum - steal;
    cout<<raid<<" "<<left<<"\n";

    return 0;
}
