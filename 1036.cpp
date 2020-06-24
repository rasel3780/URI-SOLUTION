#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double bsqr = b*b;

    double x = bsqr - (4*a*c);

    double root = sqrt(x);
    if(a == 0)
    {
        cout<<"Impossivel calcular\n";
    }
    else if(x < 0)
    {
        cout<<"Impossivel calcular\n";
    }
    else
    {
        double r1 = (-b+root)/(2*a);
        double r2 = (-b-root)/(2*a);
        cout<<"R1 = "<<fixed<<setprecision(5)<<r1<<"\n";
        cout<<"R2 = "<<fixed<<setprecision(5)<<r2<<"\n";
    }
    return 0;
}
