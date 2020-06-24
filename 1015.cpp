#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1, x2, y1, y2, x, y, dis;

    cin>>x1>>y1>>x2>>y2;
    x = pow((x2-x1),2);
    y = pow((y2-y1),2);
    dis = x+y;
    cout<<fixed<<setprecision(4)<<sqrt(dis)<<"\n";
    return 0;
}

