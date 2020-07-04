#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, inc, inc_percentage;
    cin>>a>>b;

    if(a==b)
    {
        cout<<"0.00%\n";
    }
    else
    {
        inc = b - a;
        inc_percentage = (inc*100)/a;
        cout<<fixed<<setprecision(2)<<inc_percentage<<"%\n";
    }
    return 0;
}
