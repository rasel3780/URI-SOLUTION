#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;

    for(int i=0; i<100; i++)
    {
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<x<<"\n";
        x = x/2.0;
    }
    return 0;
}
