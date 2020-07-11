/**
 *    author:  rasel kibria
 *    created: 11.07.2020
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n==0)cout<<"E\n";
    if(n>0 && n<36)cout<<"D\n";
    if(n>35 && n<61)cout<<"C\n";
    if(n>60 && n<86)cout<<"B\n";
    if(n>85 && n<101)cout<<"A\n";

    return 0;
}
