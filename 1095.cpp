#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1;
    int j = 60;
    while(j >= 0)
    {
        cout<<"I="<<i<<" "<<"J="<<j<<"\n";
        j = j - 5;
        i = i + 3;
    }
    return 0;
}

