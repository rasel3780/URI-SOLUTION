#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    int num;
    cin>>n;
    while(n--)
    {
        num=0;
        cin>>x;
        if(x>1 && x<=3)
        {
            cout<<"Prime\n";
        }
        else if(x<2 || (x>2&& x%2==0))
        {
            cout<<"Not Prime\n";
        }
        else if(x>3 && x%2!=0)
        {
            for(int i=3; i<sqrt(x); i=i+2)
            {
                if(x%i==0)
                {
                    num++;
                }
            }
            if(num>0)
            {
                cout<<"Not Prime\n";
            }
            else
            {
                cout<<"Prime\n";
            }
        }
    }
    return 0;
}
