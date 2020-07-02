#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name1, name2;
    string choice1, choice2;
    int num1, num2, t, sum;

    cin>>t;
    while(t--)
    {
        cin>>name1>>choice1>>name2>>choice2>>num1>>num2;
        sum=num1+num2;
        if(sum%2==0)
        {
            if(choice1=="PAR")
            {
                cout<<name1<<"\n";
            }
            else
            {
                cout<<name2<<"\n";
            }
        }
        else
        {
            if(choice1=="IMPAR")
            {
                cout<<name1<<"\n";
            }
            else
            {
                cout<<name2<<"\n";
            }
        }
    }
    return 0;
}
