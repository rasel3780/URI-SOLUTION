#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,rem;
    cin>>x>>y;
    if(x == y)
    {
        cout<<"O JOGO DUROU 24 HORA(S)\n";
    }
    else if(x>y)
    {
        rem = 24-x;
        rem = rem+y;
        cout<<"O JOGO DUROU "<<rem<<" HORA(S)\n";
    }
    else if(x<y)
    {
        rem = y-x;
        cout<<"O JOGO DUROU "<<rem<<" HORA(S)\n";
    }
    return 0;
}

