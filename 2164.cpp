#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sq = sqrt(5);
    double num1 = (1+sq)/2;
    double num2 = (1-sq)/2;
    int n;

    cin>>n;

    double num1_pow = pow(num1, n);
    double num2_pow = pow(num2, n);
    double fib =(num1_pow - num2_pow)/sq;

    cout<<fixed<<setprecision(1)<<fib<<"\n";

    return 0;
}
