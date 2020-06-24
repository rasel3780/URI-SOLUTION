#include<bits/stdc++.h>
#define PI 3.14159
using namespace std;
int main()
{
    double a, b, c, tri, cir, trap, sqr, rec;
    cin>>a>>b>>c;

    tri = 0.5*a*c;
    cir = PI*c*c;
    trap = 0.5*c*(a+b);
    sqr = b*b;
    rec = a*b;

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tri<<"\n";
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<cir<<"\n";
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trap<<"\n";
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<sqr<<"\n";
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rec<<"\n";

    return 0;
}

