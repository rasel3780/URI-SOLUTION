#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num, avg;
    int pos = 0;
    double sum = 0.0;

    for(int i=0; i<6; i++)
    {
        cin>>num;
        if(num>0)
        {
            pos++;
            sum = sum+num;
        }
    }
    avg = sum/pos;
    cout<<pos<<" valores positivos\n";
    cout<<setprecision(2)<<avg<<"\n";

    return 0;

}

