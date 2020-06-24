#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hour = 0;
    int min = 0;
    int sec = 0;

    cin>>sec;

    if(sec<60)
    {
        cout<<hour<<":"<<min<<":"<<sec<<"\n";
    }
    else if(sec>=60 && sec<=3600)
    {
        min = sec/60;
        sec = sec%60;
        cout<<hour<<":"<<min<<":"<<sec<<"\n";
    }
    else
    {
        hour = sec/3600;
        min = sec%3600;
        int update_min = min/60;
        sec = min%60;
        cout<<hour<<":"<<update_min<<":"<<sec<<"\n";
    }
    return 0;
}
