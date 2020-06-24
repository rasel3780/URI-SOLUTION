#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, mod , rem;
    cin>>n;
    cout<<n<<"\n";

    rem = n/100;
    mod = n%100;
    cout<<rem<<" nota(s) de R$ 100,00"<<"\n";

    rem = mod/50;
    mod = mod%50;
    cout<<rem<<" nota(s) de R$ 50,00"<<"\n";

    rem = mod/20;
    mod = mod%20;
    cout<<rem<<" nota(s) de R$ 20,00"<<"\n";

    rem = mod/10;
    mod = mod%10;
    cout<<rem<<" nota(s) de R$ 10,00"<<"\n";

    rem = mod/5;
    mod = mod%5;
    cout<<rem<<" nota(s) de R$ 5,00"<<"\n";

    rem = mod/2;
    mod = mod%2;
    cout<<rem<<" nota(s) de R$ 2,00"<<"\n";

    rem = mod/1;
    mod = mod%1;
    cout<<rem<<" nota(s) de R$ 1,00"<<"\n";

    return 0;
}
