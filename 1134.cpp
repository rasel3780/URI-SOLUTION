#include<bits/stdc++.h>
using namespace std;

int main()
{
    int alc=0;
    int gas = 0;
    int dis = 0;

    int fuel;
    while(true)
    {
        cin>>fuel;
        if(fuel == 1)
        {
            alc++;
        }
        else if(fuel ==2)
        {
            gas++;
        }
        else if(fuel ==3)
        {
            dis++;
        }
        if(fuel ==4)
        {
            break;
        }
    }
    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<alc<<"\n";
    cout<<"Gasolina: "<<gas<<"\n";
    cout<<"Diesel: "<<dis<<"\n";

    return 0;
}

