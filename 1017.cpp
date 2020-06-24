#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time,avgSpeed;
    double fuel,dis;

    cin>>time>>avgSpeed;
    dis = (time*avgSpeed);
    fuel = dis/12;
    cout<<fixed<<setprecision(3)<<fuel<<"\n";

    return 0;
}
