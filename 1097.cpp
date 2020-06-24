#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a =7;
    for(int i=1; i<=9; i=i+2)
    {
        for(int j=1; j<=3; j++)
        {
            cout<<"I="<<i<<" "<<"J="<<a<<"\n";
            a = a-1;
        }
        a=a+5;
    }
}

