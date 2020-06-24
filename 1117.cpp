#include<bits/stdc++.h>
using namespace std;
int main()
{
    int condition = 0;
    float number;
    float sum = 0.0;
    float avg;
    while(1)
    {
        cin>>number;
        if(number>=0.0 && number <=10.0)
        {
            sum = sum + number;
            condition = 1+condition;
            if(condition== 2)
            {
                break;
            }
        }
        else
        {
            cout<<"nota invalida\n";
        }
    }
    avg = sum/2.0;
    cout<<"media = "<<fixed<<setprecision(2)<<avg<<"\n";
    return 0;
}

