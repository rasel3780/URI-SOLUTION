#include<bits/stdc++.h>
using namespace std;
int main()
{
    float age, avg, person;
    float sum_of_age;
    while(1)
    {
        cin>>age;
        if(age<0)
        {
            avg = sum_of_age/person;
            cout<<fixed<<setprecision(2)<<avg<<"\n";
            break;
        }
        else
        {
            person++;
            sum_of_age = age + sum_of_age;
        }
    }
    return 0;
}

