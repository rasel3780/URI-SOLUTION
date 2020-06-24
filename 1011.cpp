#include<bits/stdc++.h>
#define PI 3.14159
using namespace std;
int main()
{
    double redius, volume;

    cin>>redius;
    volume = (4.0/3) * PI * (redius*redius*redius);

    cout<<"VOLUME = "<<fixed<<setprecision(3)<<volume<<"\n";

    return 0;
}
