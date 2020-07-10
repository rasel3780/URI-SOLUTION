/**
 *    author:  rasel kibria
 *    created: 10.07.2020
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int driver, i, j;
    cin>>driver;
    string name;
    double result, d;
    double score[7];

    for(i=0; i<driver; i++)
    {
        cin>>name>>d;
        for(j=0; j<7; j++)
        {
            cin>>score[j];
        }
        sort(score, score+7);
        // after sorting max will be at index 0 and min will be at index 6
        result = (score[1]+score[2]+score[3]+score[4]+score[5])*d;
        cout<<name<<" "<<fixed<<setprecision(2)<<result<<"\n";
    }
    return 0;
}
