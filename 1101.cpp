#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    while (1)
    {
        int sum = 0;
        cin >> m >> n;
        if (m <= 0 || n <= 0)
        {
            break;
        }
        else if (m > n)
        {
            for (int i = n; i <= m; i++)
            {
                sum = sum + i;
                cout<<i<<" ";
            }
            cout <<"Sum="<< sum << "\n";
        }
        else
        {
            for (int i = m ; i <= n; i++)
            {
                sum = sum + i;
                cout<<i<<" ";
            }
            cout <<"Sum="<< sum << "\n";
        }
    }

    return 0;
}



