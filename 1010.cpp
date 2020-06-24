#include<bits/stdc++.h>
using namespace std;
int main()
{
    int code, unit;
    float price;
    float cost=0;

    for(int i =0; i<2 ;i++){
        cin>>code>>unit>>price;
        cost = (unit*price)+cost;
    }
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<cost<<"\n";
    return 0;
}
