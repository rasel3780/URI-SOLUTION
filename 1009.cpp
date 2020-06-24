#include<bits/stdc++.h>
using namespace std;
int main()
{
    double salary, sold, total_salary;
    string name;

    cin>>name>>salary>>sold;

    total_salary = (sold*.15)+salary;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total_salary<<"\n";

    return 0;
}
