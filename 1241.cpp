#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, check;
    int x, y, t;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=a.length();
        y=b.length();

        if(a==b)
        {
            cout<<"encaixa\n";
        }
        else if(x<y)
        {
            cout<<"nao encaixa\n";
        }
        else
        {
            check = a.substr((x-y), (x-1));
            if(check==b)
            {
                cout<<"encaixa\n";
            }
            else

            {
                cout<<"nao encaixa\n";
            }
        }
    }
    return 0;
}
