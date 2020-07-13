#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c, x, y, sum;
    string str[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!",
                      "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"
                     };
    cin>>c;
    while(c--)
    {
        cin>>x>>y;
        sum = x+y;
        cout<<str[sum]<<"\n";
    }
    return 0;
}
