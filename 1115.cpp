#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(1)
    {
        cin>>x>>y;
        if(x==0 || y==0)
        {
            break;
        }
        else
        {
            if(x>0 && y>0)
            {
                cout<<"primeiro\n";
            }
            else if(x>0 && y<0)
            {
                cout<<"quarto\n";
            }
            else if(x<0 && y<0)
            {
                cout<<"terceiro\n";
            }
            else
            {
                cout<<"segundo\n";
            }
        }
    }
    return 0;
}

