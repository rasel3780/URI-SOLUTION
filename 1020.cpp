#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day = 0;
    int month = 0;
    int year = 0;
    int rem_days;

    cin>>day;

    if(day>=365)
    {
        year = day/365;
        cout<<year<<" ano(s)\n";
        rem_days = day%365;
        if(rem_days>=30)
        {
            month = rem_days/30;
            day = rem_days%30;
            cout<<month<<" mes(es)\n";
            cout<<day<<" dia(s)\n";
        }
        else if(rem_days<30)
        {
            cout<<month<<" mes(es)\n";
            cout<<rem_days<<" dia(s)\n";
        }
    }
    else if(day<365)
    {
        cout<<year<<" ano(s)\n";
        month = day/30;
        rem_days = day%30;
        cout<<month<<" mes(es)\n";
        cout<<rem_days<<" dia(s)\n";
    }
    return 0;
}
