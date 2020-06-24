#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    double total = 0;
    double coelho = 0;
    double rato = 0;
    double sapo = 0;
    int t;
    double number;
    cin>>t;
    while(t--)
    {
        cin>>number>>name;
        total = number + total;
        if(name == "C")
        {
            coelho=number+coelho;
        }
        else if(name == "S")
        {
            sapo=number+sapo;
        }
        else
        {
            rato=number+rato;
        }
    }
    cout<<"Total: "<<total<<" cobaias\n";
    cout<<"Total de coelhos: "<<coelho<<"\n";
    cout<<"Total de ratos: "<<rato<<"\n";
    cout<<"Total de sapos: "<<sapo<<"\n";

    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<((100*coelho)/total)<<" %\n";
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<((100*rato)/total)<<" %\n";
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<((100*sapo)/total)<<" %\n";

    return 0;
}

